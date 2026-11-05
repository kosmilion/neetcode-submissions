class Solution {
public:
vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> days(n, 0);
    vector<int> stack;

    for(int i = 0; i < n; i++){
        while(!stack.empty() && temperatures[stack.back()] < temperatures[i]){
            days[stack.back()] = i - stack.back();
            stack.pop_back();
        }
        stack.push_back(i);
    }

    return days;
}
};
