class Solution {
public:
int climbStairs(int n){
    int a_n2 = 1;
    int a_n1 = 2;

    if(n == 1) return a_n2;

    for(int i = 3; i <= n; i++){
        int tmp = a_n1;
        a_n1 = a_n1 + a_n2;
        a_n2 = tmp;
    }

    return a_n1;
}
};
