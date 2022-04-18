///Program to check given letter is vowe;l or not.

#include<stdio.h>
#include<conio.h>

int main()
{
   char ch ='/0';
   
   printf("\n Enter A Character To Check Is  VOWEL or Not : ");
   ch = getche();

   switch (ch) 
   {    
         
      case 'A':
      case 'a':
      case 'E':
      case 'e':
      case 'I':
      case 'i':
      case 'O':
      case 'o':
      case 'U':
      case 'u':  
                printf("\n Entered Letter Is VOWEL.");
                break;
      default:
              printf("\n Entered Letter is Not VOWEL.");
         
         printf("\n\n Thanks For Input.");
         
         getch();
         return 0;                       
   }


