//找一个字符串是否是另一个字符串的子列

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    int da[100];
    int xiao[100];
    int n=0;
    int i=0;
    int ch;
    while ((ch=getchar())!='\n')
    {
        da[n]=ch;
        n++;
    }

    while ((ch=getchar())!='\n')
    {
        xiao[i]=ch;
        i++;
    }
    int x = 0;
    for(x=0;x<n;x++)
    {
        if (da[x]==xiao[0])
        {
        	int y;
            for(y=1;y<i;y++)
            {
                if (da[x+y]==xiao[y])
                continue;
                else
                {
                    goto eiheihei;
                    
                }
            }
            printf ("YES");
            goto eihei;
        }
        
        eiheihei:
        continue;
    }

    printf ("NO");
    
    eihei:
    return 0;
}