class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> allSums;

    sort(nums.begin(), nums.end());

    int n = nums.size();
    for(int i = 0; i < n - 1; i++){
        if(i > 0 && nums[i - 1] == nums[i]) continue;

        int left = i + 1;
        int right = n - 1;
        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == 0){
                allSums.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
                while(left < right && nums[right] == nums[right + 1]){
                    right--;
                }
                while(left < right && nums[left] == nums[left - 1]){
                    left++;
                }
            }
            else if(sum < 0) left++;
            else right--;
        }
    }

    return allSums;
}
};
