#include <stdio.h>

int main(){
  int osum = 0;
  int esum = 0;
  int num;
  
  while(num != 0){
    puts("pick a number, choose 0 to terminate: \n");
    scanf("%d", &num);
    
    switch(num % 2) {
    case 0:
      esum += num;
      break;
    case 1:
      osum += num;
      break;
    default:
      puts("You effed up, there's something wrong with num");
      num = 0;
    }
  }

  printf("Sum of the odd numbers is: %d\n", osum);
  printf("Sum of the even numbers is: %d\n", esum);

  return 0;
}
