#include <stdio.h>
#include <cs50.h>

int main(void)
{
     int l;
      printf("Введіть оцінку:");
      scanf("%i", &l);
      
      switch (l) {
            case 1 : printf("погано\n");
            break;
            case 2: printf("незадовільно\n");
            break;
            case 3: printf("задовільно\n");
            break;
            case 4: printf("добре\n");
            break;
            case 5: printf("відмінно\n");
            break;
            default: printf("помилка\n");
            break;
      }
      return (0);
}