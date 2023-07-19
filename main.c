#include <stdio.h>
#include <stdlib.h>

int main() {
    struct record {
        char school_name[30];
        char student_name[20];
        int comp, maths, nep;
        int Class, roll;
    } data;

    printf("Enter school name: ");
    scanf("%[^\n]%*c", data.school_name);

    printf("\nEnter your class: ");
    scanf("%d%*c", &data.Class);

    printf("\nEnter your roll: ");
    scanf("%d%*c", &data.roll);

    printf("Enter your student name: ");
    scanf("%[^\n]%*c", data.student_name);

    printf("Enter the marks of comp: ");
    scanf("%d", &data.comp);

    printf("\nEnter the marks of maths: ");
    scanf("%d", &data.maths);

    printf("\nEnter the marks of nep: ");
    scanf("%d", &data.nep);

    system("cls");
    printf("***********%s**********\n", data.school_name);
    printf("Student name: %s\n", data.student_name);
    printf("Class: %d\n", data.Class);
    printf("Roll: %d\n", data.roll);
    printf("Computer: %d\n", data.comp);
    printf("Maths: %d\n", data.maths);
    printf("Nepali: %d\n", data.nep);

    return 0;
}
