#include <stdio.h>

struct employee {
  char name[100];
  int employee_id;
  float salary;
  char job_title[100];
};

void print_employee(struct employee employee) {
  printf("%s, %d, %.2f, %s\n", employee.name, employee.employee_id, employee.salary, employee.job_title);
}

int main() {
  // Create a list of employees
  struct employee employees[] = {
    { "John Doe", 12345, 100000.00, "Software Engineer" },
    { "Jane Doe", 54321, 50000.00, "Sales Manager" },
  };

  // Print the employee data
  for (int i = 0; i < sizeof(employees) / sizeof(employees[0]); i++) {
    print_employee(employees[i]);
  }

  return 0;
}