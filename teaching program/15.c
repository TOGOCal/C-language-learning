//用比较字符串是否相同
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

char password[20];
/*int Jiancha(int a[x],int b[x],int y);*/
int c;
int arr[100];
int main()
{
    scanf("%s",password);
    if (strcmp(password,"123456")==0)
    printf ("yes\n");
    else
    printf ("no\n");//方法1

   /*
   int ch;
   int i=0;
   getchar();

   while((ch=getchar())!='\n')
   {
       arr[i]=ch;
       i++;
   }

   int arr2[i];
   for(int a=0;a<i;a++)
   {
       arr2[a]=arr[a];
   } 

   int mima[6]={1,2,3,4,5,6};
   c=Jiancha(arr2[i],mima[6],i);
   if (c==1)
   printf ("no");
   else
   printf ("yes");*/
   return 0;
}

/*int Jiancha(int a[x],int b[x],int y)
{
    for (int x=0;x<y;x++)
    {
        if (a[x]!=b[x])
        {
            return 1;
        }
    }
    return 2;
}//好像不太行
*/