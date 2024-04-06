#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int eihei(int x);
int miyunsuan(int x,int y);

int main()
{
    long int a;
    int c;
    scanf ("%ld",&a);

    c=eihei(a);
    system ("cls");
    printf ("%d\n",c);
    system ("pause");
    return 0;
}

int eihei(int x)
{
    int b=x%10;
    static int d=0;
    d+=b*miyunsuan(10,printf ("%d",x)-1);
   
    if (x>9)
    {
        eihei(x/10);
    }
    return d;
}


int miyunsuan (int x, int y)
{
    if (0==y)
    return 1;
    if (1==y)
    return x;
    int t =miyunsuan (x,y/2)*miyunsuan(x,y/2);
    if (y%2==0)
    return t;
    else 
    return t*x;
}