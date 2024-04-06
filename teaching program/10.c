//二进制转十进制
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


long a,b;
int c;
int x,y;
int X,Y;
int i;
int num;


int miyunsuan(int x,int y);
int zhuanhuan(int a);


int main ()
{
    printf ("this procedure will help you change a Binary number to a Decimal number\n");
    printf ("please input the number you want to transform\n");
    printf ("and press ENTER to continue\n");
    scanf ("%ld",&a);
    zhuanhuan(a);

    printf ("if you want to continue this progress,\n");
    printf ("you can input 1 to continue\n");
    printf ("you can alse input any keys to stop it\n");
    scanf ("%d",&c);
    while(c==1)
    {
    
        

        printf ("please input the number you want to transform\n");
        printf ("and press ENTER to continue\n");
        scanf ("%ld",&a);
        zhuanhuan(a);
        printf ("if you want to continue this progress,\n");
        printf ("you can input 1 to continue\n");
        printf ("you can alse input any keys to stop it\n");
        scanf ("%d",&c);

    
   
    }
   

    return 0;
}


int zhuanhuan(int x)
{
    int i=0;
    long b=0;
    while (x>1)
    {
        b=b+(x%10)* miyunsuan(2,i);
        x=(x-x%10)/10;
        i++;
    }
    b=b+x* miyunsuan(2,i);
    printf ("%d\n",b);
    return 0;
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