//俄罗斯方块
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
//#include <sys/select.h>

int arrow1();

struct fang
{
    int x;
    int y;
    int zhuangtai;//状态为0在空中，状态为1则已经发生碰撞
};

int arrow1()
{
    struct timeval tv;
    fd_set fds;
    int ret;

    // 设置标准输入为非阻塞模式
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);

    //printf("请输入一个字符: ");

    // 设置等待时间为1秒
    tv.tv_sec = 1;
    tv.tv_usec = 0;

    // 使用select函数等待输入
    FD_ZERO(&fds);
    FD_SET(STDIN_FILENO, &fds);
    ret = select(STDIN_FILENO + 1, &fds, NULL, NULL, &tv);

    if (ret == -1) 
    {
        perror("select error");
        return 1;
    } 

    else if (ret == 0) 
    {
        //printf("1秒内没有输入，跳过该步骤\n");
        return 0;
    } 

    else 
    {
        char ch;
        scanf("%c", &ch);
        //printf("%c\n", ch);
        if (ch=='a')
        {
            return 1;
        }

        else if (ch=='d')
        {
            return 2;
        }
    }

    return 0;
}


int main()
{
    //srand((unsigned) time(NULL ));
    //int n;
    int a=arrow1();
    printf ("%d\n",a);
    return 0;
}


/*


|
|     #
| # # # 
|---------




*/