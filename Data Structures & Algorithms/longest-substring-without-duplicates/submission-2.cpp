class Solution {
public:
int lengthOfLongestSubstring(string s) {
    vector<int> lastCharIdx(128, -1);
    int left = 0;
    int maxLen = 0;
    for(int right = 0; right < s.length(); right++){
        int charIdx = s[right];
        if(lastCharIdx[charIdx] >= left){
            left = lastCharIdx[charIdx] + 1;
        }
        lastCharIdx[charIdx] = right;
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
};
