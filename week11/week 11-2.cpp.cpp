///week 11-2.cpp
#include <stdio.h>

int main()
{
    printf("請輸入1個整數(ex. 183)");
    int n;
    scanf("%d",&n);///讀入n
    int ans=0;
    while(n>0){
        if(n%10 > ans)ans=n%10;
        printf("剝皮 %d\n",n%10);
        n=n/10;
        }
        printf("最大的皮是 %d\n",ans);
}
