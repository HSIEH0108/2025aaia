//week03-1.cpp
//leetcode 2579. Count total number of colored cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans=n;//�n�h�g�o���Ʀr�ܦ�64�줸
        return ans*ans + (ans-1)*(ans-1);//c/c++���n�[����
    }
};
