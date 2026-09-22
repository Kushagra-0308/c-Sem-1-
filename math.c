#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);

    int d = sqrt(b * b - 4 * a * c);
    int e = pow(b, 2) - 4 * a * c;
    int f = ceil(sqrt(b * b - 4 * a * c));    // ceil function returns the smallest integer greater than or equal to the given number
    int g = floor(sqrt(b * b - 4 * a * c));   // floor function returns the largest integer less than or equal to the given number
    int h = round(sqrt(b * b - 4 * a * c));   // round function returns the nearest integer to the given number
    int j = trunc(sqrt(b * b - 4 * a * c));   // trunc function returns the integer part of the given number
    int k = fabs(sqrt(b * b - 4 * a * c));    // fabs function returns the absolute value of the given number
    int l = fmod(sqrt(b * b - 4 * a * c), 2); // fmod function returns the remainder of the division of the given number by the specified divisor
    int m = log(sqrt(b * b - 4 * a * c));     // log function returns the natural logarithm of the given number
    int n = exp(sqrt(b * b - 4 * a * c));     // exp function returns the exponential value of the given number
    printf("the value of is %d/%d/%d/%d/%d/%d/%d/%d/%d\n", d, e, f, g, h, j, k, l, m, n);

    return 0;
}