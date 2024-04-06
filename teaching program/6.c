//关于八进制数，十六进制数与关于ascⅡ码的一些问题
#include <stdio.h>
#include <stdlib.h>

int eihei(int b);
int bajinzhi1(int c);
int shiliujinzhi1(int d);
int bajinzhi2(int e);
int shiliujinzhi2(int f);
int askma(int g);
int x ,y ,a ,b ,c;


int main ()
{
    int a ;
    printf ("If you want to change a Octal number to Decimal number,\n");
    printf ("please input 1\n");
    printf ("If you want to change Hexadecimal number to Decimal number,\n");
    printf ("please input 2\n");
    printf ("If you want to change a Decimal number to Octal number,\n");
    printf ("please input 3\n");
    printf ("If you want to change Decimal number to Hexadecimal number,\n");
    printf ("please input 4\n");
    printf ("If you want to know the ASCII corresponding which symbol,\n");
    printf ("Please input 5\n");

    scanf ("%d",&a);
    eihei (a);
    printf ("If you want to continue the terminal,\n");
    printf ("then press 1 to do it\n");
    printf ("you can also press any keys to close it\n");
    scanf ("%d",&c);
    while (c==1)
    {
        printf ("If you want to change a Octal number to Decimal number,\n");
        printf ("please input 1\n");
        printf ("If you want to change Hexadecimal number to Decimal number,\n");
        printf ("please input 2\n");
        printf ("If you want to change a Decimal number to Octal number,\n");
        printf ("please input 3\n");
        printf ("If you want to change Decimal number to Hexadecimal number,\n");
        printf ("please input 4\n");
        printf ("If you want to know the ASCII corresponding which symbol,\n");
        printf ("Please input 5\n");

        scanf ("%d",&a);
        eihei(a);
        printf ("If you want to continue the terminal,\n");
        printf ("then press 1 to do it\n");
        printf ("you can also press any keys to close it\n");
        scanf ("%d",&c);
    }
    
    return 0;
}

int bajinzhi1 (int y)//八进制转十进制
{
    printf ("Please input the number you want to change\n");
    scanf ("%o",&y);//%o 为输入八进制数的符号
    printf ("The Decimal number is %d\n",y);
    printf (" \n");
}



int shiliujinzhi1 (int y)//十六进制转十进制
{
    printf ("Please input the number you want to change\n");
    scanf ("%x",&y);
    printf ("The Decimal number is %d\n",y);
    printf (" \n");
}

int bajinzhi2 (int y)//十进制转八进制
{
    printf ("Please input the number you want to change\n");
    scanf ("%d",&y);//%o 为输入八进制数的符号
    printf ("The Octal number is %o\n",y);
    printf (" \n");

}



int shiliujinzhi2 (int y)//十进制转十六进制
{
    printf ("Please input the number you want to change\n");
    scanf ("%d",&y);
    printf ("The Hexadecimal number is %x\n",y);
    printf (" \n");
}

int askma (int y)//ASCII码
{
    printf ("Please input the symbol's ASCII code\n");
    scanf ("%d",&y);
    printf ("%c\n",y);
    printf (" \n");
}


int eihei(int x)//判断函数
{
    if (x==1) 
    return bajinzhi1(x);
    else if (x==2)
    return shiliujinzhi1(x);
    if (x==3) 
    return bajinzhi2(x);
    else if (x==4)
    return shiliujinzhi2(x);
    else if (x==5)
    return askma(x);
    else 
    return 0;
}