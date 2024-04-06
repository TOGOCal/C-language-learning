//计算一个数二进制1的个数
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>

int jisuan1(int x);
int jisuan2(int x);
int jisuan3(int x);

int main ()
{
    int a;
    scanf ("%d",&a);
    int a1=jisuan1(a);
    int a2=jisuan2(a);
    int a3=jisuan3(a);
    printf ("%d\n",a1);
    printf ("%d\n",a2);
    printf ("%d\n",a3);
    return 0;
}

int jisuan1(int x)//数学方法
{
    int num;
    while (x>0)
    {
        if (x%2==1)
        {
            num++;
        }
        x/=2;
    }
    return num;
}

int jisuan2(int x)//按位与
{
    int num=0;
    int i;
    while (x)
    {
        if (x&1==1)
        {
            num++;
        }
        x=x>>1;   
    }
    return num;
}

int jisuan3(int x)//消1法，每次运行消除一个1
{
    int num=0;
    while (x)
    {
        x=x&(x-1);
        num++;
    }
    return num;
}