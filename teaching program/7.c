//十进制转二进制
#include <stdio.h>
#include <stdlib.h>

int a,b,c,i;
int x,y;
int num;
int miyunsuan(int x,int y);
int jisuan (int x);

int main ()
{
    int i=0;
    int b=0;
    printf ("this procedure will help you change a Decimal number to a Binary number\n");
    printf ("please input the number you want to transform\n");
    printf ("and press ENTER to continue\n");
    scanf ("%d",&a);
    jisuan(a);
    
    printf ("if you want to continue,\n");
    printf ("just input 1.\n");
    printf ("but if you want to close it,\n");
    printf ("you can press any numbers to close it \n");
    
    scanf ("%d",&c);
    while (c==1)
    {
        printf ("please input the number you want to transform\n");
        printf ("and press ENTER to continue\n");
        scanf ("%d",&a);
        jisuan(a);
        printf ("if you want to continue,\n");
        printf ("just input 1.\n");
        printf ("but if you want to close it,\n");
        printf ("you can press any numbers to close it \n");
        scanf ("%d",&c);
    }
    return 0;
}


int jisuan(int x)
{
    int i=0;
    int b=0;
    while (x>=2)
    {
        b=b+(x%2)* miyunsuan(10,i);
        x=(x-x%2)/2;
        i++;
    }
    b=b+x* miyunsuan(10,i);
    printf ("%d\n",b);
    return a;
}





int miyunsuan(int x,int y)
{
    if (y==0)
    return 1;
    else 
    num =1;
    for (i=1;i<=y;i++)
    {
        num*=x;
    }
    return num;
}