#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 90 && marks <= 100)
        printf("Grade: A+\n");
    else if(marks >= 75)
        printf("Grade: A\n");
    else if(marks >= 60)
        printf("Grade: B\n");
    else if(marks >= 45)
        printf("Grade: C\n");
    else if(marks >= 33)
        printf("Grade: D\n");
    else if(marks >= 0)
        printf("Grade: Fail\n");
    else
        printf("Invalid marks\n");

    return 0;
}
