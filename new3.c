#include <stdio.h>

int main() {
    int day;
    printf("Enter a number(1-7):");
    scanf("%d", &day);

    switch(day) {
   case 1:
     printf("Sunday\n");

   case 2:
     printf("Monday\n");

   case 3:
     printf("Tuesday\n");

   case 4:
     printf("Wednesday\n");

   case 5:
     printf("Tursday\n");

   case 6:
     printf("Friday\n");

   case 7:
     printf("Saturday\n");

     default:
      printf("Invaild input!please enter a number between 1 and 7.\n");
      }
    }

