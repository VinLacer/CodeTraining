#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int checksum(char number[16])
{
    int aux[16];
    long n = atol(number);
    int j, i, k = 0;
    int check = 0;

    for (i = 0; n > 0; i++)
    {
        n = n / 10;

        if (((n % 10) * 2) > 9)
        {
            aux[i] = ((n % 10) * 2) / 10;
            aux[++i] = ((n % 10) * 2) % 10;
        }

        else
        {
            aux[i] = ((n % 10) * 2);
        }

        n = n / 10;
    }

    for (j = 0; j < i; j++)
    {
        k *= 10;
        k += aux[j];
    }

    for (j = 0; j < i; j++)
    {
        aux[i] = k % 10;
        k = k / 10;
        check += aux[j];
    }

    n = atol(number);

    while (n > 0)
    {
        check += n % 10;
        n = n / 100;
    }

    return (check % 10 == 0) ? 1 : 0;
}


int main(void)
{
    char number[16];
    int size = 0;
    int control = 0;

    while (1)
    {
NUMERO:
        printf("Number:");
        scanf("%s", number);
        size = strlen(number);

        for (int i = 0; i < size; i++)
        {
            if (isdigit(number[i]))
            {
                continue;
            }
            else
            {
                goto NUMERO;
            }
        }
        break;
    }

    if ((size == 15 && number[0] == '3') && (number[1] == '4' || number[1] == '7') && checksum(number) == 1)
    {
        printf("AMEX\n");
    }

    else if ((size == 16 && number[0] == '5') && (number[1] >= '1' && number[1] <= '5') && checksum(number) == 1)
    {
        printf("MASTERCARD\n");
    }
    else if ((size == 16 || size == 13) && (number[0] == '4') && checksum(number) == 1)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;

}
