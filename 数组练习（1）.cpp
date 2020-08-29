/*输入一个整数数组,调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。*/
#include<stdio.h>
int t=0,n=0;
void sort(int* a)//将数组分类为奇数与偶数两部分
{
    int i,j;
    for(i=0; i<n; i++)
    {
        if(a[i]%2==1)
            t++;
    }
    for(i=0; i<t; i++)
    {
        if(a[i]%2==0) {
            for(j=t; j<n; j++) {
                if(a[j]%2==1)
                {
                    a[i]=a[i]+a[j];
                    a[j]=a[i]-a[j];
                    a[i]=a[i]-a[j];
                    break;
                }
            }
        }
    }
}
void main()
{
    int a[100],i;
    printf("请输入数组元素个数n：");
    scanf("%d",&n);
    printf("请输入整数数组中的元素：");
    for(i=0; i<n; i++)
        scanf("%d",a+i);
    sort(a);
    printf("分类之后的数组如下：");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}