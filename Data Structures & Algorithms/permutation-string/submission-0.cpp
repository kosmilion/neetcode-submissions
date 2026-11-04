class Solution {
public:
bool checkInclusion(string s1, string s2) {
    if(s2.length() < s1.length()) return false;

    vector<int> s1_letters(26, 0);
    vector<int> window_letters(26, 0);

    for(int i = 0; i < s1.length(); i++){
        s1_letters[s1[i] - 'a']++;
        window_letters[s2[i] - 'a']++;
    }
    
    int left = 0;
    for(int right = s1.length(); right < s2.length(); right++){
        if(s1_letters == window_letters) return true;

        window_letters[s2[right] - 'a']++;
        window_letters[s2[left] - 'a']--;
        left++;
    }

    return s1_letters == window_letters;    
}
};
