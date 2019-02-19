#include<stdio.h>
#include<cs50.h>
int main(void)

{
    // rejects negative value
    int h;
    do
    {
        h = get_int("Height: ");

    }
    while (h < 0 || h > 23);
    int i, j, k, l, m;
    //main code for building a pyramid
    for (i = 0; i < h; i++)
    {
        //builds left pyramid
        for (j = 0; j < h - i - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");
        //builds right pyramid
        for (l = 0; l <= i; l++)
        {
            printf("#");
        }
        //moves to next row
        printf("\n");
    }
}
