class Solution {
public:
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> nums_map;
    for(int i = 0; i < nums.size(); i++){
        nums_map[nums[i]]++;
    }

    vector<vector<int>> frequency(nums.size() + 1);
    for(auto& [num, freq] : nums_map){
        frequency[freq].push_back(num);
    }

    vector<int> res;
    for(int i = frequency.size() - 1; i >=0 && res.size() < k; i--){
        for(int num : frequency[i]){
            res.push_back(num);
            if(res.size() == k) break;
        }
    }

    return res;
}
};
