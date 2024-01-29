// C Program to demonstrate Sum of Natural Numbers using recursion
#include <stdio.h>
 
int sumofnaturalnumbers(int num)
{
  if (num != 0)
     return num + sumofnaturalnumbers(num - 1);
    else
        return num;
}
 
int main()
{
 
    int number = 10;
    printf("Sum = %d", sumofnaturalnumbers(number));
   
    return 0;
}