///week12-2.cpp
///Fibonacci 數列是什麼
#include<stdio.h>
int main()
{///陣列宣告，右邊有他的值，沒寫的都放0
    int a[30]={0,1};
    printf("1 ");
    for(int i=2;i<30;i++){
    a[i]=a[i-1]+a[i-2];
    printf("%d",a[i]);
    }
}
