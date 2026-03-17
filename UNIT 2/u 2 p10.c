//--------------------------10. Write a program to demonstrate nested structure.---------------------//
#include <stdio.h>

struct Address
{
    char city[20];
    int pincode;
};

struct Student
{
    int id;
    char name[20];
    struct Address add;
};

int main()
{
    struct Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter City: ");
    scanf("%s", s.add.city);

    printf("Enter Pincode: ");
    scanf("%d", &s.add.pincode);

    printf("\nStudent Details\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("City = %s\n", s.add.city);
    printf("Pincode = %d\n", s.add.pincode);

    return 0;
}
