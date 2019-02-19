#include<stdio.h>
#include<cs50.h>
int main(void)
{
    //prompt user for a positive number
    do
    {
        int h = get_int("Height: ");
    }
    while (h < 0 || h > 23);
    int j, k, l;
    //forms the required pyramid
    for (j = 0; j < h; j++)
    {
        //forms a pyramid step by step
        for (k = 0; k < h - j - 1; k++)
        {
            printf(" ");
        }
        for (l = 0; l < 2 + j; l++)
        {


            printf("#");
        }
        printf("\n");
    }
}
