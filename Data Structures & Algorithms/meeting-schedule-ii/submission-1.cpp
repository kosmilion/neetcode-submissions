/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
int minMeetingRooms(vector<Interval>& intervals) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int minRooms = 0;

    if(intervals.empty()) return minRooms;

    sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b){
        return a.start < b.start;
    });

    for(auto& interval : intervals){
        if(!pq.empty() && pq.top() <= interval.start){
            pq.pop();
        }
        pq.push(interval.end);
    }

    return pq.size();
}
};
