#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>
#include <conio.h>

int check(char n);
int print1(int arr[200]);
int Chinese(char arr1[200]);
char chat[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int main()
{ 
    int i=0;
    while (!_kbhit())
    {
        printf("Fuck you\n");
        printf("%d\n",i);
        i++;
        Sleep(114);
        system("cls");
    }
 
    printf("\n");
    char arr[200]={"29KB0]2FNAJ0H2F4y9MEx2Af0d0Bf4FFK3W2WE`1UDZB71B[0qB\0"};
    Chinese(arr);
    printf("%c", _getch());
    char arr1[200]={"1JB1AHCM7uC3EY5PD1F[4i9r52LFw49J7Ar866fB9w2Ed2N2F\0"};
    Chinese(arr1);
    printf("\n");
    system("pause");
    return 0;
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