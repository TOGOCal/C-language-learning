//指针变量
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    /*int a=10;
    char b='A';
    char *p1 =&b;
    int *p= &a;
    printf ("%x\n",p);
    printf ("%x\n",p+1);
    printf ("%x\n",p1);
    printf ("%x\n",p1+1);*/

    char arr[100];

    char *p=arr;
    //scanf ("%s",arr);//scanf ("%s",p);
    int ch;
    int i=0;
    while ((ch=getchar())!='\n')
    {
        arr[i]=ch;
        i++;
    }

    int a=printf ("%s\n",arr);

    printf ("%d\n",a);

    return 0;
}