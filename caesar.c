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
        printf("Usage: ./caesar k");
        return 1;
    }
    else
    {

        // value of key
        int k = atoi(argv[1]);
        //takes input of plain text
        string s = get_string("plaintext: ");
        int p = strlen(s);
        printf("ciphertext: ");
        //prints cipher text
        for (int i = 0; i < p; i++)
        {
            //for capital letters
            if (isupper(s[i]))
            {

                printf("%c", (s[i] - 65 + k) % 26 + 65);
            }
            //for small letters
            else if (islower(s[i]))
            {
                printf("%c", (s[i] - 97 + k) % 26 + 97);
            }
            //for others
            else
            {
                printf("%c", s[i]);
            }



        }
        printf("\n");

        return 0;
    }








}
