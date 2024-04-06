//对于字符串的设计
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr1[]="SB";//arr为数组
    char arr2[]={'S','B',0};//必须包括0，\0为字符串的结束标志，\是转义字符
    printf("sheng yu han =%s\n",arr1);//“ ”引起的是字符串，‘ ’引起的是
    printf("%s\n",arr2);
    system("pause");
    return 0;
}