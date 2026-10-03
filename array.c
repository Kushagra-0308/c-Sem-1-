#include <stdio.h>

int main()
{
    int i = 1;
    int marks[5];

    printf("Enter marks of 5 subjects: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    
    
    return 0;
}