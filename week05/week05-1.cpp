///week05-1.cpp
///主題:陣列array配合for迴圈

#include<stdio.h>
int main()
{
    int a[4]={10,20,30,40};
    for (int i=0;i<4;i++){
        printf("%d",a[i]);

    }///電腦的for迴圈從0開始
    printf("\n");///跳行

    a[0]=99;///把a[0]換成99
    for (int i=0;i<4;i++){
        printf("%d",a[i]);
    printf("\n");
}
}
