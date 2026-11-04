class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> res;
    unordered_map<string, vector<string>> map;

    for(int i = 0; i < strs.size(); i++){
        string sorted = strs[i];
        sort(sorted.begin(), sorted.end());
        map[sorted].push_back(strs[i]);
    }

    for(auto& p : map){
        res.push_back(p.second);
    }

    return res;
}
};
