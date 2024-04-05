#include <stdio.h>

int f2c(int f)
{
    int c = (f - 32) * 5 / 9;
    return c;
}

int main()
{
    int fahrenheits;
    int celsius;
    printf("Enter a number, which you would like to convert from Fahrenheits to Celsius:\n");
    scanf("%d", &fahrenheits);
    celsius = f2c(fahrenheits);
    printf("Its Celsius equivalent is %d.\n", celsius);
    return 0;
}
