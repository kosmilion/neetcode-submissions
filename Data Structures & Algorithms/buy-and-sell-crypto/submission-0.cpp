class Solution {
public:
int maxProfit(vector<int>& prices) {
    int buy_day = 0;
    int res = 0;
    for(int i = 1; i < prices.size(); ++i){
        if(prices[buy_day] > prices[i]){
            buy_day = i;
        }
        res = max(res, prices[i] - prices[buy_day]);
    }

    return res;
}
};
