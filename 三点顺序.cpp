/*现在给你不共线的三个点A,B,C的坐标，它们一定能组成一个三角形，现在让你判断A，B，C是顺时针给出的还是逆时针给出的。*/
/*解决这个问题的重点，是将判定顺逆时针的过程得以数据化
可以使用向量的叉乘来解决，将这三个同一平面的三点视为平面直角坐标系的三点，计算出向量ABx向量AC的结果。
若结果>0，则可知A，B，C是逆时针给出的，否则为顺时针。*/
#include<stdio.h>
void main()
{
    double xa,xb,xc,ya,yb,yc,xab,xac,yab,yac;
    printf("请按顺序A，B，C的坐标：");
    scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc);
    xab=xb-xa,xac=xc-xa,yab=yb-ya,yac=yc-ya;
    if(xab*yac-xac*yab==0)
        printf("输入坐标有误！\n");
    else if(xab*yac-xac*yab>0)
        printf("A，B，C是逆时针给出的。\n");
    else if(xab*yac-xac*yab<0)
        printf("A，B，C是顺时针给出的。\n");
}