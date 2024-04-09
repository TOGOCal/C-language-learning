
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

char chat[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

struct CAP
{
    char p[4];
    int move;//等于0表示可以移动
             //等于1表示该瓶子的状态已经好了，不能再移动了
};

void my_cap(int n,struct CAP *pi);
void new_cap(int n,struct CAP *pi);
int my_min(int x,int y);
int to_know_thenum(int x);
int crr(int x);

int win_check(int n,struct CAP *pi);
void check1(int n,struct CAP *pi);
int color_check(int x,struct CAP *pi);
int times_check(int x,struct CAP *pi);

int move(int x,int y,struct CAP *pi);
void my_move(int x,int y,struct CAP *pi);
int my_found(int x,struct CAP *pi);
int times_check(int x,struct CAP *pi);
int color_check(int x,struct CAP *pi);
int space_check(int x,struct CAP *pi);

int check(char n);
int print1(int arr[200]);
int Chinese(char arr1[200]);

int meun();
int colse();
void my_scanf(int *m,int *n);
void help();


int main()
{
    int n;
    yeah:
    n=meun();
    system("cls");

    n=n+2;
    struct CAP arr[n];
    for (int nn=0;nn<n;nn++)
    {
        for (int nnn=0;nnn<4;nnn++)
        {
            arr[nn].p[nnn]=' ';
        }
        arr[nn].move=0;
    }//初始化

    new_cap(n,arr);//初始化
    my_cap(n,arr);
    check1(n,arr);

    int xx,yy,right;
    while(win_check(n,arr)==0)
    {
        my_scanf(&xx,&yy);

        right=0;
        if(xx<=n&&yy<=n)
        {
            right=move(xx,yy,arr);
        }

        if(right==0)
        {
            char arr_3[200]={"4J8]3qD5UEP4I8OAp64pA8h4B5T3VE0DgE2jA6C02C39nCf67gBWBw5U6B85m0DX2sEAd64KAL8n4OB5\0"};
            Chinese(arr_3);
            system("pause");
        }

        if(right==2)
        {
            break;
        }
        system("cls");
        my_cap(n,arr);
        check1(n,arr);
    }
    
    if(win_check(n,arr)==1)
    {
        char arr3[200]={"4Q83Du3LEES4K1D[B7\0"};
        Chinese(arr3);
    }

    if(colse()==1)
    {
        system("cls");
        goto yeah;
    }

    return 0;
}

void my_scanf(int *m,int *n)
{
    int ii;
    char ar[10]={'\0'};
    int ch;
    int i;

    chongxinshuru:
    ii=1;
    i=0;
    while((ch=getchar())!=' ')
    {
        if(isdigit(ch)==0||i>2)
        {
            ii=0;
        }
        if(ch=='\n')
        {
            ii=0;
            goto niganma;
        }
        ar[i]=ch;
        i++;
    }

    if(i==1)
    {
        (*m)=ar[0]-'0';
    }

    else if(i==2)
    {
        (*m)=10*(ar[0]-'0')+(ar[1]-'0');
    }

    i=0;
    while((ch=getchar())!='\n')
    {
        if(isdigit(ch)==0||i>2)
        {
            ii=0;
        }
        ar[i]=ch;
        i++;
    }

    if(i==1)
    {
        (*n)=ar[0]-'0';
    }

    else if(i==2)
    {
        (*n)=10*(ar[0]-'0')+(ar[1]-'0');
    }

    niganma:
    if(ii==0)
    {
        char arr8[200]={"4O8]3cD5hE4x8A64QAv84B5F495H4W8C13dEk0mDkE2IAO6iC02IC3c9C6V7BnB5k6B85T0iD2iEA64A8m4B5\0"};
        Chinese(arr8);
        goto chongxinshuru;
    }
}

int meun()
{
    char arr1[200]={"5eE9w2dBL7E40yD1_BY3EEd2hF3t7xC\0"};
    Chinese(arr1);
    Sleep(1000);

    strcpy(arr1,"8n4W7V99i2Bh4c483DsFa3BS52R997aF44F0BF16BMA539NC6l7pBB5Q0lBK4KFF32eEY1vBjE4L8Cr1BFu5bC7C3I\0");
    Chinese(arr1);
    Sleep(1000);

    strcpy(arr1,"7pCf1E49s2UD0aBf4eFKF3x2]EM84aEQ2w2F2CTCb7C3NC7oCd00Df87\0");
    Chinese(arr1);
    Sleep(1000);

    int ch;
    ch=getchar();
    if(ch!='\n')
    {
        getchar();
    }
    system("cls");
    if(ch=='h'||ch=='H')
    {
        help();

    }

    strcpy(arr1,"A6_4bA8P4BP5A6D27_AV6Bs4FbAK5T1AD`348[3DF3n39SD1Bw43E0Di6D0Eb95_94l6B6cB1kCP58m9Q5Bt1\0");
    Chinese(arr1);
    int n;
    scanf("%d",&n);
    getchar();
    return n;
}

void help()
{
    char arr1[200]={"A64QAm8U4B5aAy61A7XBLB50B[4FP5Y8L58c75A6D2I7A6B02VF458c831E02AQ6kDT2h7RA6B755SE`4I80DUE2A6D6HA6j4As84Bo5\0"};
    Chinese(arr1);

    strcpy(arr1,"4p9A7P8S4PEb22FQ2KCYA61AF4KC0^84Z7V99Y2oB44O83eD84mF`3mEw2LA08v3m3FjC0S2COEp2^E3xD6u2qC\0");
    Chinese(arr1);
    Sleep(1000);

    strcpy(arr1,"6D[Ck7F495J2F4J9DH18K2t92DR2A`64YAL8K4Bn50i3g0U2U0J30C4cF6KB58a6bBi9238C00D2pD\0");
    Chinese(arr1);
    Sleep(1000);
    
    system("pause");
    system("cls");
}

int colse()
{
    int i=10;
    while (!_kbhit())
    {
        char arr2[200]={"847Z99O2B[44k8An5xFO33i9D1NB4[C7iC0`0Ds8R7H3EE2Ft3h7YC39C67BBa50gB4FF32OETFy4Q58831mEM\0"};
        Chinese(arr2);

        strcpy(arr2,"B02DM58UF25E844FD2A6E43FB538C0H0nDI2PD7nAh496uDkF592H851A58B02D0B4F84E22F2CC7C392851AH58H\0");
        Chinese(arr2);

        strcpy(arr2,"5E9d2C7J6AtAk6M1Af3y9yA1s\0");
        Chinese(arr2);
        printf("%d",i);
        Sleep(1000);
        i--;
        if(i==0)
        {
            return 0;
        }
        system("cls");
    }

    if(_getch()==' ')
    {
        return 1;
    }

    return 0;

}

int move(int x,int y,struct CAP *pi)//从1号瓶移动到2号瓶（1->2）
{
    if(x==0||y==0)
    {
        return 2;
    }
    x--;
    y--;

    if((pi+x)->move==1||(pi+y)->move==1)//瓶子的状态已经不能移动
    {
        return 0;
    }

    if((pi+y)->p[0]!=' '||(pi+x)->p[3]==' ')//移动的瓶子是空的或者被倒的瓶子是满的【0】为最顶层
    {
        return 0;
    }

    if(color_check(x,pi)!=color_check(y,pi)&&(pi+y)->p[3]!=' ')//最上层的颜色不同
    {
        return 0;
    }

    int move_times=times_check(x,pi);

    if(times_check(x,pi) > space_check(y,pi)&&(pi+y)->p[3]!=' ')
    {
        return 0;
    }

    for(int t=0;t<move_times;t++)
    {
        my_move(x,y,pi);
    }

    return 1;
}

int space_check(int x,struct CAP *pi)
{
    int i=0;
    int num=0;
    for(;i<4;i++)
    {
        if((pi+x)->p[i]==' ')
        {
            for(int nn=0;nn+i<4;nn++)
            {
                if((pi+x)->p[i]==(pi+x)->p[i+nn])
                {
                    num++;
                }
                
                else
                {
                    break;
                }
            }
            break;
        }
    }
    return num;
}

void my_move(int x,int y,struct CAP *pi)
{
    (pi+y)->p[my_found(y,pi)-1] = (pi+x)->p[my_found(x,pi)];
    (pi+x)->p[my_found(x,pi)] = ' ';
}

int my_found(int x,struct CAP *pi)
{
    int i=0;
    for(;i<4;i++)
    {
        if((pi+x)->p[i]!=' ')
        {
            return i;
        }
    }
    return 4; 
}

int times_check(int x,struct CAP *pi)
{
    int i=0;
    int num=0;
    for(;i<4;i++)
    {
        if((pi+x)->p[i]!=' ')
        {
            for(int nn=0;nn+i<4;nn++)
            {
                if((pi+x)->p[i]==(pi+x)->p[i+nn])
                {
                    num++;
                }
                
                else
                {
                    break;
                }
            }
            break;
        }
    }
    return num;
}

int color_check(int x,struct CAP *pi)//检查最上面的颜色
{
    int i=0;
    for(;i<4;i++)
    {
        if((pi+x)->p[i]!=' ')
        {
            return (pi+x)->p[i];
        }
    }
    return 0;
}

void new_cap(int n,struct CAP *pi)
{
    srand ((unsigned)time(NULL));

    int i=n-2;
    int Char_num[i];

    for(int n_n=0;n_n<n;n_n++)
    {
        Char_num[n_n]=0;
    }

    int a;

    for (int s=0;s<i*4;s++)
    {
        eihei:
        a=rand()%i;

        if(Char_num[a]<4)
        {
            (pi+(s/4))->p[s%4]=crr(a);
            Char_num[a]++;
        }

        else
        {
            goto eihei;
        }
    }
}

int crr(int x)
{
    return 'A'+x;
}

void my_cap(int n,struct CAP *pi)//用于打印
{
    int name=1;
    int i,num;
    i=n;
    num=1;
    
    while(i/num>8)
    {
        num++;
    }

    int each_num=i/num;

    if((i/num)*num<i)
    {
        num++;
    }


    for (int num_n=0;num_n<num;num_n++)
    {
        for (int tt=0;tt<4;tt++)
        {
            for (int time=0;time<my_min(each_num,i);time++)
            {
                printf("| %c |  ",(pi+time+num_n*each_num)->p[tt]);
            }
            printf("\n");
        }

        for (int time=0;time<my_min(each_num,i);time++)
        {
            printf("|___|  ");
        }
        printf("\n");


        for (int time=0;time<my_min(each_num,i);time++)
        {
            printf("  %d  ",name);
            name++;
            int space_num=to_know_thenum(name);
            if(space_num==1)
            {
                printf("  ");
            }

            else if(space_num==2)
            {
                printf(" ");
            }

        }
        printf("\n");
        
        for (int time=0;time<my_min(each_num,i);time++)
        {
            printf("       ");
        }
        printf("\n");
        
        i-=each_num;
    }

}

int to_know_thenum(int x)
{
    int i=1;
    int sc=0;
    while(x/i!=0)
    {
        i*=10;
        sc++;
    }
    return sc;
}

int my_min(int x,int y)
{
    if(x>y)
    {
        return y;
    }

    else 
    {
        return x;
    }
}

void check1(int n,struct CAP *pi)//分析一个瓶子的状态是不是已经好了
{
    int i=n-2;
    for(int nn=0;nn<n;nn++)
    {
        if((pi+nn)->p[0]!=' ')
        {
            (pi+nn)->move=1;
            for(int ck=1;ck<4;ck++)
            {
                if((pi+nn)->p[0]!=(pi+nn)->p[ck])
                {
                    (pi+nn)->move=0;
                }
            }

        }
    }
}

int win_check(int n,struct CAP *pi)//检查是否游戏胜利
{
    int i=n-2;
    int sum=0;
    for(int yi=0;yi<n;yi++)
    {
        if((pi+yi)->move==1)
        {
            sum++;
        }
    }

    if(i==sum)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
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




/*

| A |  |   |  |   |  |   |  1
| B |  |   |  |   |  |   |  2
| C |  |   |  |   |  |   |  3
| D |  |   |  |   |  |   |  4
|___|  |___|  |___|  |___|


| A |  |   |  |   |  |   |  1
| B |  |   |  |   |  |   |  2
| C |  |   |  |   |  |   |  3
| D |  |   |  |   |  |   |  4
|___|  |___|  |___|  |___|



*/