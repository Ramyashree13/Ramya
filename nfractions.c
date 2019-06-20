#include<stdio.h>
int gcd(int a,int b)
{
        if(b!=0)
                return gcd(b,a%b);
        else
                return a;
}
int main()
{
        int a,b,res;
        printf("enter the two numbers\n");
        scanf("%d%d",&a,&b);
        res=gcd(a,b);
        printf("gcd=%d\n",res);
        return 0;
}
