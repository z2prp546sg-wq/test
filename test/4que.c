#include <stdio.h>

int main()
{
    int spa = 5;

    for( int i = 5; i >= 1; i--)
    {

        for(spa = 5; spa > i; spa--)
        {
            printf(" ");
        }

        for(int j = 1; j <= i; j++)
        {
            if(j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }

        printf("\n");
    }

    return 0;
}