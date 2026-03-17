//------------------5. Write a function to print names of students whose grade is greater than 5.0.--------------------//#include <stdio.h>

struct student {
    char name[50];
    float grade;
};

void printAboveFive(struct student s[], int n) {
    int i;
    printf("\nStudents with grade greater than 5.0:\n");

    for(i = 0; i < n; i++) {
        if(s[i].grade > 5.0) {
            printf("%s\n", s[i].name);
        }
    }
}

int main() {
    struct student s[5];
    int i;

    printf("Enter name and grade for 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        scanf("%s %f", s[i].name, &s[i].grade);
    }

    printAboveFive(s, 5);

    return 0;
}
