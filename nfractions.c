#include<stdio.h>
struct fraction
{
        int num;
        int den;
};
int gcd(int a,int b)
{
        int c;
        char true=1;
        while(true)
        {
                c=a%b;
                if(c==0)
                        return b;
                else
                {
                        a=b;
                        b=c;
                }
        }
}

void input(int n,struct fraction a[])
{
        int i;
        printf("enter the fraction number\n");
        for(i=0;i<n;i++)
                scanf("%d%d",&a[i].num,&a[i].den);
        for(i=0;i<n;i++)
        printf(" %d/%d\n",a[i].num,a[i].den);
}
void compute(int n,struct fraction a[],struct fraction *s)
{

        int gcd1,i,p=1,l,b[n],r=0;
        for(i=0;i<n;i++)
                p*= a[i].den;
        printf("%d\n",p);

        for(i=0;i<n;i++)
        {
                l=p/a[i ].den;
                b[i]=l * a[i].num;
        }
        for(i=0;i<n;i++)
                r=r+b[i];
        printf("%d\n",r);
        gcd1=gcd(r,p);
        printf("gcd=%d\n",gcd1);
        s->num=r/gcd1;
        s->den=p/gcd1;

}
void output(struct fraction sum)
{
        printf("the sum of fractions is= %d/%d",sum.num,sum.den);
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
        output(sum);
        return 0;

}


-- INSERT --                                             
