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
        c=a%b;
        printf("c=%d\n",c);
        while(true)
        {
                if(c==0)
                        return b;
                else
                {
                        a=b;
                        b=c;
                }
        }
}

void input(struct fraction a[],int *n)
{
        int i;
        printf("enter the size of arraqy\n");
        scanf("%d",n);
        printf("enter the fraction number\n");
        for(i=0;i<*n;i++)
                scanf("%d%d",&a[i].num,&a[i].den);
        for(i=0;i<*n;i++)
        printf(" %d/%d\n",a[i].num,a[i].den);
}
void compute(struct fraction a[],int *n)
{
        /*int i;
        for(i=0;i<*n;i++)
                printf("%d%d",a[i].num,a[i].den);*/
        int gcd1,num1,den1,i,p=1,l,b[*n],r=0;
        for(i=0;i<*n;i++)
                p*= a[i].den;
        printf("%d\n",p);

        for(i=0;i<*n;i++)
        {
                l=p/a[i ].den;
                b[i]=l * a[i].num;
        }
        for(i=0;i<*n;i++)
                r=r+b[i];
        printf("%d\n",r);
        gcd1=gcd(r,p);
        printf("gcd=%d\n",gcd1);
        num1=r/gcd1;
        den1=p/gcd1;
        printf("%d\n%d\n",num1,den1);




}
int main()
{
        struct fraction a[5];
        int n;
        input(a,&n);
        compute(a,&n);
        return 0;

}

~

