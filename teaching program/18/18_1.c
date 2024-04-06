//外部配置文件的方法
#include <stdio.h>
#include <stdlib.h>
#include "18_0.h"

int main ()
{
    int a,b,c;
    scanf ("%d %d",&a,&b);
    //c=a;
    c=jia(a,b);
    printf ("%d",c);
    return 0;
}