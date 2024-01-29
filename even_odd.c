// C program to find whether the number is even or odd
#include <stdio.h> 
void checkEvenOdd(int N) 
{ 
    int r = N % 2; 
    if (r == 0)  
    { 
        printf("Even"); 
    }else 
    { 
        printf("Odd"); 
    } 
} 
int main() 
{ 
    
    int N ;
    printf("Enter the number N :");
    scanf("%d",&N);
    checkEvenOdd(N); 
  
    return 0; 
}