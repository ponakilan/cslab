#include <stdio.h>
#include <string.h>

void reverse (char string[]) {
    int length, i;
    char temp;
    length = strlen(string) - 1;
    for (i = 0; i < strlen(string) / 2; i++)
    {
        temp = string[i];
        string[i] = string[length];
        string[length--] = temp;
    }
}

int main()
{
    char string[20];
    printf("Enter String : ");
    scanf("%s", string);
    reverse(string);
   printf("Reverse string : %s",string);
    return 0;
}