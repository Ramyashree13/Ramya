# include<stdio.h>
struct fraction
{
        int num;
        int den;
};

int gcd(int a, int b)
{
                int t;
                char true=1;

                while(true)
                {
                        t=a%b;
                        if(t==0)
                                return b;
                        else
                        {
                                a=b;
                                b=t;
                        }
                }


}

int compute(struct fraction *f1,struct fraction *f2,int *lcm)
{

        int r,sum,m,n;
        r=gcd(f1->den,f2->den);
        printf("gcd=%d\n",r);
        *lcm=(( f1->den) * (f2->den)) / r;
        printf("lcm=%d\n",*lcm);
        m=(f1->num * (*lcm))/ f1->den;
        n=(f2->num * (*lcm))/ f2->den;
        sum=m+n;
        return sum;
}
void output(int result,struct fraction a,struct fraction b,int *lcm)
{
        printf("%d/%d\n%d/%d=%d/%d",a.num,a.den,b.num,b.den,result,*lcm);
}


int main()
{
        struct fraction f1,f2;
        struct fraction *p1,*p2;
        int result,lcm=0;
        p1=&f1;
        p2=&f2;
        input(p1,p2);
        result=compute(p1,p2,&lcm);
        output(result,f1,f2,&lcm);

}




void input(struct fraction *f1,struct fraction *f2)
{
        printf("enter 1st and 2nd number\n");
        scanf("%d%d%d%d",&f1->num,&f1->den,&f2->num,&f2->den);
        printf("the first number is %d/%d\n the second number is %d/%d\n",f1->num,f1->den,f2->num,f2->den);
}


