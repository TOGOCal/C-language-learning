//数组地址的一些细节
#include <stdio.h>


int main()
{
    printf ("a\n");
    return 0;
}



/*int main ()
{
    int arr[]={1,2,3,4,5,6,7};

    printf ("%p\n",arr);//数组名代表数组首地址
    printf ("%p\n",arr+1);

    printf ("%p\n",&arr[0]);//首元素地址
    printf ("%p\n",&arr[0]+1);

    printf ("%p\n",&arr);
    printf ("%p\n",&arr+1);//代表整个数组对应的地址所以+1直接跳过了数组所有元素对应的地址

    return 0;
}*/


