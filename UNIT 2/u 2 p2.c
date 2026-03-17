//----------------------2. Modify above program for 5 students record.----------------------------//
#include <stdio.h>

struct student{
    int Rollno;
    char Name[20];
    char Department[40];
    int yearofjoining;
    float score;
};
int main()
{
    struct student s1;
    printf("enter student info:");
    scanf("%d %s %s %d %f",&s1.Rollno,&s1.Name,&s1.Department,&s1.yearofjoining,&s1.score);



    struct student s2;
    printf("enter student info:");
    scanf("%d %s %s %d %f",&s2.Rollno,&s2.Name,&s2.Department,&s2.yearofjoining,&s1.score);


    struct student s3;
    printf("enter student info:");
    scanf("%d %s %s %d %f",&s3.Rollno,&s3.Name,&s3.Department,&s3.yearofjoining,&s3.score);



    struct student s4;
    printf("enter student info:");
    scanf("%d %s %s %d %f",&s4.Rollno,&s4.Name,&s4.Department,&s4.yearofjoining,&s4.score);



    struct student s5;
    printf("enter student info:");
    scanf("%d %s %s %d %f",&s5.Rollno,&s5.Name,&s5.Department,&s5.yearofjoining,&s5.score);


    printf("%d %s %s %d %.2f\n",s1.Rollno,s1.Name,s1.Department,s1.yearofjoining,s1.score);
    printf("%d %s %s %d %.2f\n",s2.Rollno,s2.Name,s2.Department,s2.yearofjoining,s2.score);
    printf("%d %s %s %d %.2f\n",s3.Rollno,s3.Name,s3.Department,s3.yearofjoining,s3.score);
    printf("%d %s %s %d %.2f\n",s4.Rollno,s4.Name,s4.Department,s4.yearofjoining,s4.score);
    printf("%d %s %s %d %.2f\n",s5.Rollno,s5.Name,s5.Department,s5.yearofjoining,s5.score);

    return 0;
}

