//五子棋检测方面的程序(检查是否赢以及检查是否有三个相连)
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int jihang=19;
int succeed(char arr[jihang][jihang]);
int three_link(char arr[jihang][jihang]);

int question_x=0;
int question_y=0;
int fangxiang=0;

int main()
{
    int y=0;

    char arr[jihang][jihang];
    for(int jihang1=0;jihang1<jihang;jihang1++)
    {
        for (int jihang2=0;jihang2<jihang;jihang2++)
        {
            arr[jihang1][jihang2]=' ';
        }//初始化
    }

    int input1,input2;
    int a=0;
while(y==0)
{    
    scanf("%d %d",&input1,&input2);
    arr[input1][input2]='1';

    // a=three_link(arr);
    // y=a;

    // a=succeed(arr);
    // y=a;
    // break;
}
    printf("%d\n",y);
    printf("%d,%d",question_x,question_y);
    return 0;


}

int three_link(char arr[jihang][jihang])
{
    for(int n=1;n<jihang-1;n++)
    {
        for (int nn=1;nn<jihang-1;nn++)
        {
            if(arr[n][nn]!=' ')
            {
                if(arr[n-1][nn-1]==arr[n][nn]&&arr[n+1][nn+1]==arr[n][nn])//1
                {
                    fangxiang=4;
                    question_x=n;
                    question_y=nn;
                    return 3;
                }
                if(arr[n][nn-1]==arr[n][nn]&&arr[n][nn+1]==arr[n][nn])//2
                {
                    fangxiang=1;
                    question_x=n;
                    question_y=nn;
                    return 3;
                }
                if(arr[n+1][nn-1]==arr[n][nn]&&arr[n-1][nn+1]==arr[n][nn])//3
                {
                    fangxiang=3;
                    question_x=n;
                    question_y=nn;
                    return 3;
                }
                if(arr[n-1][nn]==arr[n][nn]&&arr[n+1][nn]==arr[n][nn])//4
                {
                    fangxiang=2;
                    question_x=n;
                    question_y=nn;
                    return 3;
                }
                // if(arr[n+1][nn]==arr[n][nn])//5
                // if(arr[n-1][nn+1]==arr[n][nn])//6
                // if(arr[n][nn+1]==arr[n][nn])//7
                // if(arr[n+1][nn+1]==arr[n][nn])//8
            
            }
        }
    }
    return 0;
}

int succeed(char arr[jihang][jihang])
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
                        return 1;
                    }
                }

                if(arr[n][nn-1]==arr[n][nn+1]&&arr[n][nn-2]==arr[n][nn+2]&&arr[n][nn+1]==arr[n][nn+2])
                {
                    if(arr[n][nn-1]==arr[n][nn])
                    {
                        return 1;
                    }
                }

                if(arr[n+1][nn+1]==arr[n-1][nn-1]&&arr[n+2][nn+2]==arr[n-2][nn-2]&&arr[n+1][nn+1]==arr[n+2][nn+2])
                {
                    if(arr[n+1][nn+1]==arr[n][nn])
                    {
                        return 1;
                    }
                }

                if(arr[n-1][nn+1]==arr[n+1][nn-1]&&arr[n-2][nn+2]==arr[n+2][nn-2]&&arr[n-1][nn+1]==arr[n-2][nn+2])
                {
                    if(arr[n-1][nn+1]==arr[n][nn])
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
