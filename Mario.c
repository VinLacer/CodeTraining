#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;

    do
    {
        h = get_int("Height:"); //Getting the Height from de user
    }
    while (h < 1 || h > 8); //Verifying if the input is a number between 1 and 8

    for (int i = 0; i < h; i++) //Loop for control of Height
    {

        for (int d = h; d > i + 1; d--) //Loop to control the number of spaces per line
        {
            printf(" ");    //Printing spaces
        }

        for (int a = 0; a <= i ; a++)   //Loop to control the number of hashes per line
        {
            printf("#");    //Printing hashes according to the Height
        }
        
        printf("\n");
    }
}
