#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 0;
    int a = 0;
    int b = 0;
while (a < b)
    {
     a = get_int("a = ");
     b = get_int("b = ");
    for (int i = 0; a < b - 1; i++)
    {
        a++;
        printf("%d\n", a);
        n++;
    }
    
    }
    printf("n = %d\n", n);
    
}
    