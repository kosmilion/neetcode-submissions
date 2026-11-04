class Solution {
public:
int carFleet(int target, vector<int>& position, vector<int>& speed) {
    if(position.size() == 0) return 0;

    vector<pair<int, int>> cars;
    int carFleets = 1;

    for(int i = 0; i < position.size(); i++){
        cars.push_back({position[i], speed[i]});
    }

    sort(cars.begin(), cars.end());

    double groupTime = (target - cars[cars.size() - 1].first) / cars[cars.size() - 1].second;
    for(int i = cars.size() - 2; i >= 0; i--){
        double time = (double)(target - cars[i].first) / cars[i].second;
        if(time > groupTime){
            carFleets++; 
            groupTime = time;
        }
    }

    return carFleets;
}
};
