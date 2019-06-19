#include<stdio.h>
void getinput(int *n,int *p);
void compute(int *n,int *p,int *sum);
void output(int *sum);
int main()
{
        int a[10],n,sum=0;
        int *p;
        p=a;
        getinput(&n,p);
        compute(&n,p,&sum);
        output(&sum);
}
void getinput(int *n,int *p)
{
        int i;
        printf("enter the array size\n");

        scanf("%d",n);
        printf("enter the array values\n");
        for(i=0;i<*n;i++)
                scanf("%d",(p+i));
}
void compute(int *n,int *p,int *sum)
{
        int i;
        for(i=0;i<*n;i++)
                *sum=*sum+*(p+i);
}
void output(int *sum)
{
                printf("sum=%d\n",*sum);
}
