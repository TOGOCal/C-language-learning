//打印杨辉三角
#include <stdio.h>
#include <stdlib.h>

int x,y,z;
int a,b,c;
int i,n;
long long int plA(int x,int y);
long long int plC(int x,int y);
long long c1;
long long c2,c3;
int Input;

int main()
{
    scanf ("%d",&Input);
    if (Input==0)
    printf ("\n");
    else 
    {
        for (a=1;a<=Input;a++)
        {
            for (b=1;b<=a;b++)
            {
                printf ("%ld ",plC(b-1,a-1));
            }
            printf ("\n");
        }
    }
    system ("pause");
    return 0;
}

long long int plA(int x,int y)
{
    long long int num=1;
    for (z=0;z<x;z++)
    {
        n=y-z;
        num*=n;
    }
    return num;
}

long long int plC(int x,int y)
{
    c1=plA(x,y);
    c2=plA(x,x);
    if (c1!=0)
    c3=c1/c2;
    else 
    c3=1;
    return c3;
}
