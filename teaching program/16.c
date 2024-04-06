//恶作剧关机程序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int queren;

int main()
{
    char ch[20];
    printf ("I will close you computer in 1 minutes\n");
    Sleep(1000);
    printf ("but if you admit you are a pig,then I will stop the function\n");
    Sleep(1000);
    system("shutdown -s -t 60");
    again:
    printf ("you can input like this:\n");
    Sleep(1000);
    printf ("I am a pig\n");
    int ch1;
    int i=0;
    while ((ch1=getchar())!='\n')
    {
        ch[i]=ch1;
        i++;
    }
    
    if (strcmp(ch,"I am a pig")==0)
    {
        Sleep(1000);
        printf ("so you admit you are a pig?\n");
        printf ("1.yes   2.no\n");
        scanf ("%c",&queren);
        getchar();
        if (49==queren)
        {
            system("shutdown -a");
        }
        else
        goto eihei;
    }
    else
    {
        eihei:
        printf ("you are really stupid\n");
        Sleep(1000);
        printf ("but before the computer be shutted,\n");
        Sleep(1000);
        printf ("you still have chance\n");
        Sleep(1000);
        goto again;
    }
    return 0;
}