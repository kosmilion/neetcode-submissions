class Solution {
public:
int minEatingSpeed(vector<int>& piles, int h) {
    int left = 1;
    int right = 0;
    for(int& pile : piles){
        right = max(right, pile);
    }

    while(left < right){
        int mid = left + (right - left) / 2;

        int time = 0;
        for(int pile : piles){
            time += (pile + mid - 1) / mid;
        }

        if(time > h) left = mid + 1;
        if(time <= h) right = mid;
    }

    return right;
}
};
