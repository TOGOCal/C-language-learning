#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int MIN(int x,int y);
int main()
{
    int s=0;
    int nnn;
    scanf ("%d",&nnn);
    int arr[nnn][2];
    for (int a=0;a<nnn;a++)
    {
        scanf ("%d/%d",&arr[a][0],&arr[a][1]);
        if (arr[a][1]==0)
        {
            s=1;
        }
    }

    if (s==1)
    {
        printf ("error\n");
        return 0;
    }
    int n;
    for (n=arr[0][1];;n++)//最小公倍数
    {
        int nn;
        for (nn=0;nn<nnn;nn++)
        {
            if (n%arr[nn][1]!=0)
            {
                break;
            }
        }//有一个除不尽

        if (nn==nnn)
        {
            break;
        }
    }

    for (int a=0;a<nnn;a++)
    {
        arr[a][0]=arr[a][0]*(n/arr[a][1]);
    }

    int num=0;
    for (int a=0;a<nnn;a++)
    {
        num+=arr[a][0];//分子
    }

    if (num==0)
    {
        printf ("0\n");
        system("pause");
        return 0;
    }
    int x;
    for(x=MIN(num,n);x>0;x--)
    {
        if (num%x==0&&n%x==0)
        { 
            break;
        }
    }

    if (n/x==1)
    {
        printf ("%d\n",num/x);  
        system("pause");  
        return 0;
    }

    else 
    {
        printf ("%d/%d\n",num/x,n/x);
        system("pause");
        return 0;
    }



}

int MIN(int x,int y)
{
    if (x>y)
    {
        return y;
    }

    else
    return x;
}