#include<stdio.h>
#include<cs50.h>
#include <math.h>
int main(void)
{
    //prompt user for a positive number
    float d;
    int p, q, r, s;
    do
    {
        d = get_float("Change owed: ");
    }
    while (d < 0);
    //converts float value to nearest integer value
    int c = round(d * 100);
    // code for findindind no. of coins
    int i;
    for (i = 0; i * 25 <= c; i++)
    {
        p = i;
    }
    for (int j = 0; 10 * j <= c - 25 * p; j++)
    {
        q = j;
    }
    for (int k = 0; k * 5 <= c - 25 * p - 10 * q; k++)
    {
        r = k;
    }
    for (int l = 0; l * 1 <= c - 25 * p - 10 * q - 5 * r; l++)
    {
        s = l;
    }
    // total no. of coins
    printf("%i", p + q + r + s);

}
