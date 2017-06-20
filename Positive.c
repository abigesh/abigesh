#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number <=0)
    {
        if (number == 0)
        printf("ZERO");
        else
        printf("NEGATIVE");
    }
    else
    printf("POSITIVE");
    return 0;
}
