#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a;
int x,y,z;
int i;
int max;

int main()
{
    printf ("how many numbers you want to compare?\n");
    scanf ("%d",&a);
    int arr[a];
    for (i=0;i<a;i++)
    {
        scanf ("%d",&arr[i]);
    }//完成输入

    for (x=a-1;x>0;x--)
    {
        for (y=0;y<x;y++)
        {
            if (arr[y]>arr[y+1])
            {
                max=arr[y];
                arr[y]=arr[y+1];
                arr[y+1]=max;
            }
            else
            {
                arr[i]=arr[i];
                arr[i+1]=arr[i+1];
            }
        }
    }//冒泡法排序

    printf ("%d\n",arr[0]);//输出最小值
}