//cafe bill 
#include <stdio.h>
void main() {
    int t,p1,p2,total;
    char n[100];
    char d1[100];
    char d2[100];
    printf("Customer name :");
    scanf("%s",n);
    printf("Enter table no.:");
scanf("%d",&t);
printf("Dish name:");
scanf("%s",d1);
printf("Dish name:");
scanf("%s",d2);
printf("first price:");
scanf("%d",&p1);
printf("second price:");
scanf("%d",&p2);
    printf("\n-------------THE PANDA HUG CAFE--------------\n");
printf("Besides TCL Chinese Theatre\n(6925 Hollywood Blvd, Los Angeles, CA 90028)\n");
printf("----------------------------------------------\n");
printf("----%s----",n);
printf("\nTABLE Number %d",t);
printf("\n%s",d1);
printf(" %d",p1);
printf("\n%s",d2);
printf(" %d",p2);
total=p1+p2;
printf("\n-----------------------------------------------\n");
printf("total amount  :  %d",total);
printf("\n\n----------thanks for coming have a nice day--------");
}
