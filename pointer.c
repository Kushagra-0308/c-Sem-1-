#include<stdio.h>

int main ()
{ int a, b;
    a = 10;
    b = 20;
    int*j = &a;// pointer to a
    int*k = &b;// pointer to b
    printf("Value of a: %d\n", *j);
    printf("Value of b: %d\n", *k);
   // alternate
   printf("Value of a: %d\n", *&a);
   printf("Value of b: %d\n", *&b);

    printf("Address of a: %p\n", j);
    printf("Address of b: %p\n", k); 
    // alternate
    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);

    return 0;
}