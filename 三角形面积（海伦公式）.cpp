//海伦公式：它是利用三角形的三条边的边长直接求三角形面积的公式。
//S=√p(p-a)(p-b)(p-c)
//p=1/2*（a+b+c)
#include<stdio.h>
#include<math.h>
void main()
{
    double a=0,b=0,c=0,p,s;
    while((a+b<=c)||(a+c<=b)||(b+c<=a))
    {
        printf("请输入三角形的三条边长：");
        scanf("%lf%lf%lf",&a,&b,&c);
        }
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("该三角形的面积为 %.3f",s);
}