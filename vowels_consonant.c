// C program to check if a character is a vowel or consonant
#include <stdio.h>
int main()
{
  char ch ;
  printf("Enter the character:");
  scanf("%c",&ch);
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'|| ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'|| ch == 'u' || ch == 'U') {
       printf("The character %c is a vowel.\n", ch);
    }
    else {
        printf("The character %c is a consonant.\n", ch);
    }
 
    return 0;
}