//---------------------6. Write a function to print data of all students who joined in 2019----------------------//
#include <stdio.h>

struct Student {
    char name[50];
    int score;
    float grade;
    int joinYear;
};

void printStudentsJoinedIn2019(struct Student students[], int n)
{
    printf("Students who joined in 2019:\n");

    for(int i = 0; i < n; i++)
        {
        if(students[i].joinYear == 2019)
        {
            printf("Name: %s, Score: %d, Grade: %.2f, Join Year: %d\n",
                   students[i].name,
                   students[i].score,
                   students[i].grade,
                   students[i].joinYear);
        }
    }
}

int main()
{
    struct Student students[] = {
        {"Rahul", 85, 6.5, 2019},
        {"Anita", 92, 8.1, 2018},
        {"Vikram", 78, 7.2, 2019},
        {"Sneha", 88, 9.0, 2020}
    };

    int n = sizeof(students) / sizeof(students[0]);

    printStudentsJoinedIn2019(students, n);

    return 0;
}
