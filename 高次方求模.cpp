//高次方求模即求a 的 b 次方对 c 取余的值。
/*高次方求模可用到蒙哥马利幂模运算，由于a*b%n=(a%n)*(b%n)%n，则可知a^b mod c=(a mod c)^b mod c
对于任意指数E，都可采用以下算法计算D=C^E%N：

D=1

WHILE E>=0

IF E%2=0

C=C*C%N

E=E/2

ELSE

D=D*C%N

E=E-1

RETURN N
*/
#include<stdio.h>
#include<math.h>
double powmod(int a,int b,int n)
{
    if(b==1)
        return a%n;
    int t=(int)pow((double)a,b/2);
    int result=(t*t)%n;
    if(b%2==1)
        result=(result*a)%n;
    return result;
}
void main()
{
    int a,b,n;
    printf("请依次输入底数a，幂b与一个整数n：");
    scanf("%d%d%d",&a,&b,&n);
    printf("%d 的 %d 次方对 %d 取余的值为 %.0f\n",a,b,n,powmod(a,b,n));
}