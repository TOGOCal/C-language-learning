#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct sb
{
    char name[100];
    char sbprove[100];
    int grade;
};

int miyunsuan (int x, int y);

int main()
{
    int n;
    scanf ("%d",&n);
    getchar();
    struct sb arr[n];
    for (int nn=0;nn<n;nn++)
    {
        arr[nn].grade=-1;
    }
    for (int nn=0;nn<n;nn++)
    {
        char name_c[100]={'\0'};
        char sbprove_c[100]={'\0'};
        int ch;
        int i=0;
        while ((ch=getchar())!=' ')
        {
            name_c[i]=ch;
            i++;
        }
        strcpy(arr[nn].name,name_c);


        while ((ch=getchar())==' ')
        {
            ;
        }


        i=0;
        do
        {
            sbprove_c[i]=ch;
            i++;
        }while ((ch=getchar())!=' ');
        strcpy(arr[nn].sbprove,sbprove_c);

        i=0;
        char gra[3]={'0'};
        while ((ch=getchar())==' ')
        {
            ;
        }

        do
        {
            gra[i]=ch;
            i++;
        }while ((ch=getchar())!='\n');
        int eihei=0;
        
        int iiii=i;
        for (int f=0;f<i;f++)
        {
            if (isdigit(gra[f]))
            {
                eihei+=(gra[f]-'0')*miyunsuan(10,iiii-1);
                arr[nn].grade=eihei;
                iiii--;
            }
        }
        
        //scanf ("%d",&arr[nn].grade);
        //getchar();
    }//完成输入

    for (int ii=0;ii<n;ii++)
    {
        for (int iii=0;iii<n-1;iii++)
        {
            if (arr[iii].grade<arr[iii+1].grade)
            {
                char name_c[100]={'\0'};
                char sbprove_c[100]={'\0'};
                strcpy(name_c,arr[iii].name);
                strcpy(sbprove_c,arr[iii].sbprove);
                strcpy(arr[iii].name,arr[iii+1].name);
                strcpy(arr[iii].sbprove,arr[iii+1].sbprove);
                strcpy(arr[iii+1].name,name_c);
                strcpy(arr[iii+1].sbprove,sbprove_c);
                int num;
                num=arr[iii].grade;
                arr[iii].grade=arr[iii+1].grade;
                arr[iii+1].grade=num;
            }
        }
    }

    for (int x=0;x<n;x++)
    {
        if (arr[x].grade!=-1)
        {
            if (arr[x].grade==arr[x-1].grade)
            {
                if (arr[x].name[0]>arr[x+1].name[0])
                {
                    x+=1;
                }

            }

            if (arr[x].grade==arr[x-1].grade)
            {
                if (arr[x].name[0]<arr[x-1].name[0])
                {
                    x-=1;
                }

            }
            printf ("%s %s\n",arr[x].name,arr[x].sbprove);
            break;
        }
    }

    for (int x=n-1;x>=0;x--)
    {
        if (arr[x].grade!=-1)
        {
            printf ("%s %s\n",arr[x].name,arr[x].sbprove);
            break;
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
int main()
{
    int n;
    scanf ("%d",&n);
for (int nn=0;nn<n;nn++)
{
    int a[4]={-1};
    scanf ("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
    int i;
    for (i=0;i<4;i++)
    {
        if (a[i]<0||a[i]>255)
        {
            printf ("no\n");
            i=-1;
            break;
        }
    }

    if (i==4)
    {
        printf ("yes\n");
    }
}
    return 0;
}







/*
int main()
{
    int n;
    scanf ("%d",&n);
for(int nn=0;nn<n;nn++)
{
    int m;
    scanf ("%d",&m);
    int arr[m];
    for (int i=0;i<m;i++)
    {
        scanf ("%d",&arr[i]);
    }

    if (m<2)
    {
        printf ("ERROR\n");
        continue;
    }


    for (int ii=0;ii<m;ii++)
    {
        for (int iii=0;iii<m-1;iii++)
        {
            if(arr[iii]>arr[iii+1])
            {
            int num;
            num=arr[iii];
            arr[iii]=arr[iii+1];
            arr[iii+1]=num;
            }
        }
    }

    for (int i=0;i<m-1;i++)
    {
        if (arr[i]==arr[i+1])
        {
            for (int ii=i;ii<m-1;ii++)
            {
                arr[ii]=arr[ii+1];
            }
            m--;
            i--;
        }
    }

    if (m<2)
    {
        printf ("ERROR\n");
    }

    else 
    {
        printf ("%d\n",arr[1]);
    }
}
    return 0;
}









/*
int main()
{
    int t;
    scanf ("%d",&t);
for (int tt=0;tt<t;tt++)
{
    int n;
    scanf ("%d",&n);
    if (n<0||n>10000||n<-10000)
    {
        printf ("ERROR\n");
    }
    else
    {  
        printf ("%.2f\n",sqrt(n));
    }
}
    return 0;
}*/