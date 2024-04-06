//生成数独盘

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

/*int shenchengsuijishu();

int b,c;
int arr[9][9]={0};*/

/*int main()
{
    /*for (int g=0;g<9;g++)
    {
        for (int h=0;h<9;h++)
        {
            arr[g][h]=shenchengsuijishu();
        }
    }*/
    
    

    /*for (int i=0;i<9;i++)
    {
        for (int n=0;n<9;n++)
        {
            int p,o;
            eihei:
            p=i;
            o=n;
            for (int x=(p/3)*3;x<=i;x++)
            {
                for (int y=(n/3)*3;y<=(n/3+1)*3-1;y++)
                {
                    
                    
                        
                        
                        if (x==i&&y==n)
                        goto eiheihei;

            

                        else
                        {
                            arr[i][n]=shenchengsuijishu2();
                            for (int z=0;z<n;z++)
                            {
                                wtm:
                                if(arr[i][n]==arr[i][z])
                                {
                                    arr[i][n]=shenchengsuijishu();
                                    continue;
                                }

                                for (int z1=0;z1<i;z1++)
                                {
                                    if (arr[i][n]==arr[z1][n])
                                        {
                                            arr[i][n]=shenchengsuijishu();
                                            goto wtm:
                                        }
                                }
                            }
                            goto eihei;
                        }
                        
                    
                }
                
            }
            eiheihei:
            continue;
        }
    }





    for (int i=0;i<9;i++)
    {
        for (int n=0;n<9;n++)
        {
            printf ("%d ",arr[i][n]);
        }
        printf ("\n");
    }

    system ("pause");
    return 0;
}
*/


int shenchengsuijishu();

int b,c;
int arr[9][9];

int main()
{
    for (int g=0;g<9;g++)
    {
        for (int h=0;h<9;h++)
        {
            arr[g][h]=shenchengsuijishu();
        }
    }
    
    

    for (int i=0;i<9;i++)
    {
        for (int n=0;n<9;n++)
        {
            int p,o;
            eihei:
            p=i;
            o=n;
            for (int x=(p/3)*3;x<=i;x++)
            {
                for (int y=(n/3)*3;y<=(n/3+1)*3-1;y++)
                {

                    if (arr[i][n]==arr[x][y])
                    {
                        if (x==i&&y==n)
                        goto eiheihei;
                        else
                        {
                            arr[i][n]=shenchengsuijishu();
                            goto eihei;
                        }
                    }
                }
                
            }
            eiheihei:
            continue;
        }
    }





    for (int i=0;i<9;i++)
    {
        for (int n=0;n<9;n++)
        {
            printf ("%d ",arr[i][n]);
        }
        printf ("\n");
    }
    return 0;
}

int shenchengsuijishu()
{
    srand ((unsigned)time(NULL));
    int a =rand()%9+1;
    return a;
}

/*void jiancha1(int x,int y)//arr[i][n] i=x;y=n
{

    for (int q=0)
    
}*/

