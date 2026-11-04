class Solution {
public:
int longestConsecutive(vector<int>& nums) {
    if(nums.empty()) return 0;

    unordered_set<int> numSet(nums.begin(), nums.end());
    int res = 0;
    for(int i = 0; i < nums.size(); i++){
        if(numSet.count(nums[i] - 1)) continue;
        int count = 1;
        while(numSet.count(nums[i] + count)){
            count++;
        }
        res = max(res, count);
    }

    return res;
}
};
