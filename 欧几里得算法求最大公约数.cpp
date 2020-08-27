/*欧几里得算法定理：两个整数的最大公约数等于其中较小的那个数和两数相除余数的最大公约数*/
/*这个算法的实现需要需要不停交换新获得的数来代替原本两个数中较大的数来辗转相除，直至求出最大公约数，基本的框架可以用while循环加简单的交换两数的代码完成*/
#include"stdio.h"
void main()
{
    int a,b;
    printf("请输入两个正整数：");
    scanf("%d%d",&a,&b);
    while(b)
    {
        if(a>b){
            a=a+b;
            b=a-b;
            a=a-b;//交换a，b的值
            }
        else if(a==b)
        {
            printf("它们的最大公约数是 %d",a);
            return;
        }
        b=b%a;//辗转相除
    }
    printf("它们的最大公约数：%d",a);
}