///week10-4.cpp
///LeetCode 1399.Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100]={};
        int largest = 0;
        for(int i=1;i<=n;i++){
            int now=i; //�{�b�n��֪��Ʀr
            int total=0; //�j��e��total�O0
            while(now>0){
                ///�j����A��total�@���[�_��
                total+=now%10; //���now%10��C�@��ơA�a�Dtotal��
                now=now/10; //��֫�now�ܤp�F
            }
            a[total]++; //�j���A���n�έptotal���X�{����
            if(a[total]> largest) largest=a[total];
        }
        int ans = 0;
        for(int i=0;i<100;i++){
            if(a[i]==largest) ans++;
        }
        return ans;
    }
};
