/*筛法求素数的基本原理：用筛法求素数的基本思想是：把从1开始的、某一范围内的正整数从小到大顺序排列， 1不是素数，首先把它筛掉。剩下的数中选择最小的数是素数，然后去掉它的倍数。依次类推，直到筛子为空时结束。 */
/*根据该方法的基本原理，可以选择用数组表示出一组数字，并通过for循环修改将非素数修改为0，最终输出素数*/
#include<stdio.h>
int prime (int a)//求素数
{
    int i;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
void main()
{
    int a[100],n,i,j;
    printf("请输入范围上限（<=100）：");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        a[i]=i;
    a[1]=0;
    for(i=2;i<=n;i++)
    {
        if(!prime(a[i]))
        {
            for(j=1;j<n;j++)
                if(j*i<=n)
                    a[j*i]=0;
        }
    }
    printf("所得质数为：");
    for(i=0;i<n;i++)
    {
        if(a[i])
            printf(" %d ",a[i]);
    }
}