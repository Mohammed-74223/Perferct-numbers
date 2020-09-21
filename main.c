#include <stdio.h>

int main() {
   int num,sum=0;
   printf ("Enter the number you need to check: ");
   scanf("%d", &num);
    for (int i=1; i<=(num-1);i++){
       if (num%i==0) {
           sum=sum+i;
       }
   }
   if(sum==num) {
       printf("%d is a perfect number.",num);
       } else {
       printf("Not perfect number");
   }
}

