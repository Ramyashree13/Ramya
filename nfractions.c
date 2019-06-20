#include<stdio.h>

int gcd(int a[],int *z)
{
        int c,r,i,m,n,res;
        char true=1;
        m=a[0];
        for(i=1;i<*z;i++)
        {
                n=a[i];
                while(true)
                 {
                        c=m%n;
                        if(c==0)
                        {

                                if(i<*z)
                                        return n;
                                else
                                {
                                        printf("%d\n",n);
                                        res=n;
                                        break;
                                }
                        }
                        /*else if(i==*z)
                        {
                                r=c;
                                printf("gcd=%d\n",r);
                                return r;
                                //break;
                        }*/
                        else
                        {
                                m=n;
                                n=c;
                        }
                }
                m=res;
        }



}
int main()
{
        int n,a[10],i,b;
        printf("enter the size\n");
        scanf("%d",&n);
        printf("enter the number\n ");
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        b=gcd(a,&n);
        printf("gcd=%d\n",b);

        return 0;
}
