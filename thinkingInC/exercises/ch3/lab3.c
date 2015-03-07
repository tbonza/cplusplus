#include <stdio.h>

int main(){
  short int num1, num2;
  int sum;
  
  puts("Enter the 1st number:");
  scanf("%d",&num1);
  puts("Enter the 2nd number:");
  scanf("%d",&num2);

  sum = num1 + num2;

  if (sum % 2){
    printf("even\n");
  }
  else if (sum % 3){
    printf("odd\n");
  }
  else {
    printf("uh oh trouble\n");
  }
  
}
