class Solution {
public:
    int getSum(int a, int b) {
    while(b!=0){
        // find carry
        int carry=a&b;
        // sum without carry
        a=a^b;
        // shift the carry in one position to left ,add it in the next iteration
        b=carry<<1;

    }    
    return a;
    }
};
