//三子棋
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
#include "23.h"




int main ()
{
    printf ("*****************************\n");
    printf ("** PLAY WITH THE COMPUTER! **\n");
    printf ("      INPUT '1' TO BEGIN     \n");
    printf ("*****************************\n");
    printf ("*** WE '1' * COMPUTER '0' ***\n");
    int jihang,jihan;
    scanf ("%d",&jihan);
    getchar();
    

    
    char arr1[jihang][jihang];

    int wo,diannao;

   
    
    playagain:

    chonglai:

    printf ("throw the dice to dicide who mark first\n");
    Sleep(1000);
    printf ("the bigger one will go first\n");
    Sleep(1000);


    wo=shizi();
    printf ("you = %d\n",wo);
    Sleep(1000);
    printf ("comuputer throwing...\n");
    Sleep(1145);
    
    diannao=shizi();
    printf ("computer = %d\n",diannao);
    Sleep(2000);

    if (wo<diannao)
    {
        printf ("computer first\n");
        
        for (int a=0;a<jihang;a++)
        {
            for (int b=0;b<jihang;b++)
            {
                arr1[a][b]=' ';
            }
        }//初始化棋盘

        Sleep(2000);
        

        goto diannaoxianzou;
    }

    else if (wo==diannao)
    {
        printf ("you are the same\n");
        Sleep(2000);
        printf ("throw it again\n");
        Sleep(2000);
        goto chonglai;
    }
    
    else
    printf ("you first\n");
    Sleep(2000);

    
    system ("cls");
    //qipan(jihang,arr1);
    
    for (int a=0;a<jihang;a++)
    {
        for (int b=0;b<jihang;b++)
        {
            arr1[a][b]=' ';
        }
    }//初始化棋盘
    
   

    qipan(jihang,arr1);
    //eiheihei:

    //playermove(jihang,arr1);
    int x1,x2;
    
    
    
    

    eihei:
    printf ("please input the place you want to mark ___(a,b)\n");

    scanf ("%d,%d",&x1,&x2);
    getchar();
    
    if (1<=x1&&x1<=jihang&&1<=x2&&x2<=jihang)
    {   
        if(arr1[jihang-x2][x1-1]==' ')
        {
            arr1[jihang-x2][x1-1]='1';
            system ("cls");
        }
        
        else  
        {
            Sleep(1000);
            printf (".....\n");
            Sleep (1000);
            printf ("I don't know what to say\n");
            Sleep(1000);
            printf ("what are you thinking about?\n");
            Sleep(1000);
            goto eihei;
        }
      
    }  
    
    else
    {
        printf ("what are you fucking doing???\n");
        Sleep(1000);
        printf ("change a right place to mark\n");
        goto eihei;
    }

    qipan(jihang,arr1);

    int jieshou1=panduan(jihang,arr1);

    if(jieshou1==0)
    {
        goto hh;
    }

//***************
    
    diannaoxianzou:
    
    printf ("Computer thinking...\n");
    Sleep(1000);
     
    
    srand ((unsigned)time(NULL));
    
    int yeti;
    eihei1:

    //变聪明插件
    
    yeti= biancongming1(jihang,arr1);

    if (yeti==0)
    goto yetiti;

    int y1,y2;
    y1=rand()%jihang+1;
    y2=rand()%jihang+1;
    
    if(arr1[jihang-y1][y2-1]==' ')
    arr1[jihang-y1][y2-1]='0';
        
    else   
    goto eihei1;

    
    yetiti:
    system ("cls");
    qipan(jihang,arr1);

    int jieshou2 = panduan(jihang,arr1);


    if(jieshou2==0)
    {

        goto hh;
    }

    else 
    goto eihei;

    //goto eiheihei;
    
    
    char xuanze;
    hh:
    Sleep(1000);
    printf ("Do you want to continue to paly\n");
    printf ("****** 1.YES   else.NO ********\n");
    scanf ("%c",&xuanze);
    Sleep(1000);
    system ("cls");

    if (xuanze=='1')
    {
        goto playagain;
    }
    

    else
    return 0;
}



