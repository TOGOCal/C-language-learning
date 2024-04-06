#pragma once

void maopaopaixu(int arr[],int x);

void maopaopaixu(int arr[],int x)
{
    for (int i=0;i<x-1;i++)
    {
        int jiancha=1;
        for (int y=0;y<x-1-i;y++)
        {
            if (arr[y]>arr[y+1])
            {
                int temp;
                temp=arr[y];
                arr[y]=arr[y+1];
                arr[y+1]=temp;
                jiancha=0;//如果排序已经正确，则后面检查才会是1
            }
        }
        
        if (jiancha ==1)//说明排序已经正确，无需继续排序
        {
            break;
        }
    }
}