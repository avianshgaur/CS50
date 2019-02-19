#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //checks if there is one command line argument
    if (argc != 2)
    {
        fprintf(stderr, "Usage: copy infile outfile\n");
        return 1;
    }
    char *infile = argv[1];
    // open input file
    FILE *input = fopen(infile, "r");
    FILE *img;
    //checks if INPUT file is NULL
    if (input == NULL)
    {
        fprintf(stderr, "Usage: copy infile outfile\n");
        return 2;
    }

    uint8_t buffer[512];
    int i = 0;
    int x = -1;
    char filename[8];
    //this loop will continue till the end of jpeg
    while (fread(buffer, 512, 1, input) == 1)
    {


        //checks found a jpeg or not
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {

            if (i != 0)
            {
                fclose(img);
            }
            x++;
            i = 1;

            sprintf(filename, "%03i.jpg", x);
            img = fopen(filename, "w");
            fwrite(buffer, 512, 1, img);
            //writes in a file which is a continuation of above jpeg
        }

        else if (i == 1)
        {
            fwrite(buffer, 512, 1, img);
        }







    }
    fclose(img);

    fclose(input);
    return 0;

}
