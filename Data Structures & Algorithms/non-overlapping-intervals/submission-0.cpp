class Solution {
public:
int eraseOverlapIntervals(vector<vector<int>>& intervals){
    if(intervals.empty()) return 0;

    sort(intervals.begin(), intervals.end());
    
    int toRemove = 0;
    int lastEnd = intervals[0][1];

    for(int i = 1; i < intervals.size(); i++){
        if(lastEnd > intervals[i][0]){
            toRemove++;
            lastEnd = min(lastEnd, intervals[i][1]);
        }
        else{
            lastEnd = intervals[i][1];
        }
    }

    return toRemove;
}
};
