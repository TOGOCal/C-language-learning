//函数与数组
//例子：函数实现冒泡排序

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "21.h"


int main ()
{
    int geshu;
    scanf ("%d",&geshu);
    int arr[geshu];

    for (int a=0;a<geshu;a++)
    {
        scanf ("%d",&arr[a]);
    }

    maopaopaixu(arr,geshu);

    for (int t=0;t<geshu;t++)
    {
        printf ("%d ",arr[t]);
    }
    return 0;
}