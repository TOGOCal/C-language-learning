//五子棋程序打印方面程序
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>
#define jihang 19

char chat[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int Chinese(char arr1[200]);

int print1(int arr[200]);

int check(char n);

void qipan(char arr1[jihang][jihang]);

int succeed();

void three_link();

int succeed();

int add_succeed();

void one_link();

void two_link();

void two_link_d();

void three_link_d();

void four_link();

void weizhi();

int menu();

int touzi();

int function(int a);

int input(int *m,int *n);

void teach();

void arrcheck();

void arrcopy();

void add_three_link();

int fangxiang=0;
int question_x=0;
int question_y=0;
int solve_x=8;
int solve_y=8;

char arr[jihang][jihang];
char arr1[jihang][jihang];

int main()
{
    srand ((unsigned)time(NULL));
    int first;
    zhongyu:
    first=menu();
    for (int now=0;now<jihang;now++)
    {
        for(int now1=0;now1<jihang;now1++)
        {
            arr[now][now1]=' ';
        }
    }
    system("pause");
    system("cls");
    qipan(arr);
    int y=0;
    while(y==0)
    {
        //system("cls");
        first=function(first);//玩家及电脑的操作时间
        system("cls");
        arrcheck();
        arrcopy();
        qipan(arr);
        printf("%d %d\n",solve_y+1,solve_x+1);
        Sleep(1145);
        fflush(stdin);
        y=succeed(arr);
        if(y==0)
        {
            y=add_succeed(arr);
        }
    }

    if(y==1)
    {
        char arr7[200]={"4b83D3EfE41bDB^7\0"};
        Chinese(arr7);
    }

    if(y==2)
    {
        char arr7[200]={"483lDA6j4A1DBY7X\0"};
        Chinese(arr7);
    }

    system("pause");
    system("cls");
    char arr_8[200]={"8479N92B4q4w8a3sD[F3nB5C7CZ0`0D8r73EEd2Fp37C39C67BB5U0B4FeF3i2E75357X5y\0"};
    Chinese(arr_8);
    Sleep(1145);
    char arr_9[200]={"7]Cc1yE4L9_2D0sB4KFF32E8j4E2u2F2CC7lCu3O92P8V5H1RAv5838QCR00rD2D\0"};
    Chinese(arr_9);
    int chh=getchar();
    if(chh=='c'||chh=='C')
    {
        getchar();
        fflush(stdin);
        goto zhongyu;
    }
    return 0;
}

void one_link()//char arr[jihang][jihang]
{
    for(int n=1;n<jihang-1;n++)
    {
        for (int nn=1;nn<jihang-1;nn++)
        {
            if(arr[n][nn]!=' ')
            {
                srand ((unsigned)time(NULL));
                int suiji=rand()%8;
                if(suiji==0)
                {
                    if(arr[n-1][nn-1]==' ')
                    {
                        solve_x=n-1;
                        solve_y=nn-1;
                    }
                }

                else if(suiji==1)
                {
                    if(arr[n][nn-1]==' ')
                    {
                        solve_x=n;
                        solve_y=nn-1;
                    }
                }

                else if(suiji==2)
                {
                    if(arr[n+1][nn-1]==' ')
                    {
                        solve_x=n+1;
                        solve_y=nn-1;
                    }
                }

                else if(suiji==3)
                {
                    if(arr[n-1][nn]==' ')
                    {
                        solve_x=n-1;
                        solve_y=nn;
                    }
                }

                else if(suiji==4)
                {
                    if(arr[n+1][nn]==' ')
                    {
                        solve_x=n+1;
                        solve_y=nn;
                    }
                }

                else if(suiji==5)
                {
                    if(arr[n-1][nn+1]==' ')
                    {
                        solve_x=n-1;
                        solve_y=nn+1;
                    }
                }

                else if(suiji==6)
                {
                    if(arr[n][nn+1]==' ')
                    {
                        solve_x=n;
                        solve_y=nn+1;
                    }
                }

                else if(suiji==7)
                {
                    if(arr[n+1][nn+1]==' ')
                    {
                        solve_x=n+1;
                        solve_y=nn+1;
                    }
                }
            }
        }
    }
}

void two_link()
{
    for(int n=2;n<jihang-2;n++)
    {
        for (int nn=2;nn<jihang-2;nn++)
        {
            if(arr[n][nn]!=' ')
            {
                if(arr[n-1][nn-1]==arr[n][nn])
                {
                    if(arr[n-2][nn-2]==' '&&arr[n+1][nn+1]==' ')
                    {
                        solve_x=n-2;
                        solve_y=nn-2;
                        return;
                    }

                    else if(arr[n+1][nn+1]==' '||arr[n-2][nn-2]==' ')
                    {
                        if(arr[n-2][nn-2]==' ')
                        {
                            solve_x=n-2;
                            solve_y=nn-2;
                        }

                        else if(arr[n+1][nn+1]==' ')
                        {
                            solve_x=n+1;
                            solve_y=nn+1;
                        }
                    }
                }
                
               if(arr[n][nn-1]==arr[n][nn])
                {
                    if(arr[n][nn-2]==' '&&arr[n][nn+1]==' ')
                    {
                        solve_x=n;
                        solve_y=nn-2;
                        return ;
                    }
                    else if(arr[n][nn+1]==' '||arr[n][nn-2]==' ')
                    {
                        if(arr[n][nn-2]==' ')
                        {
                            solve_x=n;
                            solve_y=nn-2;
                        }
                        else if(arr[n][nn+1]==' ')
                        {
                            solve_x=n;
                            solve_y=nn+1;
                        }
                    }
                }
                
                if(arr[n+1][nn-1]==arr[n][nn])
                {
                    if(arr[n+2][nn-2]==' '&&arr[n-1][nn+1]==' ')
                    {
                        solve_x=n+2;
                        solve_y=nn-2;
                        return;
                    }
                    else if(arr[n-1][nn+1]==' '||arr[n+2][nn-2]==' ')
                    {
                        if(arr[n+2][nn-2]==' ')
                        {
                            solve_x=n+2;
                            solve_y=nn-2;
                        }
                        else if(arr[n-1][nn+1]==' ')
                        {
                            solve_x=n-1;
                            solve_y=nn+1;
                        }
                    }
                }

                if(arr[n-1][nn]==arr[n][nn])
                {
                    if(arr[n-2][nn]==' '&&arr[n+1][nn]==' ')
                    {
                        solve_x=n-2;
                        solve_y=nn;
                        return ;
                    }
                    else if(arr[n+1][nn]==' '||arr[n-2][nn]==' ')
                    {
                        if(arr[n-2][nn]==' ')
                        {
                            solve_x=n-2;
                            solve_y=nn;
                        }
                        else if(arr[n+1][nn]==' ')
                        {
                            solve_x=n+1;
                            solve_y=nn;
                        }
                    }
                }

            }
        }
    }
}

void two_link_d()
{
    for(int d=1;d<jihang-1;d++)
    {
        for(int e=1;e<jihang-1;e++)
        {
            if(arr[d][e]==' ')
            {
                if(arr[d-1][e-1]==arr[d+1][e+1]&&arr[d-1][e-1]!=' ')
                {
                    solve_x=d;
                    solve_y=e;
                }

                else if(arr[d][e-1]==arr[d][e+1]&&arr[d][e-1]!=' ')
                {
                    solve_x=d;
                    solve_y=e;
                }

                else if(arr[d+1][e-1]==arr[d-1][e+1]&&arr[d-1][e+1]!=' ')
                {
                    solve_x=d;
                    solve_y=e;
                }

                else if(arr[d-1][e]==arr[d+1][e]&&arr[d-1][e]!=' ')
                {
                    solve_x=d;
                    solve_y=e;
                }
            }
        }
    }
}

void four_link()
{
    for(int sb=0;sb<jihang-4;sb++)
    {
        for (int dsb=0;dsb<jihang-4;dsb++)
        {
            if(arr[sb][dsb]!=' ')
            {
                if(arr[sb][dsb]==arr[sb+1][dsb]&&arr[sb][dsb]==arr[sb+2][dsb]&&arr[sb][dsb]==arr[sb+3][dsb])
                {
                    if(arr[sb+4][dsb]==' ')
                    {
                        solve_x=sb+4;
                        solve_y=dsb;
                        return ;
                    }

                    else if(sb-1>=0)
                    {
                        if(' '==arr[sb-1][dsb])
                        {
                            solve_x=sb-1;
                            solve_y=dsb;
                            return ;
                        }
                    }
                }

                if(arr[sb][dsb]==arr[sb+1][dsb+1]&&arr[sb][dsb]==arr[sb+2][dsb+2]&&arr[sb][dsb]==arr[sb+3][dsb+3])
                {
                    if(arr[sb+4][dsb+4]==' ')
                    {
                        solve_x=sb+4;
                        solve_y=dsb+4;
                        return ;
                    }
                    else if(sb-1>=0&&dsb-1>=0)
                    {
                        if(' '==arr[sb-1][dsb-1])
                        {
                            solve_x=sb-1;
                            solve_y=dsb-1;
                            return ;
                        }
                    }
                }

                if(arr[sb][dsb]==arr[sb][dsb+1]&&arr[sb][dsb]==arr[sb][dsb+2]&&arr[sb][dsb]==arr[sb][dsb+3])
                {
                    if(arr[sb][dsb+4]==' ')
                    {
                        solve_x=sb;
                        solve_y=dsb+4;
                        return ;
                    }
                    else if(dsb-1>=0)
                    {
                        if(' '==arr[sb][dsb-1])
                        {
                            solve_x=sb;
                            solve_y=dsb-1;
                            return ;
                        }
                    }
                }
            }
        }
    }

    for(int sb=jihang-1;sb>=4;sb--)
    {
        for (int dsb=jihang-1;dsb>=4;dsb--)
        {
            if(arr[sb][dsb]!=' ')
            {
                if(arr[sb][dsb]==arr[sb-1][dsb]&&arr[sb][dsb]==arr[sb-2][dsb]&&arr[sb][dsb]==arr[sb-3][dsb])
                {
                    if(arr[sb-4][dsb]==' ')
                    {
                        solve_x=sb-4;
                        solve_y=dsb;
                        return ;
                    }

                    else if(sb+1<19)
                    {
                        if(' '==arr[sb+1][dsb])
                        {
                            solve_x=sb+4;
                            solve_y=dsb;
                            return ;
                        }
                    }
                }

                else if(arr[sb][dsb]==arr[sb-1][dsb-1]&&arr[sb][dsb]==arr[sb-2][dsb-2]&&arr[sb][dsb]==arr[sb-3][dsb-3])
                {
                    if(arr[sb-4][dsb-4]==' ')
                    {
                        solve_x=sb-4;
                        solve_y=dsb-4;
                        return ;
                    }

                    else if(sb+1<19&&dsb+1<19)
                    {
                        if(' '==arr[sb+1][dsb+1])
                        {
                            solve_x=sb+1;
                            solve_y=dsb+1;
                            return ;
                        }
                    }
                }

                else if(arr[sb][dsb]==arr[sb][dsb-1]&&arr[sb][dsb]==arr[sb][dsb-2]&&arr[sb][dsb]==arr[sb][dsb-3])
                {
                    if(arr[sb][dsb-4]==' ')
                    {
                        solve_x=sb;
                        solve_y=dsb-4;
                        return ;
                    }

                    else if(dsb+1<19)
                    {
                        if(' '==arr[sb][dsb+1])
                        {
                            solve_x=sb;
                            solve_y=dsb+1;
                            return ;
                        }
                    }
                }
            }
        }
    }
    
    for(int sb=4;sb<jihang-1;sb++)
    {
        for(int dsb=0;dsb<jihang-5;dsb++)
        {
            if(arr[sb][dsb]!=' ')
            {
                if(arr[sb][dsb]==arr[sb-1][dsb+1]&&arr[sb][dsb]==arr[sb-2][dsb+2]&&arr[sb][dsb]==arr[sb-3][dsb+3])
                {
                    if(arr[sb-4][dsb+4]==' ')
                    {
                        solve_x=sb-4;
                        solve_y=dsb+4;
                        return ;
                    }
                    if(arr[sb+1][dsb-1]==' ')
                    {
                        solve_x=sb+1;
                        solve_y=dsb-1;
                        return ;
                    }
                }
            }
        }
    }
    return ;
}

int succeed()
{
    for(int n=2;n<=16;n++)
    {
        for (int nn=2;nn<=16;nn++)
        {
            if(arr[n][nn]!=' ')
            {
                if(arr[n-1][nn]==arr[n+1][nn]&&arr[n-2][nn]==arr[n+2][nn]&&arr[n+1][nn]==arr[n+2][nn])
                {
                    if(arr[n-1][nn]==arr[n][nn])
                    {
                        if(arr[n][nn]=='1')
                        return 1;
                        else if(arr[n][nn]=='0')
                        return 2;
                    }
                }

                if(arr[n][nn-1]==arr[n][nn+1]&&arr[n][nn-2]==arr[n][nn+2]&&arr[n][nn+1]==arr[n][nn+2])
                {
                    if(arr[n][nn-1]==arr[n][nn])
                    {
                        if(arr[n][nn]=='1')
                        return 1;
                        else if(arr[n][nn]=='0')
                        return 2;
                    }
                }

                if(arr[n+1][nn+1]==arr[n-1][nn-1]&&arr[n+2][nn+2]==arr[n-2][nn-2]&&arr[n+1][nn+1]==arr[n+2][nn+2])
                {
                    if(arr[n+1][nn+1]==arr[n][nn])
                    {
                        if(arr[n][nn]=='1')
                        return 1;
                        else if(arr[n][nn]=='0')
                        return 2;
                    }
                }

                if(arr[n-1][nn+1]==arr[n+1][nn-1]&&arr[n-2][nn+2]==arr[n+2][nn-2]&&arr[n-1][nn+1]==arr[n-2][nn+2])
                {
                    if(arr[n-1][nn+1]==arr[n][nn])
                    {
                        if(arr[n][nn]=='1')
                        return 1;
                        else if(arr[n][nn]=='0')
                        return 2;
                    }
                }
            }
        }
    }
    return 0;
}

int function(int a)
{
    if(a==1)
    {
        int m,n,mistake;
        chongxinshuru:
        mistake=input(&m,&n);
        if(mistake==0)
        {
            char arr8[200]={"4O8]3cD5hE4x8A64QAv84B5F495H4W8C13dEk0mDkE2IAO6iC02IC3c9C6V7BnB5k6B85T0iD2iEA64A8m4B5\0"};
            Chinese(arr8);
            goto chongxinshuru;
        }
        
        m=m-1;
        n=n-1;
        if(arr[n][m]!=' ')
        {
            char arr9[200]={"8v33FbEr2nBJ06eB`3F2Fa1CeE5kDP7W3fEI0ND6Ao5Bc7uAU3eEH1DB739C_6B^0Br08P3i69Eg2oB0j6kBN3_F0gB95\0"};
            Chinese(arr9);
            goto chongxinshuru;
        }
        arr[n][m]='1';
        return -1;
    }

    if(a==-1)
    {
        one_link();

        two_link();
        two_link_d();

        three_link_d();
        add_three_link();
        three_link();
        // add_three_link();

        four_link();

        wuyong:
        if(arr[solve_x][solve_y]!=' ')
        {
            weizhi();
            goto wuyong;
        }
        arr[solve_x][solve_y]='0';
        return 1; 
    }
}

void weizhi()
{
    srand ((unsigned)time(NULL));
    for(int n=rand()%17;n<jihang-1;n++)
    {
        for (int nn=rand()%17;nn<jihang-1;nn++)
        {
            if(arr[n][nn]!=' ')
            {
                srand ((unsigned)time(NULL));
                int suiji=rand()%8;
                if(suiji==0)
                {
                    if(arr[n-1][nn-1]==' ')
                    {
                        solve_x=n-1;
                        solve_y=nn-1;
                    }
                }

                else if(suiji==1)
                {
                    if(arr[n][nn-1]==' ')
                    {
                        solve_x=n;
                        solve_y=nn-1;
                    }
                }

                else if(suiji==2)
                {
                    if(arr[n+1][nn-1]==' ')
                    {
                        solve_x=n+1;
                        solve_y=nn-1;
                    }
                }

                else if(suiji==3)
                {
                    if(arr[n-1][nn]==' ')
                    {
                        solve_x=n-1;
                        solve_y=nn;
                    }
                }

                else if(suiji==4)
                {
                    if(arr[n+1][nn]==' ')
                    {
                        solve_x=n+1;
                        solve_y=nn;
                    }
                }

                else if(suiji==5)
                {
                    if(arr[n-1][nn+1]==' ')
                    {
                        solve_x=n-1;
                        solve_y=nn+1;
                    }
                }

                else if(suiji==6)
                {
                    if(arr[n][nn+1]==' ')
                    {
                        solve_x=n;
                        solve_y=nn+1;
                    }
                }

                else if(suiji==7)
                {
                    if(arr[n+1][nn+1]==' ')
                    {
                        solve_x=n+1;
                        solve_y=nn+1;
                    }
                }
            }
        }
    }
    //weizhii=1;
}

int input(int *m,int *n)
{
    int ii=1;
    char arr[10]={'\0'};
    int ch;
    int i=0;
    while((ch=getchar())!=',')
    {
        if(isdigit(ch)==0||i>2)
        {
            ii=0;
        }
        if(ch=='\n')
        {
            return 0;
        }
        arr[i]=ch;
        i++;
    }
    if(i==1)
    {
        (*m)=arr[0]-'0';
    }

    else if(i==2)
    {
        (*m)=10*(arr[0]-'0')+(arr[1]-'0');
    }

    i=0;
    while((ch=getchar())!='\n')
    {
        if(isdigit(ch)==0||i>2)
        {
            ii=0;
        }
        arr[i]=ch;
        i++;
    }

    if(i==1)
    {
        (*n)=arr[0]-'0';
    }

    else if(i==2)
    {
        (*n)=10*(arr[0]-'0')+(arr[1]-'0');
    }
    return ii;

}

void three_link()
{
    for(int n=2;n<jihang-2;n++)
    {
        for (int nn=2;nn<jihang-2;nn++)
        {
            if(arr[n][nn]!=' ')
            {
                if(arr[n-1][nn-1]==arr[n][nn]&&arr[n+1][nn+1]==arr[n][nn])//1
                {
                    if(arr[n-2][nn-2]!=arr[n][nn]&&arr[n+2][nn+2]!=arr[n][nn])//保证为3个
                    {
                        if(arr[n-2][nn-2]==' ')
                        {
                            solve_x=n-2;
                            solve_y=nn-2;
                        }

                        else if(arr[n+2][nn-2]==' ')
                        {
                            solve_x=n+2;
                            solve_y=nn-2;
                        }
                        
                        if(arr[n-2][nn-2]==' '&&arr[n+2][nn-2]==' ')
                        {
                            return ;
                        }
                    }
                }

                if(arr[n][nn-1]==arr[n][nn]&&arr[n][nn+1]==arr[n][nn])//2
                {
                    if(arr[n][nn-2]!=arr[n][nn]&&arr[n][nn+2]!=arr[n][nn])
                    {
                        if(arr[n][nn-2]==' ')
                        {
                            solve_x=n;
                            solve_y=nn-2;
                        }

                        else if(arr[n][nn+2]==' ')
                        {
                            solve_x=n;
                            solve_y=nn+2;
                        }
                    }
                    
                    if(arr[n][nn-2]==' '&&arr[n][nn+2]==' ')
                    {
                        return ;
                    }
                }

                if(arr[n+1][nn-1]==arr[n][nn]&&arr[n-1][nn+1]==arr[n][nn])//3
                {
                    if(arr[n+2][nn-2]!=arr[n][nn]&&arr[n-2][nn+2]!=arr[n][nn])
                    {
                        if(arr[n+2][nn-2]==' ')
                        {
                            solve_x=n+2;
                            solve_y=nn-2;
                        }

                        else if(arr[n-2][nn+2]==' ')
                        {
                            solve_x=n-2;
                            solve_y=nn+2;
                        }

                        if(arr[n+2][nn-2]==' '&&arr[n-2][nn+2]==' ')
                        {
                            return ;
                        }
                    }
                }

                if(arr[n-1][nn]==arr[n][nn]&&arr[n+1][nn]==arr[n][nn])//4
                {
                    if(arr[n-2][nn]!=arr[n][nn]&&arr[n+2][nn]!=arr[n][nn])
                    {
                        if(arr[n-2][nn]==' ')
                        {
                            solve_x=n-2;
                            solve_y=nn;
                        }

                        else if(arr[n+2][nn]==' ')
                        {
                            solve_x=n+2;
                            solve_y=nn;
                        }

                        if(arr[n-2][nn]==' '&&arr[n+2][nn]==' ')
                        {
                            return ;
                        }
                    }
                }
            }
        }
    }
}

int menu()
{
    char arr1[200]={"EW25B7A3E6VA5B\0"};
    Chinese(arr1);
    Sleep(1145);
    // char arr2[200]={"Do1M8292D2a6RB0C7u8B0O7dA3EJE5L6[96cD8X2B7D7F38N47AkF2\0"};
    // Chinese(arr2);
    char arr3[200]={"8W4L79K92KB448A5R7rAyCu71OAY83AS13F1mDB739nC`60B]4XF^FZ32TEP84eE22F2CxC7Co3yC]7dCT00yDQ87\0"};
    Chinese(arr3);
    Sleep(1145);
    char arr_1[200]={"Dj63EFP3^2EO0NC4FBO01F2W95FO7C59Ay6I923vE3Ff0mDB5g6tBA0H\0"};
    Chinese(arr_1);
    Sleep(1145);
    char arr_2[200]={"847992B448A50D862FA0C0879O2D239C67BB5A64A84B50739C67C1E492D0B4F84E22F2CC7C3C7C00D87\0"};
    Chinese(arr_2);

    int chh;
    chh=getchar();
    if(chh!='\n')
    {
        getchar();
    }

    if(chh!='p'&&chh!='P')
    {
        teach();
    }
    //system("pause");
    eihei:
    system("cls");
    int touzi1=rand()%6+1;
    char arr2[200]={"Do1M8292D2a6RB0C7u8B0O7dA3EJE5L6[96cD8X2B7D7F38N47AkF2\0"};
    Chinese(arr2);
    Sleep(1145);
    char arr4[200]={"4J8V3D5E4I85sEV3DA6D2A67B\0"};
    Chinese(arr4);

    Sleep(1145);
    printf("%d\n",touzi1);

    Sleep(1145);
    int touzi2=rand()%6+1;
    char arr5[200]={"5E7^94849P5EX4^8Y5PEl3DAU6D2Ac6o7OB\0"};
    Chinese(arr5);
    
    Sleep(1145);
    printf("%d\n",touzi2);
    Sleep(1145);

    if(touzi1>touzi2)
    {
        char arr6[200]={"4W8y3D5gE48O5E3DA6yD283CI34F3C3g9Cm64b8q3LDFl38R4AH6K6B\0"};//先手
        Chinese(arr6);
        return 1;
    }

    else if(touzi1<touzi2)
    {
        char arr6[200]={"5hE7S94849H5KE[3DcAY6XD_2R83C34iFO3JC39C6U4y8J3wDkAl13CbAN66]B\0"};//后手
        Chinese(arr6);
        return -1;
    }

    else
    {
        char arr6[200]={"2FBI01vCL9e64HF3_C3q9n1yB49x94Z6B0tCh2FpB04pFwEM2\0"};
        Chinese(arr6);
        Sleep(1145);
        goto eihei;
    }
}

void teach()
{
    system("cls");
    char arr_3[200]={"7BBQ54m9Aq7A6_4iAb84wB5xA6U1KAT2NF4R9NFlACjEFKA[5nER4m80DE2A6D6A6K4AW8S4XBc5\0"};
    Chinese(arr_3);
    Sleep(1145);
    char arr_4[200]={"7rBl0bDC77qBm2t9BO0c4h8WCw1D1C3Cq77BnAZ6K4cAV84B502k39Cy67C1E492DgFe4O9548CO1rE2E37vC8Q2TAe66ND1A0qFY\0"};
    Chinese(arr_4);
    Sleep(1145);
    char arr_5[200]={"83w3F3oETE2SFP37Cq3El9`5n2FyB0`83Y6o929B7bCi76Ck6Bt6A7A7u8\0"};
    Chinese(arr_5);
    Sleep(1145);
    char arr_6[200]={"39r8284c79o92Bo4y3E6r9x5EDZ624T5U2713K9MC6O7BBv5`C70BYA61sA7CN4F0C1B3m9a9j3\0"};
    Chinese(arr_6);
    Sleep(1145);
    char arr_7[200]={"39823^8C0o0pDN2DA1nDb1iEw2`2dFT7wACR1BM0W1XFMFU3g8v47C8c62FB08m369399d3P\0"};
    Chinese(arr_7);
    Sleep(1145);
    system("pause");
}

void qipan(char arr1[jihang][jihang])
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
                    //*******************
                    else
                    {
                        printf("  %d",(jihang3/2)+1);
                    }
                    //*******************
                
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
    printf(" 1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19\n");
}

int touzi()
{
    Sleep(1000);
    srand ((unsigned)time(NULL));
    int shaizi;
    shaizi =rand()%6+1;
    return shaizi;
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
    printf("\n");
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

void three_link_d()
{
    for(int d=2;d<jihang-2;d++)
    {
        for(int e=2;e<jihang-2;e++)
        {
            if(arr[d][e]==' ')
            {
                if(arr[d-1][e-1]==arr[d+1][e+1]&&arr[d-1][e-1]!=' ')
                {
                    if((arr[d-2][e-2]==arr[d][e]&&arr[d+2][e+2]==' ')||(arr[d+2][e+2]==arr[d][e]&&arr[d-2][e-2]==' '))
                    {
                        solve_x=d;
                        solve_y=e;
                    }
                }

                else if(arr[d][e-1]==arr[d][e+1]&&arr[d][e-1]!=' ')
                {
                    if((arr[d][e-2]==arr[d][e]&&arr[d][e+2]==' ')||(arr[d][e+2]=arr[d][e]&&arr[d][e-2]==' '))
                    {
                        solve_x=d;
                        solve_y=e;
                    }
                }

                else if(arr[d+1][e-1]==arr[d-1][e+1]&&arr[d-1][e+1]!=' ')
                {
                    if((arr[d+2][e-2]==arr[d][e]&&arr[d-2][e+2]==' ')||(arr[d-2][e+2]==arr[d][e]&&arr[d+2][e-2]==' '))
                    {
                        solve_x=d;
                        solve_y=e;
                    }
                }

                else if(arr[d-1][e]==arr[d+1][e]&&arr[d-1][e]!=' ')
                {
                    if((arr[d-2][e]==arr[d][e]&&arr[d+2][e]==' ')||(arr[d+2][e]==arr[d][e]&&arr[d-2][e]==' '))
                    {
                        solve_x=d;
                        solve_y=e;
                    }
                }
            }
        }
    }
}

int add_succeed()
{
    for(int h=0;h<jihang;h++)
    {
        for(int hh=0;hh+5<jihang;hh++)
        {
            if(arr[h][hh]!=' ')
            {
                int i;
                for(i=1;i<5;i++)
                {
                    if(arr[h][hh]!=arr[h][hh+i])
                    {
                        break;
                    }
                }
                if(i==5)
                {
                    if(arr[h][hh]=='1')
                    {
                        return 1;
                    }
                    else if(arr[h][hh]=='0')
                    {
                        return 2;
                    }
                }
            }
        }
    }

    for(int hh=0;hh<jihang;hh++)
    {
        for(int h=0;h+5<jihang;h++)
        {
            if(arr[h][hh]!=' ')
            {
                int i;
                for(i=1;i<5;i++)
                {
                    if(arr[h][hh]!=arr[h+i][hh])
                    {
                        break;
                    }
                }
                if(i==5)
                {
                    if(arr[h][hh]=='1')
                    {
                        return 1;
                    }
                    else if(arr[h][hh]=='0')
                    {
                        return 2;
                    }
                }
            }
        }
    }
    return 0;
}

void arrcopy()
{
    for (int jihang1=0;jihang1<jihang;jihang1++)
    {
        for(int jihang2=0;jihang2<jihang;jihang2++)
        {
            arr1[jihang1][jihang2]=arr[jihang1][jihang2];
        }
    }
}

void arrcheck()
{
    for (int jihang1=0;jihang1<jihang;jihang1++)
    {
        for(int jihang2=0;jihang2<jihang;jihang2++)
        {
            if(arr[jihang1][jihang2]!=' '&&arr[jihang1][jihang2]!='1'&&arr[jihang1][jihang2]!='0')
            {
                arr[jihang1][jihang2]=arr1[jihang1][jihang2];
            }
        }
    }
}

void add_three_link()
{
    for (int jihang_1=0;jihang_1+3<jihang;jihang_1++)
    {
        for(int jihang_2=0;jihang_2+3<jihang;jihang_2++)
        {
            if(arr[jihang_1][jihang_2]!=' ')
            {
                if(arr[jihang_1+1][jihang_2]==arr[jihang_1][jihang_2]&&arr[jihang_1+3][jihang_2]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1+2][jihang_2]==' ')
                    {
                        solve_x=jihang_1+2;
                        solve_y=jihang_2;
                    }
                    if(jihang_1-1>=0&&jihang_1+4<19)
                    {
                        if(arr[jihang_1-1][jihang_2]==' '&&arr[jihang_1+4][jihang_2]==' ')
                        {
                            return ;
                        }
                    }
                }


                if(arr[jihang_1][jihang_2+1]==arr[jihang_1][jihang_2]&&arr[jihang_1][jihang_2+3]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1][jihang_2+2]==' ')
                    {
                        solve_x=jihang_1;
                        solve_y=jihang_2+2;
                    }

                    if(jihang_2-1>=0&&jihang_2+4<19)
                    {
                        if(arr[jihang_1][jihang_2-1]==' '&&arr[jihang_1][jihang_2+4]==' ')
                        {
                            return ;
                        }
                    }

                }
            }
        }
    }
    
    for (int jihang_1=jihang-1;jihang_1-3>=0;jihang_1--)
    {
        for(int jihang_2=jihang-1;jihang_2-3>=0;jihang_2--)
        {
            if(arr[jihang_1][jihang_2]!=' ')
            {
                if(arr[jihang_1-1][jihang_2]==arr[jihang_1][jihang_2]&&arr[jihang_1-3][jihang_2]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1-2][jihang_2]==' ')
                    {
                        solve_x=jihang_1-2;
                        solve_y=jihang_2;
                    }

                    if(jihang_1-4>=0&&jihang_1+1<19)
                    {
                        if(arr[jihang_1-4][jihang_2]==' '&&arr[jihang_1+1][jihang_2]==' ')
                        {
                            return ;
                        }
                    }
                }

                if(arr[jihang_1][jihang_2-1]==arr[jihang_1][jihang_2]&&arr[jihang_1][jihang_2-3]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1][jihang_2-2]==' ')
                    {
                        solve_x=jihang_1;
                        solve_y=jihang_2-2;
                    }

                    if(jihang_2-4>=0&&jihang_2+1<19)
                    {
                        if(arr[jihang_1][jihang_2-4]==' '&&arr[jihang_1][jihang_2+1]==' ')
                        {
                            return ;
                        }
                    }
                
                }
            }
        }
    }

    for (int jihang_1=0;jihang_1+3<jihang;jihang_1++)
    {
        for(int jihang_2=0;jihang_2+3<jihang;jihang_2++)
        {
            if(arr[jihang_1][jihang_2]!=' ')
            {
                if(arr[jihang_1+1][jihang_2+1]==arr[jihang_1][jihang_2]&&arr[jihang_1+3][jihang_2+3]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1+2][jihang_2+2]==' ')
                    {
                        solve_x=jihang_1+2;
                        solve_y=jihang_2+2;
                    }
                    if(jihang_1-1>=0&&jihang_1+4<19&&jihang_2-1>=0&&jihang_2+4<19)
                    {
                        if(arr[jihang_1-1][jihang_2-1]==' '&&arr[jihang_1+4][jihang_2+4]==' ')
                        {
                            return ;
                        }
                    }
                }
            }
        }
    }

    for (int jihang_1=0;jihang_1+3<jihang;jihang_1++)
    {
        for(int jihang_2=3;jihang_2<jihang;jihang_2++)
        {
            if(arr[jihang_1][jihang_2]!=' ')
            {
                if(arr[jihang_1+1][jihang_2-1]==arr[jihang_1][jihang_2]&&arr[jihang_1+3][jihang_2-3]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1+2][jihang_2-2]==' ')
                    {
                        solve_x=jihang_1+2;
                        solve_y=jihang_2-2;
                    }
                    if(jihang_1-1>=0&&jihang_1+4<19&&jihang_2-1>=0&&jihang_2+4<19)
                    {
                        if(arr[jihang_1-1][jihang_2+1]==' '&&arr[jihang_1+4][jihang_2-4]==' ')
                        {
                            return ;
                        }
                    }
                }
            }
        }
    }

    for (int jihang_1=0;jihang_1+3<jihang;jihang_1++)
    {
        for(int jihang_2=0;jihang_2+3<jihang;jihang_2++)
        {
            if(arr[jihang_1][jihang_2]!=' ')
            {
                if(arr[jihang_1+2][jihang_2]==arr[jihang_1][jihang_2]&&arr[jihang_1+3][jihang_2]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1+1][jihang_2]==' ')
                    {
                        solve_x=jihang_1+1;
                        solve_y=jihang_2;
                    }
                    if(jihang_1-1>=0&&jihang_1+4<19)
                    {
                        if(arr[jihang_1-1][jihang_2]==' '&&arr[jihang_1+4][jihang_2]==' ')
                        {
                            return ;
                        }
                    }
                }


                if(arr[jihang_1][jihang_2+2]==arr[jihang_1][jihang_2]&&arr[jihang_1][jihang_2+3]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1][jihang_2+1]==' ')
                    {
                        solve_x=jihang_1;
                        solve_y=jihang_2+1;
                    }

                    if(jihang_2-1>=0&&jihang_2+4<19)
                    {
                        if(arr[jihang_1][jihang_2-1]==' '&&arr[jihang_1][jihang_2+4]==' ')
                        {
                            return ;
                        }
                    }

                }
            }
        }
    }
    for (int jihang_1=jihang-1;jihang_1-3>=0;jihang_1--)
    {
        for(int jihang_2=jihang-1;jihang_2-3>=0;jihang_2--)
        {
            if(arr[jihang_1][jihang_2]!=' ')
            {
                if(arr[jihang_1-2][jihang_2]==arr[jihang_1][jihang_2]&&arr[jihang_1-3][jihang_2]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1-1][jihang_2]==' ')
                    {
                        solve_x=jihang_1-1;
                        solve_y=jihang_2;
                    }

                    if(jihang_1-4>=0&&jihang_1+1<19)
                    {
                        if(arr[jihang_1-4][jihang_2]==' '&&arr[jihang_1+1][jihang_2]==' ')
                        {
                            return ;
                        }
                    }
                }

                if(arr[jihang_1][jihang_2-2]==arr[jihang_1][jihang_2]&&arr[jihang_1][jihang_2-3]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1][jihang_2-1]==' ')
                    {
                        solve_x=jihang_1;
                        solve_y=jihang_2-1;
                    }

                    if(jihang_2-4>=0&&jihang_2+1<19)
                    {
                        if(arr[jihang_1][jihang_2-4]==' '&&arr[jihang_1][jihang_2+1]==' ')
                        {
                            return ;
                        }
                    }
                
                }
            }
        }
    }

    for (int jihang_1=0;jihang_1+3<jihang;jihang_1++)
    {
        for(int jihang_2=0;jihang_2+3<jihang;jihang_2++)
        {
            if(arr[jihang_1][jihang_2]!=' ')
            {
                if(arr[jihang_1+2][jihang_2+2]==arr[jihang_1][jihang_2]&&arr[jihang_1+3][jihang_2+3]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1+1][jihang_2+1]==' ')
                    {
                        solve_x=jihang_1+2;
                        solve_y=jihang_2+2;
                    }
                    if(jihang_1-1>=0&&jihang_1+4<19&&jihang_2-1>=0&&jihang_2+4<19)
                    {
                        if(arr[jihang_1-1][jihang_2-1]==' '&&arr[jihang_1+4][jihang_2+4]==' ')
                        {
                            return ;
                        }
                    }
                }
            }
        }
    }

    for (int jihang_1=0;jihang_1+3<jihang;jihang_1++)
    {
        for(int jihang_2=3;jihang_2<jihang;jihang_2++)
        {
            if(arr[jihang_1][jihang_2]!=' ')
            {
                if(arr[jihang_1+2][jihang_2-2]==arr[jihang_1][jihang_2]&&arr[jihang_1+3][jihang_2-3]==arr[jihang_1][jihang_2])
                {
                    if(arr[jihang_1+1][jihang_2-1]==' ')
                    {
                        solve_x=jihang_1+2;
                        solve_y=jihang_2-2;
                    }
                    if(jihang_1-1>=0&&jihang_1+4<19&&jihang_2-1>=0&&jihang_2+4<19)
                    {
                        if(arr[jihang_1-1][jihang_2+1]==' '&&arr[jihang_1+4][jihang_2-4]==' ')
                        {
                            return ;
                        }
                    }
                }
            }
        }
    }
}