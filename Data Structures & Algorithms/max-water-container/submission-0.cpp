class Solution {
public:
int maxArea(vector<int>& heights){
    int left = 0;
    int right = heights.size() - 1;

    int maxArea = 0;
    while(left < right){
        int a = right - left;
        int h = min(heights[left], heights[right]);
        int area = a * h;
        maxArea = max(area, maxArea);
        if(heights[left] < heights[right]) left++;
        else right--;
    }

    return maxArea;
}
};
