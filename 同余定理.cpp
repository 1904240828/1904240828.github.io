/*同余定理：给定一个正整数m，如果两个整数a和b满足a-b能够被m整除，即（a-b)/m得到一个整数，那么就称整数a与b对模m同余，记作a≡b(mod m)。对模m同余是整数的一个等价关系。*/
//下列代码为判断两个数是否同余
#include<stdio.h>
void main()
{
    int a=0,b=0,c=0;
    while(a<=0){
        printf("请输入任意正整数：");
        scanf("%d",&a);
        }
    while(b<=0||c<=0){
        printf("请输入要判断是否同余的两个正整数：");
        scanf("%d%d",&b,&c);
        }
    if((b-c)%a==0)
        printf("%d 和 %d 对模 %d 同余",b,c,a);
    else
        printf("%d 和 %d 对模 %d 不同余",b,c,a);
}