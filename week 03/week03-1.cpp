//week03-1.cpp
//leetcode 2579. Count total number of colored cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans=n;//要多寫這行把數字變成64位元
        return ans*ans + (ans-1)*(ans-1);//c/c++都要加分號
    }
};
