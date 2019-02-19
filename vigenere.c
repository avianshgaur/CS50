#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main(int argc, string argv[])

{



    //prints error message

    if (argc != 2)

    {

        printf("Usage: ./viginere k\n");

        return 1;

    }
    //code for length of string argv
    int x, y = 0;
    int z = strlen(argv[1]);
    string a = argv[1];
    for (x = 0; x < z ; x++)
    {
        if (isalpha(a[x]))
        {
            y++ ;
        }

    }


    if (y == z)
    {



        // value of key
        // a is string v[1]
        // z is length of string v[1]
        //p is length of string s
        // s is input string
        //takes input of plain text

        string s = get_string("plaintext: ");
        int k = atoi(argv[1]);
        int p = strlen(s);

        printf("ciphertext: ");
        string c;
        int m = 0;
        //prints cipher characters
        for (int i = 0 ; i < p; i++)
        {
            int j = m % z;
            //prints cipher char for capital letters of string s
            if (isupper(s[i]))
            {
                if (isupper(a[j]))
                {
                    printf("%c", (s[i] - 65 + a[j] - 65) % 26 + 65);
                }
                if (islower(a[j]))
                {
                    printf("%c", (s[i] - 65 + a[j] - 97) % 26 + 65);
                }
                m++ ;
            }
            //prints cipher char for small letters of string s

            else if (islower(s[i]))
            {
                if (isupper(a[j]))
                {
                    printf("%c", (s[i] - 97 + a[j] - 65) % 26 + 97);
                }
                if (islower(a[j]))
                {
                    printf("%c", (s[i] - 97 + a[j] - 97) % 26 + 97);
                }
                m++;
            }
            else
            {
                printf("%c", s[i]);

            }
        }

        printf("\n");



        return 0;

    }

    else
    {


        printf("Usage: ./viginere k\n");

        return 1;


    }

















}