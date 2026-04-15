#include <stdio.h>
#include <string.h>
// 1) Write a C function that concatenates two input strings S1 and S2 in string S1.
char* concatenate(char* s1, char* s2) {
    strcat(s1, s2);
    return s1;
}
// 2) Write a C program that reads 10 characters from the user, and then searches for the position of
// the character z.
int find_character_position(char* str, char ch) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            return i; // Return the position of the character
        }
    }
    return -1; // Return -1 if the character is not found
}
// 3) Write a C program that reads string S1 and certain letter from the user, then call your own
// function that return the number of occurrences of the given character in the given string.
int count_occurrences(char* str, char ch) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count; // Return the number of occurrences
}
// 4) Write a C function that take two strings (array of characters) and return one if the 1st is part of
// the 2nd and zero otherwise
int is_substring(char* s1, char* s2) {
    return strstr(s2, s1) != NULL; // Return 1 if s1 is part of s2, otherwise return 0
}
// 5) Write a C code to reverse a string by recursion.
void reverse_string(char* str, int start, int end) {
    if (start >= end) {
        return; // Base case: if the start index is greater than or equal to the end index, return
    }
    // Swap the characters at the start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    // Recursive call to reverse the remaining string
    reverse_string(str, start + 1, end - 1);
}
// 6) Write a function ``replace'' which takes a string as a parameter and replaces all spaces in that
// string by minus signs and delivers the number of spaces it replaced.
int replace_spaces(char* str) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            str[i] = '-';
            count++;
        }
    }
    return count;
}
// 7) What is the output of these codes?
// a) int main()
// {
//  enum status {pass, fail, absent};
//  enum status stud1, stud2, stud3;
//  stud1 = pass;
//  stud2 = absent;
//  stud3 = fail;
//  printf("%d %d %d\n", stud1, stud2, stud3);
//  return 0;
// }
// << Output: 0 2 1 >>
// b) int main()
// {
//  enum days {MON=-1, TUE, WED=6, THU, FRI, SAT};
//  printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU,
// FRI, SAT);
//  return 0;
// }
// << Output: -1, 0, 6, 7, 8, 9 >>

// 8) Declare a structure Employee with id_no, salary, birth_date – which is day, month, and year- id
// for 5 tasks the employee has. For example the data for an employee may be: id_no = 5, salary =
// 7500, birth_date = { day= 3, month= 8, year = 1980}, tasks_ids = {1, 3, 4, 9, 12}.
// a) For the previous declaration, write a function which input one employee data.
struct data
{
    int id_no;
    float salary;
    struct Date birth_date;
    int tasks_ids[5];
};
struct Date {
    int day;
    int month;
    int year;
};

void input_employee(struct data* emp) {
    printf("Enter employee ID: ");
    scanf("%d", &emp->id_no);
    printf("Enter employee salary: ");
    scanf("%f", &emp->salary);
    printf("Enter employee birth date (day month year): ");
    scanf("%d %d %d", &emp->birth_date.day, &emp->birth_date.month, &emp->birth_date.year);
    printf("Enter employee task IDs (5 tasks): ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &emp->tasks_ids[i]);
    }
}
// b) For the previous declaration, write a function which take an array of employee’s data and an
// id_no, the function should search for that employee in the employees array and return his salary, or
// return -1 if the employee id not found.
float find_employee_salary(struct data* employees, int num_employees, int id_no) {
    for (int i = 0; i < num_employees; i++) {
        if (employees[i].id_no == id_no) {
            return employees[i].salary; // Return the salary if the employee is found
        }
    }
    return -1; // Return -1 if the employee is not found
}
// c) Use all the previous in a program that enter data for 5 employees, then the program takes one
// id_no for an employee, search for it, if found return his salary, otherwise write "NOT FOUND".
int main() {
    struct data employees[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter data for employee %d:\n", i + 1);
        input_employee(&employees[i]);
    }
    int id_no;
    printf("Enter employee ID to search for salary: ");
    scanf("%d", &id_no);
    float salary = find_employee_salary(employees, 5, id_no);
    if (salary != -1) {
        printf("Employee salary: %.2f\n", salary);
    } else {
        printf("NOT FOUND\n");
    }
    return 0;
}
// 9) Show the output:
// main() {
//  struct s {
//  double x;
//  int y;
//  } a_struct;
//  printf("The size of a_struct: %d-byte\n",
// sizeof(a_struct));
// }
//8(double)+4(int)+4(padding)= 16 bytes



