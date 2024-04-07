#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char chat[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

void encode0 (int n,char arr[n],int crr[n]);
void ten_to_two(char n,int nn,int bin[nn]);
int Findblock(int n,int crr[n]);
int miyunsuan(int x,int y);

int main()
{
    eihei:
    srand (time(NULL));

    char arr[1000]={'\0'};
    int crr[1000];
    
    int ch,i;
    

   
    i=0;
    while ((ch=getchar())!='\n')
    {
        arr[i]=ch;
        i++;
    }


    //int a=rand()%5;
    //int p=Findblock(1000,crr);
    //crr[p]='0'+a;
    //crr[p+1]='_';

    // int ii;
    // for (ii=0;ii<50;ii++)//50为arr我设置的最多位数
    // {
    //     if (arr[ii]=='\0')
    //     {
    //         break;
    //     }
    //     crr[p+ii]=arr[ii];
    // }
    

    for (int ii=0;ii<1000;ii++)
    {
        crr[ii]=-1;
    }

    encode0(1000,arr,crr);
    
    //printf ("%s\n",crr);
    for (int g=0;;g++)
    {
        if (crr[g]==-1)
        {
            break;
        }
        printf ("%c",chat[crr[g]]);
        int c=rand()%50;
        if(c%2==1)
        printf ("%c",'H'+rand()%50);

    }
    printf("\n");
    goto eihei;
    system ("pause");
    return 0;

}

// void encode(int a,int n,char crr[n])
// {
//     if (a==0)
//     {
//         encode0 (n,crr);
//         return ;
//     }

//     if (a==1)
//     {
//         encode1(n,crr);
//         return ;
//     }
// }




void encode0 (int n,char arr[n],int crr[n])
{
    int i=0;
    while(arr[i]!='\0')
    {
        int bin[8];
        ten_to_two(arr[i],8,bin);//转为2进制并存在bin中
        int h=0;
        int num=0;
        for (;h<4;h++)
        {
            num+=miyunsuan(2,3-h)*bin[h];
        }
        int A=num;//草稿纸上的A

        num=0;
        for (;h<8;h++)
        {
            num+=miyunsuan(2,7-h)*bin[h];
        }
        int B=num;
        int C=A^B;
        crr[2*i]=B;
        crr[2*i+1]=C;
        i++;
    }
}

void ten_to_two(char n,int nn,int bin[nn])//十进制转二进制  传的字母的ASCII码，个数，需要存在哪里
{
    
    int i;
    for (i=7;i>=0;i--)
    {
        if(n&1==1)
        {
            bin[i]=1;
        }
        else 
        {
            bin[i]=0;
        }
        n=n>>1;
    }
}

// int Findblock(int n,int crr[n])//找到crr中'\0'的位置
// {
//     int i;
//     for (i=0;i<n;i++)
//     {
//         if (crr[i]==-1)
//         {
//             break;
//         }
//     }
//     return i;
// }

int miyunsuan(int x,int y)
{
    int num;
    if (y==0)
    return 1;
    else 
    num =1;
    for (int i=0;i<y;i++)
    {
        num*=x;
    }
    return num;
}










/*
int main()
{
    srand (time(NULL));
    int n;
    scanf ("%d",&n);//决定采用几种加密方式
    char arr[1000]={'\0'};
    //char crr[2000]={'\0'};

    int ch,a,counter;
    int i=0;
    eihei:
    a=rand()%n;
    arr[i]=a;
    i++;//方案编号
    arr[i]='_';
    i++;

    while ((ch=getchar())!='\n')
    {
        arr[i]=ch;
        i++;
        if (ch==' ')
        {
            encode(1000,a,arr);//采用a加密对
            goto eihei;
        }
    }

}

void encode(int nn,int a,char arr[nn])
{
    if (a==0)
    {
        encode0(1000,arr);
    }
}

void encode0(int nn,char arr[nn])
{
    int i=0;

    while(arr[i]!='\0')
    {
        int bin[8];
        ten_to_two(arr[i],8,bin);
        int h=0;
        int num=0;
        for (;h<4;h++)
        {
            num+=miyusuan(2,3-i)*bin[h];
        }
        int A=num;//草稿纸上的A

        num=0;
        for (;h<8;h++)
        {
            num+=miyusuan(2,7-i)*bin[h];
        }
        int B=num;
        int C=A^B;
        arr[2*i]=B*17;
        arr[2*i+1]=C*17;
        i++;
    }

}

void ten_to_two(char n,int nn,int bin[nn])//十进制转二进制  传的字母的ASCII码，个数，需要存在哪里
{
    
    int i=0;
    for (i=7;i>=0;i--)
    {
        if(n&1==1)
        {
            bin[i]=1;
        }
        else 
        {
            bin[i]=0;
        }
        n>>1;
    }
}



int miyunsuan(int x,int y)
{
    int num;
    if (y==0)
    return 1;
    else 
    num =1;
    for (int i=0;i<y;i++)
    {
        num*=x;
    }
    return num;
}

*/