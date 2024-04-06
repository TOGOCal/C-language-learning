#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

void hanshu(int x);
int main()
{
    char arrr[100][100];
    strcpy(arrr[0],"miyunsuan\0");//幂运算
    strcpy(arrr[1],"shuru\0");//输入
    strcpy(arrr[2],"maopaopaixu\0");//冒泡排序
    int i;
    int ch;
    eihei:
    
    i=0;
    char arr[20]={'\0'};
    while ((ch=getchar())!='\n')
    {
        arr[i]=ch;
        i++;
    }

    int ii;
    for (ii=0;ii<100;ii++)
    {
        if (strcmp(arr,arrr[ii])==0)
        break;
    }

    system("cls");
    if (ii==99)
    {
        printf ("wrong\n");
        goto eihei;
    }
    hanshu(ii);

    printf ("\n");
    Sleep(1000);
    printf ("if you want to continue;\n");
    printf ("then input '1'\n");
    ch=getchar();
    if (ch=='1')
    {
        getchar();
        system("cls");
        goto eihei;
    }
    return 0;
}

void hanshu(int x)
{
    if (x==0)
    {
        printf ("int miyunsuan (int x, int y)\n");
        printf ("{\n");
        printf ("   if (0==y)\n");       
        printf ("   return 1;\n");    
        printf ("   if (1==y)\n");       
        printf ("   return x;\n");      
        printf ("   int t =miyunsuan (x,y/2)*miyunsuan(x,y/2);\n");
        printf ("   if (y%2==0)\n");
        printf ("   return t;\n");
        printf ("   else \n");     
        printf ("   return t*x;\n");
        printf ("}\n");
    }

    else if (x==1)
    {
        printf ("int shuru(int x,int arr[x])\n");
        printf ("{\n");
        printf ("   int xx=0;\n");
        printf ("   int ch;\n");     
        printf ("   while ((ch=getchar())!='\\n')\n"); 
        printf ("   {\n");       
        printf ("       arr[xx]=ch;\n");  
        printf ("       xx++;\n");
        printf ("   }\n");
        printf ("   return xx;\n");
        printf ("}\n");
    }

    else if (x==2)
    {
        printf ("int maopaopaixu(int x,int arr[x])\n");
        printf ("{\n");
        printf ("   for (int xx=0;xx<x;xx++)\n");       
        printf ("   {\n");    
        printf ("       for (int xxx=0;xxx<x-1-xx;xxx++)\n");       
        printf ("       {\n");      
        printf ("           if (arr[xxx]>arr[xxx+1])\n");
        printf ("           {\n");
        printf ("               int num;\n");
        printf ("               num=arr[xxx];\n");     
        printf ("               arr[xxx]=arr[xxx+1];\n");
        printf ("               arr[xxx+1]=num;\n");
        printf ("           }\n");
        printf ("       }\n"); 
        printf ("   }\n");
        printf ("}\n");
    }
}


