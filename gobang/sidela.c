#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

int check(char n);
int print1(int arr[200]);
int Chinese(char arr1[200]);
char chat[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int chachong()
{ 
    int i=0;
    while (!_kbhit())
    {
        if(i==3)
        {
            i=0;
        }
        char arr_arr4[200]={"84R7P992B448C149jAa7o9FDE21A61AD1396B9O2N3X8NC00D2D39C6492pDi1fAE5m4uFE24ZFO7929D64y81ZC0VD0DE2E30D7D\0"};
        Chinese(arr_arr4);
        printf("i=%d\n",i);
        i++;
        Sleep(114);
        system("cls");
    }
 
    system("pause");
    return i;
}

int Chinese(char arr1[200])
{
    int arr[200];
    for(int d=0;d<200;d++)
    {
        arr[d]=-1;
    }
    int ii=0;
    int a=0;
    for(ii=0;ii<200;ii++)
    {
        if(arr1[ii]=='\0')
        {
            break;
        }
        if(check(arr1[ii])!=-1)
        {
            arr[a]=check(arr1[ii]);
            a++;
        }
    }
    print1(arr);
}

int print1(int arr[200])
{
    int yy;
    
    yy=0;

    int i=0;
    int ch;

    char crr[200]={'\0'};
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