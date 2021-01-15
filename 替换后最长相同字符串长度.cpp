/*424:����һ�����ɴ�дӢ����ĸ��ɵ��ַ���������Խ�����λ���ϵ��ַ��滻��������ַ����ܹ�������滻 k �Ρ���ִ�������������ҵ������ظ���ĸ����Ӵ��ĳ���
*/
class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0,max_count = 0;
        int left = 0, right = 0;
        int n = s.length();
        int count[26] = {0};
        while(right < n) {
            count[s[right] - 'A']++;
            max_count = max(max_count,count[s[right] - 'A']);
            if(right - left + 1 - max_count > k) {
                count[s[left] - 'A']--;
                left++;
            }
            ans = max(right - left + 1,ans);
            right++;
        }
        return ans;
    }
};
