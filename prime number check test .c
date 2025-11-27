#include <stdio.h>
#include <math.h> 
int prime(int num, int divisor) {
    if (num <= 1) {
       return 0; 
   }
    if (divisor > sqrt(num)) {
       return 1;    }
      if (num % divisor == 0) {
       return 0;   }
      return prime(num, divisor + 1);
}


int main() {
   int number;


   printf("Enter a number: ");
   scanf("%d", &number);


      if (prime(number, 2)) {
       printf("%d is a prime number.\n", number);
   } else {
       printf("%d is not a prime number.\n", number);
   }


   return 0;
}
