//自定义函数取小函数
#include<stdio.h>
#include<stdlib.h>
int zuixiao(int a,int b);

int main()
{
    int a, b, c, d;
    int e,f,g;
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    e=zuixiao(a,b);
    f=zuixiao(c,d);
    g=zuixiao(e,f);//或g=zuixiao(zuixiao(a,b),zuixiao(c,d))
    printf("min=%d\n",g);//如果不加"\n"的话，显示min=就会和下一行在同一排
    system("pause");
    return 0;
}

int zuixiao(int x,int y)
{
    if(x<y)
    return x;
    else
    return y;

}
