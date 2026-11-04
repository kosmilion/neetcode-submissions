class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); ++i){
        if(map.count(nums[i])){
            int idx = map[nums[i]];
            return {idx, i};
        }
        map[target - nums[i]] = i;
    }
}
};
