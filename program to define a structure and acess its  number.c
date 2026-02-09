#include <stdio.h>
struct Employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e1;
    e1.emp_id = 1234;
    sprintf(e1.name, "John Doe");
    e1.salary = 55000.75;
    printf("Employee ID (Number): %d\n", e1.emp_id);
    printf("Employee Name: %s\n", e1.name);
    printf("Employee Salary: %.2f\n", e1.salary);
    printf("\nMemory address of Employee ID: %p\n", (void*)&e1.emp_id);

    return 0;
}
