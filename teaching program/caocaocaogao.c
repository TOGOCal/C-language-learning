#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int miyunsuan (int x, int y);
int biao(int x);
char arr[100]={'\0'};
int ch;
int sb=0;
int main()
{
    eihei:
    sb=0;
    while((ch=getchar())!='\n')
    {
        arr[sb]=ch;
        sb++;
    }

    int crr[8*sb];
    for (int sd=0;sd<8*sb;sd++)
    {
        crr[sd]=-1;
    }

    for (int i=0;i<sb;i++)
    {
        int ii=8*(i+1)-1;
        int num;
        for (int jishu=0;jishu<8;jishu++)
        {
            if (arr[i]&1==1)
            {
                crr[ii]=1;
            }

            else
            {
                crr[ii]=0;
            }
            ii--;
            arr[i]=arr[i]>>1;   
        }
    }//8->00001000
    int duan=(8*sb)/6+1;
    int quan[duan][6];
    for (int du=0;du<duan;du++)
    {
        for (int sssb=0;sssb<6;sssb++)
        {
            quan[du][sssb]=0;
        }
    }

    int *p=&quan[0][0];
    for (int sd=0;sd<8*sb;sd++)
    {
        *p=crr[sd];
        *p++;
    }

    char output[3*sb];
    for(int du=0;du<3*sb;du++)
    {
        output[du]='\0';
    }
    int eihei=0;
    for (int du=0;du<duan;du++)
    {
        int num=0;
        for (int sssb=0;sssb<6;sssb++)
        {
            num=num+quan[du][sssb]*miyunsuan(2,6-sssb-1);
        }
        output[eihei]=biao(num);
        eihei++;
    }

    for(int aq=0;;aq++)
    {
        if(output[aq]!='\0')
        {
            printf ("%c",output[aq]);
        }

        else
        {
            while((aq)%4!=0)
            {
                printf("=");
                aq++;
            }
            break;
        }
    }
    printf ("\n");
    printf ("\n");
    int syh=1;
    
    
    if(syh==1)
    goto eihei;

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

int biao(int x)
{
    if(x>=0&&x<=25)
    {
        return 'A'+x;
    }

    else if(x>=26&&x<=51)
    {
        return 'a'+(x-26);
    }

    else if (x>=52&&x<=61)
    {
        return '0'+(x-52);
    }
    else if (x==62)
    {
        return '+';
    }

    else if(x==63)
    {
        return '/';
    }
}














/*

int main() {
	int n=0;
	int a[30]={0};
	scanf("%d",&n);
	int i=0;
	int j=0;
	int x=n;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				x--;
				break;
			}
		}
	}
	printf("%d",x);
}

int zuida(int x,int arrr[x],int cf[x],int ii,char arr[x][x]);
void shushihua(int x,char arr[x]);

int main()
{
    char arr[100][100];
    int cf[100]={0};
    for (int sb=0;sb<100;sb++)
    {
        for (int dsb=0;dsb<100;dsb++)
        {
            arr[sb][dsb]='\0';
        }
    }
    int arrr[100]={0};
    int ch;
    int i=0;
    int ii=0;

    while ((ch=getchar())!=EOF)
    {
        if (isdigit(ch))
        {
            arr[ii][i]=ch;
            i++;
        }

        else
        {
            for (int x=0;x<i;x++)//储存数据
            {
                if (arr[ii][x]!=arr[ii][i-x-1]||arr[ii][0]=='0'||i==1)//不相等
                {
                    for (int xxx=0;xxx<i;xxx++)
                    {
                            arr[ii][xxx]='\0';//清除
                    }
                    i=0;
                    break;
                }

                if (x==i-1)
                {
                    for (int xx=0;xx<ii;xx++)//检查前面有没有相同的
                    {
                        if (strcmp(arr[ii],arr[xx])==0)
                        {
                            for (int xxx=0;xxx<i;xxx++)
                            {
                                arr[ii][xxx]='\0';//清除
                            }
                            (arrr[xx])++;
                            i=0;
                            goto eihei;
                        } 
                    }
                    (arrr[ii])++;
                    ii++;
                    i=0;
                    eihei:
                    ii=ii;
                }
            }
        }
    }

    if (arr[0][0]=='\0')
    {
        printf ("None\n");
    }

    else
    {
        int a=zuida(100,arrr,cf,ii,arr);
    }
    system ("pause");
    return 0;
}

int zuida(int x,int arrr[x],int cf[x],int ii,char arr[x][x])
{
    int shu=0;
    int num=0;
    for (int xx=0;xx<x;xx++)
    {
        if (arrr[num]<arrr[xx])
        {

            num=xx;
        }
    }

    cf[shu]=num;
    shu++;
    
    for (int xxx=0;xxx<ii;xxx++)
    {
        if (arrr[num]==arrr[xxx]&&xxx!=num)
        {
            cf[shu]=xxx;//下角标
            shu++;
        }
    }

    char size1[shu];//根据大小排序
    shushihua(shu,size1);
    char sr[shu];
    shushihua(shu,sr);
    for (int xiaoshu=0;xiaoshu<shu;xiaoshu++)
    {
        int aa=cf[xiaoshu];
        size1[xiaoshu]=(strlen(arr[aa])+'0');
    }

    //strcpy(pr,size);
    strcpy(sr,size1);
    float pr[shu];
    float size[shu];
    for (int sshu=0;sshu<shu;sshu++)
    {
        pr[sshu]=(sr[sshu]-'0');
    }

    for (int sshu=0;sshu<shu;sshu++)
    {
        size[sshu]=(size1[sshu]-'0');
    }
    int ds=1;
    eiheihei:
    for (int prr=0;prr<shu;prr++)
    { 
        for (int prrr=0;prrr<shu;prrr++)
        {
            
            if (pr[prr]<pr[prrr])
            {
                float ssun=pr[prr];
                pr[prr]=pr[prrr];
                pr[prrr]=ssun;
            }

            else if (pr[prr]==pr[prrr])
            {
                int shen=pr[prrr];
                for (int sy=0;sy<shen;sy++)
                {
                    if (arr[prr]<arr[prrr])
                    {
                        pr[prr]=pr[prr]+(0.1*ds);
                        size[prr]+=(0.1*ds);
                        ds++;
                        goto eiheihei;
                    }
                }
            }
        }
    }

    for (int i=0;i<shu;i++)
    {
        for (int ii=0;ii<shu;ii++)
        {
            if (pr[i]==size[ii])
            {
                int sx=cf[ii];
                printf ("%s ",arr[sx]);
                printf ("%d\n",arrr[sx]);
                fflush(stdout);
                break;
            }
        }
    }
    return shu;
}

void shushihua(int x,char arr[x])
{
    for (int xx=0;xx<x;xx++)
    {
        arr[xx]='\0';
    }
}

/*
int zuixiao(int x);
int main()
{
    int a;
    scanf ("%d",&a);
    int b=zuixiao(a);
    printf ("%d",b);
    return 0;

}

int zuixiao(int x)
{
    int xx=x/2;
    int xxx=x-x/2;
    int num=0;
    num=num+xx*(xx-1)/2;
    num=num+xxx*(xxx-1)/2;
    return num;
}*/
