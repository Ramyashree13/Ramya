#include<stdio.h>
struct fraction
{
        int num;
        int den;
};
int gcd(int a,int b)
{
        int c;
        while(c=a%b)
        {
                a=b;
                b=c;
        }
        return b;
}

void input(int n,struct fraction a[])
{
        int i;
        printf("enter the fraction number\n");
        for(i=0;i<n;i++)
                scanf("%d/%d",&a[i].num,&a[i].den);
}
void compute(int n,struct fraction a[n],struct fraction *s)
{

        int gcd1,i,p=1,l,b[n],r=0;
        for(i=0;i<n;i++)
                p*= a[i].den;

        for(i=0;i<n;i++)
        {
                l=p/a[i ].den;
                b[i]=l * a[i].num;
        }
        for(i=0;i<n;i++)
                r=r+b[i];
        gcd1=gcd(r,p);
        s->num=r/gcd1;
        s->den=p/gcd1;

}
void output(int n,struct fraction a[n],struct fraction sum)
{
        for (int i=0;i<n;i++)
                printf(" %d/%d +",a[i].num,a[i].den);
        printf("=%d/%d",sum.num,sum.den);
}


int main()
{
        int n;
        struct fraction sum,*s;
        s=&sum;
        printf("enter the array size");
        scanf("%d",&n);
        struct fraction a[n];
        input(n,a);
        compute(n,a,s);
        output(n,a,sum);
        return 0;

}


-- INSERT --                                             
