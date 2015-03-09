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

#define MAXEMPS 10

struct Employee {
  char last[16];
  char first[11];
  char title[20];
  int salary;
};

int main() {
  struct Employee employee[MAXEMPS];
  int n,i;
  
  //puts("how many employees are there?");
  //scanf("%d", &num);

  for (n = 0; n < MAXEMPS; ++n){
    //printf("Next employee:\n");
    printf("last name: "); fflush(stdout);
    gets(employee[n].last);
    if (strlen(employee[n].last) == 0){
      break;
    }
    printf("first name: "); fflush(stdout);
    gets(employee[n].first); // not understanding getline params
    printf("title: "); fflush(stdout); 
    gets(employee[n].title);
    printf("salary: "); fflush(stdout);
    scanf("%d", &employee[n].salary);
    getchar(); // remove newline
  }

  for (i= 0; i < n; ++i){
    printf("{%s,%s,%s,%d}\n",
	   employee[i].last,
	   employee[i].first,
	   employee[i].title,
	   employee[i].salary);
  }

  printf("End of program.\n");
  return 0;
}
