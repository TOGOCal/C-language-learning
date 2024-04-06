#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/*
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, i, n;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d %d", &a, &b);

    while(a!=b)
    {
        if(a>b)
        a = a - b;
        if(a<b)
        b = b - a;
    }
    printf("%d\n",a);
  
	}
	
	return 0;
}




*/







int MAX(int x,int y);

int main()
{
    int t;
    scanf ("%d",&t);
for (int tt=0;tt<t;tt++)
{
    int m,n;
    scanf ("%d %d",&m,&n);
    int i;
    for (i=MAX(m,n);i>1;i--)
    {
        if (m%i==0&&n%i==0)
        {
            break;
        }
    }
    printf ("%d\n",i);
}
    return 0;
}

int MAX(int x,int y)
{
    if (x>y)
    return y;
    else 
    return x;
}













/*
struct team 
{
    char name[51];
    int score;
    int jifen;
    //int paiming;
};
int miyunsuan (int x, int y);

int main()
{
    int n;
    scanf ("%d",&n);
    getchar();
    struct team ball[n];
    for (int nn=0;nn<n;nn++)
    {
        ball[nn].score=0;
    }
    int ch;
    
    for (int nn=0;nn<n;nn++)
    {
        int a=0;
        while((ch=getchar())!='\n')
        {
            ball[nn].name[a]=ch;
            a++;
        }
        ball[nn].name[a]='\0';
    }

    char arr1[100]={'\0'};
    char arr2[100]={'\0'};

    for (int i=0;i<(n*(n-1)/2);i++)
    {
        int eihei=0;
        while ((ch=getchar())!='-')
        {
            arr1[eihei]=ch;
            eihei++;
        }

        while(arr1[eihei]==' ')
        {
            arr1[eihei]='\0';
            eihei--;
        }


        eihei=0;


        while ((ch=getchar())!=':')
        {
            arr2[eihei]=ch;
            eihei++;
        }

        while(arr2[eihei]==' ')
        {
            arr2[eihei]='\0';
            eihei--;
        }
        
        char num[10]={' '};
        int y=0;

        while ((ch=getchar())!='-')
        {
            if (isdigit(ch))
            {
                num[y]=ch;
                y++;
            }
        }
        
        int d=0;

        for (int yy=0;yy<y;yy++)
        {
            d+=(num[yy]-'0')*miyunsuan(10,(y-yy-1));
        }

        for(int nn=0;nn<n;nn++)
        {
            if (strcmp(arr1,ball[nn].name)==0)
            {
                ball[nn].score+=d;
                break;
            }
        }

        y=0;

        while ((ch=getchar())!='\n')
        {
            if (isdigit(ch))
            {
                num[y]=ch;
                y++;
            }
        }
        
        d=0;

        for (int yy=0;yy<y;yy++)
        {
            d+=(num[yy]-'0')*miyunsuan(10,(y-yy-1));
        }

        for(int nn=0;nn<n;nn++)
        {
            if (strcmp(arr2,ball[nn].name)==0)
            {
                ball[nn].score+=d;
                break;
            }
        }
    }

    for (int x=0;x<n;x++)
    {
        for (int xx=0;xx<n-1-x;xx++)
        {
            if (ball[xx].score<ball[xx+1].score)
            {
                char namm[51]={'\0'};
                int scorr=0;
                strcpy(namm,ball[xx].name);
                strcpy(ball[xx].name,ball[xx+1].name);
                strcpy(ball[xx+1].name,namm);

                scorr=ball[xx].score;
                ball[xx].score=ball[xx+1].score;
                ball[xx+1].score=scorr;
            }

            else if (ball[xx].score==ball[xx+1].score)
            {
                for (int shu=0;shu<51;shu++)
                {
                    if (ball[xx].name[shu]>ball[xx+1].name[shu])
                    {
                        char namm[51]={'\0'};
                        int scorr=0;

                        strcpy(namm,ball[xx].name);
                        strcpy(ball[xx].name,ball[xx+1].name);
                        strcpy(ball[xx+1].name,namm);

                        scorr=ball[xx].score;
                        ball[xx].score=ball[xx+1].score;
                        ball[xx+1].score=scorr;
                        break;
                    }

                    else if(ball[xx].name[shu]=='\0'||ball[xx+1].name[shu]=='\0')
                    {
                        break;
                    }
                }
            }
        }
    }


    for(int c=0;c<n/2;c++)
    {
        printf ("%s\n",ball[c].name);
        eihei:
        if (ball[c].name[0]==ball[c+1].name[0])
        {
            if(ball[c].score==ball[c+1].score)
            {
                printf ("%s\n",ball[c+1].name);
                c++;
                goto eihei;
            }
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
   int num=1;
   for(int yy=0;yy<y;yy++)
   {
        num*=x;
   }
   return num;
}






/*
int mian()
{
    int c=0;
    char arr[3][100];
    int ch;
    int i=0;
    while ((ch=getchar())!='@')
    {
        if ((isdigit(ch)||isalpha(ch)||ch=='_'||ch=='-')==0)
        {
            c=1;
        }
        arr[0][i]=ch;
        i++;
    }
    i=0;
    while ((ch=getchar())!='.')
    {
        if ((isdigit(ch)||isalpha(ch)||ch=='_'||ch=='-')==0)
        {
            c=1;
        }
        arr[1][i]=ch;
        i++;
    }
    i=0;
    while ((ch=getchar())!='\n')
    {
        if ((isdigit(ch)||isalpha(ch)||ch=='_'||ch=='-')==0)
        {
            c=1;
        }
        arr[2][i]=ch;
        i++;
    }

    if (c==0)
    {
        printf ("yes\n");
    }

    else
    {
        printf ("no\n");
    }
    return 0;



}



/*2
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int arrr[n][2];
    for (int nn=0;nn<n;nn++)
    {
        arrr[nn][1]=0;
        arrr[nn][0]=0;
    }

    for (int nn=0;nn<n;nn++)
    {
        scanf ("%d",&arr[nn]);
    }

    int i=0;
    for (int nn=0;nn<n;nn++)
    {
        int nnn;
        for (nnn=0;nnn<n;nnn++)
        {
            if (arr[nn]==arrr[nnn][0])
            break;
        }
        //printf ("%d\n",nnn);

        if (nnn==n)
        {
            arrr[i][0]=arr[nn];
            arrr[i][1]++;
            i++;
        }

        else
        {
            arrr[nnn][1]++;
        }
    }
    int c=0;
    for (int nn=0;nn<n;nn++)
    {
        if (arrr[nn][1]==2)
        {
            printf ("%d ",arrr[nn][0]);
            c=1;
        }
    }
    if (c==1)
    {
        printf ("\n");
    }

    if (c==0)
    {
        printf ("none\n");
    }
    return 0;

}*/



/*
int main()
{
    int d=0;
    for (int i=0;i<3;i++)
    {
        int ch;
        ch=getchar();
        d=d+(ch-'0');
    }
    printf ("%d\n",d);
    return 0;
}*/