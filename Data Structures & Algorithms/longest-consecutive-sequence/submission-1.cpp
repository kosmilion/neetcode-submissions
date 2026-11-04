class Solution {
public:
int longestConsecutive(vector<int>& nums){
    if(nums.empty()) return 0;
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longestSeq = 0;
    for(int i = 0; i < nums.size(); ++i){
        int currentNum = nums[i];
        if(numSet.find(currentNum - 1) != numSet.end()) continue;
        
        int currSeq = 1;
        while(numSet.find(currentNum + 1) != numSet.end()){
            currentNum++;
            currSeq++;
        }
        longestSeq = max(longestSeq, currSeq);
    }

    return longestSeq;
}
};
