#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char chat[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int check(char n);

int main()
{
    int yy;
    eihei:
    yy=0;
    int arr[1000];
    for (int n=0;n<1000;n++)
    {
        arr[n]=-1;
    }

    int i=0;
    int ch;
    while ((ch=getchar())!='\n')
    {
        if (check(ch)!=-1)
        {
            arr[i]=check(ch);
            i++;
        }
    }

    char crr[1000]={'\0'};
    i=0;
    int iii=0;
    while(arr[i]!=-1)
    {
        int A=arr[i]^arr[i+1];
        int B=arr[i];
        crr[iii]=A*16+B;
        iii++;
        i=i+2;
    }

    printf ("%s",crr);
    printf("\n");
    goto eihei;
    return 0;

}

int check(char n)
{
    for (int i=0;i<16;i++)
    {
        if (n==chat[i])
        {
            return i;
        }
    }
    return -1;
}