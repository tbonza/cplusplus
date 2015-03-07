/* Define an Employee structure that has members last name,
 * first name, title, and salary
 *
 * Write a program that prompts the user for an arbitrary
 * number of Employees, and stores them in an array of 
 * Employee. When the user enters an empty string for the 
 * last name, print out the list of Employees
 */

#include <stdio.h>
#include <string.h>

struct Employee {
  char last[16];
  char first[11];
  char title[20];
  int salary;
};

int main() {
  int num;
  
  puts("how many employees are there?");
  scanf("%d", &num);

  struct Employee employee[num];

  int emp;
  for (emp = 0; emp < num; emp++){
    puts("Next employee:\n");
    printf("last name:"); fflush(stdout);
    getline(employee[emp].last);
    if (strlen(employee[emp].last) == 0){
      break;
    }
    printf("first name:");fflush(stdout);
    getline(employee[emp].first); // not understanding getline params
    printf("title:");fflush(stdout); 
    getline(employee[emp].title);
    printf("salary:"); fflush(stdout);
    scanf("%d", &employee[emp].salary);
    getchar(); // remove newline
  }

  int item;
  for (item; item < len(employee); item++){
    printf("{%s,%s,%s,%d}\n",
	   employee[item].last,
	   employee[item].first,
	   employee[item].title,
	   employee[item].salary);
  }

  printf("End of program.\n");
  return 0;
}
