//检测当遇到2，3连的时候堵哪边的问题
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int jihang=19;
int choice(char arr[jihang][jihang],int x,int y,int fangxiang);
int solve_x=-1;
int solve_y=-1;

int main()
{
    char arr[jihang][jihang];
    for(int jihang1=0;jihang1<jihang;jihang1++)
    {
        for (int jihang2=0;jihang2<jihang;jihang2++)
        {
            arr[jihang1][jihang2]=' ';
        }//初始化
    }
    int input1,input2;
    int fangxiang=0;
    while(1)
    {
        scanf("%d",&fangxiang);
        scanf("%d %d",&input1,&input2);
        arr[input1][input2]='1';
        choice(arr,input1,input2,fangxiang);
        printf("%d,%d\n",solve_x,solve_y);
    }


}

int choice(char arr[jihang][jihang],int x,int y,int fangxiang)
{
    if(fangxiang==1)
    {
        if(y-2>=0&&arr[x][y-2]==' ')
        {
            solve_x=x;
            solve_y=y-2;
        }
        if(y+2<19&&arr[x][y+2]==' ')
        {
            solve_x=x;
            solve_y=y+2;
        }
    }

    if(fangxiang==2)
    {
        if(x+2<19&&arr[x+2][y]==' ')
        {
            solve_x=x+2;
            solve_y=y;
        }
        if(x-2>=0&&arr[x-2][y]==' ')
        {
            solve_x=x-2;
            solve_y=y;
        }
    }

    if(fangxiang==3)
    {
        if(x+2<19&&y-2>=0&&arr[x+2][y-2]==' ')
        {
            solve_x=x+2;
            solve_y=y-2;
        }
        if(x-2>=0&&y+2<19&&arr[x-2][y+2]==' ')
        {
            solve_x=x-2;
            solve_y=y+2;
        }
    }

    if(fangxiang==4)
    {
        if(x+2<19&&y+2<19&&arr[x+2][y+2]==' ')
        {
            solve_x=x+2;
            solve_y=y+2;
        }
        if(x-2>=0&&y-2>=0&&arr[x-2][y-2]==' ')
        {
            solve_x=x-2;
            solve_y=y-2;
        }
    }
}

