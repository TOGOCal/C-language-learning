//棋盘函数

#pragma once

/*void qipan(int jihang,arr1[jihang][jihang]);


void qipan(int jihang,arr1[jihang][jihang])
{
    int jihang2=jihang*2-1;//打印行数

    for (int jihang3=0;jihang3<jihang2;jihang3++)
    {
        int num=0;
        if (jihang3%2==0)
        {
            for (int a=0;a<jihang;a++)
            {
                printf (" %c ",arr1[num][a]);
                num++;
                if (a!=jihang-1)
                {
                    printf ("|");
                }//使最后不打印
            }
            printf ("\n");
        }

        else
        {
            for (int b=0;b<jihang;b++)
            {
                printf ("---");
                if (b!=jihang-1)
                {
                    printf ("|");
                }//使最后不打印
            }
            printf ("\n");
        }
        
    }
}
*/




/*void qipan(int jihang)
{

char arr1[jihang][jihang];

    for (int a=0;a<jihang;a++)
    {
        for (int b=0;b<jihang;b++)
        {
            arr1[a][b]=' ';
        }
    }//初始化棋盘

    

    int jihang2=jihang*2-1;//打印行数

    for (int jihang3=0;jihang3<jihang2;jihang3++)
    {
        int num=0;
        if (jihang3%2==0)
        {
            for (int a=0;a<jihang;a++)
            {
                printf (" %c ",arr1[num][a]);
                num++;
                if (a!=jihang-1)
                {
                    printf ("|");
                }//使最后不打印
            }
            printf ("\n");
        }

        else
        {
            for (int b=0;b<jihang;b++)
            {
                printf ("---");
                if (b!=jihang-1)
                {
                    printf ("|");
                }//使最后不打印
            }
            printf ("\n");
        }
        
    }

}*/