/*424:给你一个仅由大写英文字母组成的字符串，你可以将任意位置上的字符替换成另外的字符，总共可最多替换 k 次。在执行上述操作后，找到包含重复字母的最长子串的长度
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
