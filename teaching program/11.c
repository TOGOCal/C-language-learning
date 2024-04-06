//猜数字最终版
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_INPUT_LENGTH 100

int main ()
{
    int number ,guess ,attempts =0;
    int totalAttempts =0, maxAttempts, choice;
    int gameCount =0;
    float averageAttempts =0.0;
    srand (time(NULL));

    printf ("welcome\n");
    printf ("it's a game to guess the number\n");
    printf ("please input the times you think you can successfully guess it\n");
    scanf ("%d",&maxAttempts);

    
    while (maxAttempts<=0)
    {
        printf ("what are you fucking doing!\n");
        printf ("change a number!\n");
        scanf ("%d",&maxAttempts);
    }

    getchar();

    do
    {
        number =rand()%100+1;
        attempts =0;
        printf ("the number is from 1-100\n");
        printf ("can you guess it?\n");
        do
        {
            attempts++;
            //scanf ("%d",&guess);
            char input[MAX_INPUT_LENGTH];
            fgets(input,MAX_INPUT_LENGTH,stdin);//fgets函数接收用户数据

            if (sscanf (input ,"%d",&guess)!=1)//sscanf函数解析字符串中的整数
            {
                printf ("what are you fucking doing?\n");
                printf ("please input a number\n");
                attempts--;
                continue;
            }
            
            if (guess > number)
            printf ("the number is smaller than you guess\n");
            else if ( guess < number)
            printf ("the number is bigger than you guess\n");
            else 
            {
                printf ("you are right!\n");
                break;
            }
        } while (guess!=number && attempts<maxAttempts);
        
        if (guess!=number)
        {
            printf ("\n");
            printf ("I'm sorry\n");
            printf ("but you didn't successfully guess the number in %d times\n",maxAttempts);
            printf ("\n");
        }
        else 
        {
            printf ("\n");
            printf ("you successfully guess the number in %d times\n",attempts);
            printf ("\n");
        }

        totalAttempts += attempts;
        gameCount++;

        printf("do you want to continue?\n");
        printf ("you can press 1 to continue\n");
        printf ("you can also press any other numbers to close the game\n");
        //scanf ("%d",&choice);
        
        char input[MAX_INPUT_LENGTH];
        fgets(input,MAX_INPUT_LENGTH,stdin);
        if (sscanf(input,"%d",&choice)!=1)
        break;

    } while (choice==1);

    if (gameCount >0)
    {
        averageAttempts = (float) totalAttempts / gameCount;
        printf ("\n");
        printf ("game over\n");
        printf ("you have played %d times in total\n",gameCount);
        printf ("the average attempts is %.2f\n",averageAttempts);

    }

    else 
    {
        printf ("game over\n");
        printf ("but you didn't play any games\n");
    }
    printf ("thanks for your play\n");
    printf ("bye\n");
    system ("pause");
    return 0;


}
