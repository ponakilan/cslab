#include <stdio.h>

long long binary(int n);
int octal(int n);
void hex(int n);

int main()
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("\n%d in binary : %lld", decimal, binary(decimal));
    printf("\n%d in octal : %lld", decimal, octal(decimal));
    hex(decimal);
}

long long binary(int n)
{
    long long bin = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}

int octal(int n)
{
    int octalNumber = 0, i = 1;

    while (n != 0)
    {
        octalNumber += (n % 8) * i;
        n /= 8;
        i *= 10;
    }

    return octalNumber;
}

void hex(int n)
{
    int temp, i=1, j, num=n;
    char hexa_Number[100];
    while (n != 0)
    {
        temp = n % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa_Number[i++] = temp;
        n = n / 16;
    }
    printf("\n%d in hexadecimal : ", num);
    for (j = i - 1; j > 0; j--)
        printf("%c", hexa_Number[j]);
}