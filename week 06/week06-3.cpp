///1780. Check if Number is a Sum of Powers of Three
///week06-3.cpp
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){//只要n還有數字，就剝皮剝掉3的倍數
        if(n%3==2)return false;
        n=n/3;//剝掉3的被數}
    }
    return true;
    }
};
