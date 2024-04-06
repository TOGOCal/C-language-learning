#include <stdio.h>
#include <string.h>
#include <ctype.h>

int miyunsuan (int x, int y);

int main()
{
    char arr[5];
    int t;
    scanf ("%d",&t);
    getchar();
    int ling=0;
    int yi=1;
for (int tt=0;tt<t;tt++)
{

    int i=0;
    int ch;
    int wenhao=0;
    while ((ch=getchar())!='\n')
    {
        arr[i]=ch;
        if (ch=='?')
        {
            wenhao++;
        }
        i++;
    }

    if (wenhao==0)
    {
        if (arr[0]=='0')
        printf ("%d\n",ling);
        else 
        printf ("%d\n",yi);
    }


    else if (arr[0]!='?')
    {
        printf ("%d\n",miyunsuan(10,wenhao));
    }

    else if (arr[0]='?')
    {
        printf ("%d\n",9*miyunsuan(10,wenhao-1));
    }


}    
    return 0;
}


int miyunsuan (int x, int y)
{
    if (0==y)
    return 1;
    if (1==y)
    return x;
    int t =miyunsuan (x,y/2)*miyunsuan(x,y/2);
    if (y%2==0)
    return t;
    else 
    return t*x;
}


/*
long int zhuanhuan(int z,char arr[z]);
int miyunsuan (int x, int y);

int main()
{
    int dsb=0;
    char A[9]={0};
    char B[9]={0};
    char X[18]={0};
    int ch;
    int ia=0;
    int ib=0;
    int ix=0;
    while ((ch=getchar())!='\n'&&ch!=' ')
    {
        A[ia]=ch;
        ia++;
    }

    while ((ch=getchar())!='\n'&&ch!=' ')
    {
        B[ib]=ch;
        ib++;
    }

    while ((ch=getchar())!='\n'&&ch!=' ')
    {
        X[ix]=ch;
        ix++;
    }

    if (ia>ix||ib>ix)
    {
        printf ("%d\n",dsb);
    }

    else if (ia==ix||ib==ix)
    {
        for (int sb=ix;sb>0;sb--)
        {
            if ((A[sb]-'0')+(B[sb]-'0')<(X[sb]-'0'))
            {
                if (sb==1)
                {
                    printf ("%d",dsb+1);
                    return 0;
                }
            }

            else
            {
                printf ("%d\n",dsb);
                return 0;
            }
        }
    }

    else if (ix>ia&&ix>ib)
    {
        long int x=zhuanhuan(ix,X);
        long int a=zhuanhuan(ia,A);
        long int b=zhuanhuan(ib,B);
        long int c=x/a;
        long int c2=x/b;
        if (c2>9)
        {
            eihei:

            if ((a*c+b*(ix-ia))<x)
            printf ("%ld\n",c);
            else
            {
                c--;
                goto eihei;
            }
            
        }

        else if (c2<=9)
        {
            if (c<miyunsuan(10,c2))
            {
                printf ("%ld\n",c);
            }

            else if(c>miyunsuan(10,c2))
            {
                printf ("%ld\n",miyunsuan(10,c2+1)-1);
            }
        }

    }

    return 0;
}

long int zhuanhuan(int z,char arr[z])
{
    long int num=0;
    for (int i=0;i<z;i++)
    {
        num+=(arr[i]-'0')*miyunsuan(10,z-i-1);
    }
    return num;
}

int miyunsuan (int x, int y)
{
    if (0==y)
    return 1;
    if (1==y)
    return x;
    int t =miyunsuan (x,y/2)*miyunsuan(x,y/2);
    if (y%2==0)
    return t;
    else 
    return t*x;
}

/*
int main ()
{
    int N,A,B;
    scanf ("%d",&N);
    if (1==N)
    {
        printf ("Hello World\n");
    }

    else if (2==N)
    {
        scanf ("%d %d",&A,&B);
        printf ("%d",A+B);
    }
    return 0;
}*/