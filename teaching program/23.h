#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>

void qipan(int jihang,char arr1[jihang][jihang]);

int biancongming1(int jihang,char arr1[jihang][jihang]);

int panduan(int jihang,char arr1[jihang][jihang]);

int shizi();

void qipan(int jihang,char arr1[jihang][jihang])
{
     int jihang2=jihang*2-1;//打印行数
    for (int jihang3=0;jihang3<jihang2;jihang3++)
    {
        
        if (jihang3%2==0)
        {
            for (int a=0;a<jihang;a++)
            {
                
                    printf (" %c ",arr1[jihang3/2][a]);
                    if (a!=jihang-1)
                    {
                        printf ("|");
                    }//使最后不打印
                
            }
            printf ("\n");
        }

        else
        {
            for (int b=0;b<jihang;b++)
            {
                printf ("---");
                if (b!=jihang-1)
                {
                    printf ("|");
                }//使最后不打印
            }
            printf ("\n");
        }
        
    }
}


int panduan(int jihang,char arr1[jihang][jihang])
{
    for (int jiancha1=0;jiancha1<jihang;jiancha1++)//判断横相等
    {
        
            if (arr1[jiancha1][0]==arr1[jiancha1][1]&&arr1[jiancha1][0]==arr1[jiancha1][2])
            {
                if (arr1[jiancha1][0]=='1')
                {
                    printf ("YOU WIN\n");
                    return 0;
                }

                else if (arr1[jiancha1][0]=='0')
                {
                    printf ("YOU LOSE\n");
                    return 0;
                }
        
            }

    }


    for (int jiancha2=0;jiancha2<jihang;jiancha2++)//判断横相等
    {
        
            if (arr1[0][jiancha2]==arr1[1][jiancha2]&&arr1[0][jiancha2]==arr1[2][jiancha2])
            {
                
        
                if (arr1[0][jiancha2]=='1')
                {
                    printf ("YOU WIN\n");
                    return 0;
                }

                else if (arr1[0][jiancha2]=='0')
                {
                    printf ("YOU LOSE\n");
                    return 0;
                }
        
            }

    }
    
    

    
    if (arr1[0][0]==arr1[1][1]&&arr1[2][2]==arr1[0][0])//判断斜相等
    {
        if (arr1[0][0]=='1')
        {
            printf("YOU WIN\n");
            return 0;
        }

        else if (arr1[0][0]=='0')
        {
            printf("YOU LOSE\n");
            return 0;
        }
    }
 
    
    else if (arr1[2][0]==arr1[1][1]&&arr1[0][2]==arr1[1][1])
    {
        if (arr1[1][1]=='1')
        {
            printf("YOU WIN\n");
            return 0;
        }

        else if (arr1[1][1]=='0')
        {
            printf("YOU LOSE\n");
            return 0;
        }
    }


    for (int x4=0;x4<jihang;x4++)//判断平局
    {
        for (int x5=0;x5<jihang;x5++)
        {
            if (x4==jihang-1 && x5==jihang-1)
            {
                printf ("SCORE DRAW\n");
                return 0;
            }
            
            else if (arr1[x4][x5]==' ')
            return 1;
        }
    }


    return 1;
    
}



int biancongming1(int jihang,char arr1[jihang][jihang])
{
    if (arr1[1][1]==' ')
    {
        arr1[1][1]='0';
        return 0;
    }

    else if (arr1[0][0]==arr1[1][1]&&arr1[0][0]!=arr1[2][2]&&arr1[2][2]==' ')//判断斜相等
    {
            arr1[2][2]='0';
            return 0;
    }
 
    else if (arr1[2][2]==arr1[1][1]&&arr1[1][1]!=arr1[0][0]&&arr1[0][0]==' ')
    {
            arr1[0][0]='0';
            return 0;
    }


    else if (arr1[2][0]==arr1[1][1]&&arr1[0][2]!=arr1[1][1]&&arr1[0][2]==' ')
    {
            arr1[0][2]='0';
            return 0;
    }


    else if (arr1[0][2]==arr1[1][1]&&arr1[2][0]!=arr1[1][1]&&arr1[2][0]==' ')
    {
            arr1[2][0]='0';
            return 0;
        
    }





    for (int jiancha3=0;jiancha3<jihang;jiancha3++)//判断横相等
    {
        
            if (arr1[0][jiancha3]==arr1[1][jiancha3]&&arr1[0][jiancha3]!=arr1[2][jiancha3]&&arr1[2][jiancha3]==' ')
            {
                arr1[2][jiancha3]='0';
                return 0;
            }

            else if (arr1[2][jiancha3]==arr1[1][jiancha3]&&arr1[2][jiancha3]!=arr1[0][jiancha3]&&arr1[0][jiancha3]==' ')
            {
                arr1[0][jiancha3]='0';
                return 0;
            }

            else if (arr1[2][jiancha3]==arr1[0][jiancha3]&&arr1[2][jiancha3]!=arr1[1][jiancha3]&&arr1[1][jiancha3]==' ')
            {
                arr1[1][jiancha3]='0';
                return 0;
            }

    }

    for (int jiancha4=0;jiancha4<jihang;jiancha4++)//判断纵相等
    {
        
            if (arr1[jiancha4][0]==arr1[jiancha4][1]&&arr1[jiancha4][0]!=arr1[jiancha4][2]&&arr1[jiancha4][2]==' ')
            {
                arr1[jiancha4][2]='0';
                return 0;
            }

            else if (arr1[jiancha4][2]==arr1[jiancha4][1]&&arr1[jiancha4][2]!=arr1[jiancha4][0]&&arr1[jiancha4][0]==' ')
            {
                arr1[jiancha4][0]='0';
                return 0;
            }

            else if (arr1[jiancha4][2]==arr1[jiancha4][0]&&arr1[jiancha4][2]!=arr1[jiancha4][1]&&arr1[jiancha4][1]==' ')
            {
                arr1[jiancha4][1]='0';
                return 0;
            }

    }

    

    return 1;

}


int shizi()
{
    
    Sleep(1000);
    srand ((unsigned)time(NULL));
    int shaizi;
    shaizi =rand()%6+1;
    return shaizi;
}