///1780. Check if Number is a Sum of Powers of Three
///week06-3.cpp
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){//�u�nn�٦��Ʀr�A�N��֭鱼3������
        if(n%3==2)return false;
        n=n/3;//�鱼3���Q��}
    }
    return true;
    }
};
