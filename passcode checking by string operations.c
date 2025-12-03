#include <stdio.h>


int stringLength(char str[]) {
    int len = 0;
    
    while (str[len] != '\0') {
        len++; 
    }
    return len;
}


int stringCompare(char str1[], char str2[]) {
    int i = 0;
    
    
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
           
            return (str1[i] - str2[i]); 
        }
        i++;
    }
 
    return 0; 
}

int main() {
    char s1[8],s2[8];
      printf("(maximum length of string is 8 characters.)\n");
    printf("Enter your passcode:");
    scanf("%s",s1);
     printf("Enter again:");
    scanf("%s",s2);

    printf("--- LENGTH OF PASSCODE ---\n");
    printf("Length of passcode is: %d\n", s1, stringLength(s1)); 

    printf("\n--- PASSCODE COMPARISON ---\n");
    int result1 = stringCompare(s1, s2);
 
   
    if (result1 == 0) printf("Both pins are equal.\n", s1, s2);
    else printf("Both pins are NOT equal. Result: %d (Difference at 'p' vs 'r').\n", s1, s2, result1); 


    return 0;
}
