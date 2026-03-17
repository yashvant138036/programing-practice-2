//----------------------4. Sort above data by score in descending order----------------------//
#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int score;
};

int main() {
    struct student s[5], temp;
    int i, j;


    printf("Enter name and score for 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        scanf("%s %d", s[i].name, &s[i].score);
    }


    for(i = 0; i < 5 - 1; i++) {
        for(j = i + 1; j < 5; j++) {
            if(s[i].score < s[j].score) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted data (by score descending):\n");
    for(i = 0; i < 5; i++) {
        printf("%s - %d\n", s[i].name, s[i].score);
    }

    return 0;
}
