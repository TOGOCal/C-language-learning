#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int jifeng(int a1,int a2);

void paiming(int n,int arrr1[n],int arrr[n],int arr3[n/2],char arr[n][50]);

int paiming1(int n, int arrr1[n], int arrr[n], char arr[n][50]);

void charshushi(int n,char a[n]);

void intshushi(int n,int a[n]);

void shuru(int n,char b[n]);

int shuru2(int n,char b[n]);

int miyunsuan (int x, int y);

int main ()
{
    int n;
    scanf ("%d",&n);
    getchar();
    char arr[n][50];//存放队名
    for (int chushihua=0;chushihua<n;chushihua++)
    {
        for (int eiheihei=0;eiheihei<50;eiheihei++)
        {
            arr[chushihua][eiheihei]=' ';
        }
    }
    int arrr[n];//总分
    intshushi(n,arrr);
    int arrr1[n];//积分
    intshushi(n,arrr1);
    char arr1[50];
    charshushi(50,arr1);
    char arr2[50];
    charshushi(50,arr2);
    int arr3[n/2];//前几个队伍的下标
    intshushi(n/2,arr3);
    char arr4[10];
    charshushi(10,arr4);

    for (int x=0;x<n;x++)
    {
        scanf ("%s",arr[x]);
        getchar();
    }

    int a1=0;
    int a2=0;

    int nn=n*(n-1)/2;

    for (int y=0;y<nn;y++)
    { 
        int ch;  
        shuru(50,arr1);   
        shuru(50,arr2);
        int a1=shuru2(10,arr4);
        int a2=shuru2(10,arr4);
        
        for (int z=0;z<n;z++)
        {
            int eihei=strcmp(arr[z],arr1);
            if (eihei==0)
            {
                arrr[z]+=a1;//总分
                arrr1[z]+=jifeng(a1,a2);//积分
                break;
            }
        }

        for (int z=0;z<n;z++)
        {
            int eihei=strcmp(arr[z],arr2);
            if (eihei==0)
            {
                arrr[z]+=a2;
                arrr1[z]+=jifeng(a2,a1);
                break;
            }
        }
    }

    paiming(n,arrr1,arrr,arr3,arr);
    for (int xee=0;xee<n/2;xee++)
    {
        int a=arr3[xee];
        printf ("%s\n",arr[a]);
    }
    
    return 0;
}

void paiming(int n,int arrr1[n],int arrr[n],int arr3[n/2],char arr[n][50])
{
    for (int xq=0;xq<n/2;xq++)
    {
        arr3[xq]=paiming1(n,arrr1,arrr,arr);
    }
}

int paiming1(int n,int arrr1[n],int arrr[n],char arr[n][50])
{
    int a;
    int found=0;
    for (int xe=1;xe<n;xe++)
    {
        if (arrr1[found]<arrr1[xe])
        {
            found =xe;
            
        }

        else if (arrr1[found]==arrr1[xe])
        {
            if (arrr[found]>arrr[xe])
            {
                found=found;
            }

            else if (arrr[found]<arrr[xe])
            {
                found=xe;
            }

            else
            {
                int js=0;
                woshisb: 
                if (arr[found][js]<arr[xe][js])
                {
                    found=found;
                }

                else if (arr[found][js]>arr[xe][js])
                {
                    found=xe;   
                } 

                else
                {
                   js=js+1;
                   goto woshisb;
                }               
            }
        }
    }

    arrr[found]-=100;
    arrr1[found]-=100;

    return found;
}


int jifeng(int a1,int a2)
{
    if (a1>a2)
    {
        return 3;
    }

    else if (a1==a2)
    return 1;

    else
    return 0;
}

void charshushi(int n,char a[n])
{
    for (int chushihua=0;chushihua<n;chushihua++)
    {     
        a[chushihua]=' ';
    }
}

void intshushi(int n,int a[n])
{
    for (int chushihua=0;chushihua<n;chushihua++)
    {     
        a[chushihua]=0;
    }
}

void shuru(int n,char b[n])
{
    int ai=0;
    int ch;
    
        while(1)
        {
            ch=getchar();
            if(isdigit(ch)||isalpha(ch))
            {
                goto eiheihei;
            }
        }

        while (isdigit(ch)||isalpha(ch)||ch==' ')
        {
            eiheihei:
            b[ai]=ch;
            ai++;
            ch=getchar();
        }
           
}

int shuru2(int n,char b[n])
{
    int ai=0;
    int ch;
    
        while(1)
        {
            ch=getchar();
            if(isdigit(ch))
            {
                goto eiheihei;
            }
        }

        while (isdigit(ch))
        {
            eiheihei:
            b[ai]=ch;
            ai++;
            ch=getchar();
        }

        int num1=0;
        for (int aii=0;aii<ai;aii++)
        {
            num1+=(b[aii]-'0')*miyunsuan(10,ai-aii-1);
        }
        return num1;
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void chushihua(int x,int y,int arr[2*x]);
void chushihua2(int x,int arr[x]);
int fenxi(int x);
int jiancha(int k,int ii,int arr[ii]);

int main()
{
    int n,k,t;
    scanf ("%d",&t);
    getchar();
for (int kk=0;kk<t;kk++)
{
    scanf ("%d %d",&n,&k);
    getchar();
    if (2==n)
    {
        if (0==k)
        {
            printf ("YES\n");
            printf ("1 -1\n");
           
        }

        else if (1==k)
        {
            printf ("YES\n");
            printf ("1 1\n");
            
        }

        else
        {
            printf ("NO\n");
            
        }
    }

    else if(n>2)
    {
        int a=n/2+1;
        int arr[a];
        int ii=0;
        chushihua2(a,arr);
        for (int i=n/2;i>=0;i--)
        {
            arr[ii]=fenxi(i)+fenxi(n-i);
            ii++;
        }

        int yes=jiancha(k,ii,arr);
        if (yes==-1)
        {
            printf ("NO\n");
        }

        else
        {
            printf ("YES\n");
            int prarr[n];
            chushihua(n,yes,prarr);
            for (int x3=0;x3<n;x3++)
            {
                printf ("%d ",prarr[x3]);
            }
            printf ("\n");
        }

    }

}

    return 0;
}


void chushihua(int x,int y,int prarr[x])
{
    for (int xx=0;xx<(x/2-y);xx++)
    {
        prarr[xx]=-1;
    }

    for (int xxx=(x/2-y);xxx<x;xxx++)
    {
        prarr[xxx]=1;
    }
}

void chushihua2(int x,int arr[x])
{
    for (int xx=0;xx<x;xx++)
    {
        arr[xx]=0;
    }
}
    

int fenxi(int x)
{
    int xx=x*(x-1)/2;
    return xx;
}

int jiancha(int k,int ii,int arr[ii])
{
    for (int iii=0;iii<ii;iii++)
    {
        if (k==arr[iii])
        {
            return iii;
        }
    }
    
    return -1;
}
*/















/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf ("%d",&n);
    int zhishu[1000];
    if(n%2==1||n<=6)
    {
        printf ("ERROR\n");
        return 0;
    }

    int i1=0;
    

    for (int i=3;i<n;i++)
    {
        for (int i2=2;i2<=i;i2++)
        {
            if (i%i2==0&&i2!=i)
            {
                break;
            }

            if (i2==i)
            {
                zhishu[i1]=i;
                i1++;
            }
        }
    }

    for (int y=i1-1;y>=0;y--)
    {
        for(int z=y;z>=0;z--)
        {
            if (zhishu[z]+zhishu[y]==n)
            {
                printf ("%d %d\n",zhishu[z],zhishu[y]);
            }
        }
    }

    return 0;
}
/*void shuru2(int *a1,int *a2)
{
    int ch;
    while ((ch=getchar())!=' '||(ch=getchar())!='-')
    {
        if (*a1!=0&&ch==' '||ch=='-')
        break;
        *a1=ch-48;
        
    }

    while ((ch=getchar())!=' '||(ch=getchar())!='-')
    {
        if (*a1!=0&&ch==' '||ch=='-')
        break;
        *a2=ch-48;
        
    }
}

*/





/*
int main()
{
    int n;
    scanf ("%d",&n);
    int zhishu[1000];
    if(n%2==1||n<=6)
    {
        printf ("ERROR\n");
        return 0;
    }

    int i1=0;
    

    for (int i=3;i<n;i++)
    {
        for (int i2=2;i2<=i;i2++)
        {
            if (i%i2==0&&i2!=i)
            {
                break;
            }

            if (i2==i)
            {
                zhishu[i1]=i;
                i1++;
            }
        }
    }

    for (int y=i1-1;y>=0;y--)
    {
        for(int z=y;z>=0;z--)
        {
            if (zhishu[z]+zhishu[y]==n)
            {
                printf ("%d %d\n",zhishu[z],zhishu[y]);
            }
        }
    }

    return 0;
}






/*int miyunsuan(int x,int y);

int main ()
{
    int a,b,c;
    scanf ("%d %d",&b,&c);
    a =miyunsuan(b,c);
    printf ("%d",a);
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
*/

/*int miyunsuan (int x, int y)
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
}*/

/*int main()
{
    int a,b;
    scanf ("%d",&a);
    b=printf ("%d",a);
    system ("cls");
    printf ("%d",b);
    system ("pause");
    return 0;
}
*/




/*
int main()
{
    int a,b,c;
    for (a=1;a<=9;a++)
    {
        for(b=1;b<=a;b++)
        {
            c=a*b;
            printf ("%d*%d=%d ",a,b,c);
        }
        printf("\n");
    }
    return 0;
}
*/



/*
int main()
{
    int i;
    for (i=0;i<10;i++)
    printf ("%d\n",i);
    return 0;
}
*/



/*int i;
char arr[100];

int main()
{
    int ch;
    int i=0;
    while ((ch=getchar())!='\n')
    {
        arr[i]=ch;
        i++;
    }
    printf("%d\n",i);


    return 0;
}*/





/*char arr[100];
int a,b,c,n,j;

int main()
{
   int ch;
   int i=0;
   while ((ch=getchar())!='\n')
   {
        arr[i]=ch;
        i++;
   }//输入

   for (n=0;n<i+1;n++)
   {
    for (j=n+1;j<i+1;j++)
    {
        if (arr[n]==arr[j])
        {
            for (a=j;a<i;a++)
            {
                arr[a]=arr[a+1];
            }
            i--;
            j--;
        }
    }
   }

   for (b=0;b<i;b++)
   {
        printf ("%c",arr[b]);
   }
    return 0;
}
*/



/*int main(void)
{
	char a[100];
	char ch;
	int I = 0, j = 0;
	while((ch = getchar()) != '\n')
    {
		a[I++] = ch;
	}
	int num = 1;
	char b[I];
	b[0] = a[0];
	
	for(int i = 0; i < I+1; i++)
    {
		int flag = 0;
		for(j = 0; j < num; j++){
			if(a[i] == b[j])
            {
				flag = 1;
				break;
            }
		}
		if(flag != 1)
        {
			b[num++] = a[i];
		}
		
		
	}
	for(j = 0; j < num-1; j++){
			printf("%c", b[j]);
	}
	printf("\n");
	
	return 0;
}*/