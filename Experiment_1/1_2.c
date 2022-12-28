/*
 Memory size and location of data types
 */
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    float c = 3.0, d = 7.0;
    double e = 34, f = 65;
    char g = 't', h = 'w';
    //Printing my name and register number
    printf("Name : Akilan K.\nRegister number : 126018002.\n");
    printf("The size of integer a is %u and the memory address is %u.\n", sizeof(a), &a);
    printf("The size of integer b is %u and the memory address is %u.\n", sizeof(b), &b);
    printf("The size of float c is %u and the memory address is %u.\n", sizeof(c), &c);
    printf("The size of float d is %u and the memory address is %u.\n", sizeof(d), &d);
    printf("The size of double e is %u and the memory address is %u.\n", sizeof(e), &e);
    printf("The size of double f is %u and the memory address is %u.\n", sizeof(f), &f);
    printf("The size of character g is %u and the memory address is %u.\n", sizeof(g), &g);
    printf("The size of character h is %u and the memory address is %u.\n", sizeof(h), &h);
    return 0;
}