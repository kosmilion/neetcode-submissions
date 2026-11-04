class Solution {
public:

int characterReplacement(string s, int k){

    int left = 0;
    int max_freq = 0;
    int res = 0;
    vector<int> freq(26, 0);
    for(int right = 0; right < s.length(); right++){
        freq[s[right] - 'A']++;
        int len = right - left + 1;
        max_freq = max(max_freq, freq[s[right] - 'A']);

        if(len - max_freq > k){
            freq[s[left] - 'A']--;
            left++;
        }

        res = max(res, right - left + 1);
    }

    return res;
}
};
