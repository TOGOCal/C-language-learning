//getcar(),putchar()用法
#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    /*int ch=0;
    while ((ch=getchar())!=EOF)
    {
        putchar(ch);
    }
    return 0;*/


    /*int ch=getchar();
    if (49==ch)
    printf ("yes");
    else
    return 0;
    
    return 0;*/
    //通过该方法可以阻断一些奇葩输入
    //例：若要输入1继续程序，1的ASCII码是49，那就让ch==49进行判定就可以了
    

    int ch =getchar();
    putchar(ch);
    putchar('\n');//putchar本身没有换行功能，需要这样才能换行；
    /*printf ("%d\n",ch);
    printf ("%d\n",'A');
    printf ("%c\n",'\101');*///八进制数101，代表65->就是A；
    return 0;
}