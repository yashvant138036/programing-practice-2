#include <stdio.h>

struct student
{
    int id;
    float marks;
};

union data
{
    int id;
    float marks;
};

int main()
{
    struct student s;
    union data u;

    printf("Size of structure = %lu\n", sizeof(s));
    printf("Size of union = %lu\n", sizeof(u));

    return 0;
}
