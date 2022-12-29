#include <stdio.h>

int lcm(int n1, int n2)
{
    int max;
    max = (n1 > n2) ? n1 : n2;

    while (1)
    {
        if ((max % n1 == 0) && (max % n2 == 0))
        {
            return max;
        }
        ++max;
    }
}

int gcd (int n1, int n2) {
    int i, gcd;

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}

int main()
{
    int n1, n2;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    printf("The GCD of %d and %d is %d", n1, n2, gcd(n1, n2));
    printf("\nThe LCM of %d and %d is %d", n1, n2, lcm(n1, n2));
    return 0;
}