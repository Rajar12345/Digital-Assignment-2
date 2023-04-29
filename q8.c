#include <stdio.h>

int main() {
    int n;
    printf("How many students ; ");
    scanf(" %d", &n);
    int org_marks[n];
    int birth_mont[n];
    int revised_marks[n];
    int sum_org_marks = 0;
    int sum_revised_marks = 0;
    float class_avg_org, class_avg_revised, increase_in_avg;

    printf("Enter the original marks and birth month of 25 students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d %d", &org_marks[i], &birth_mont[i]);
    }

    for (int i = 0; i < n; i++) {
        revised_marks[i] = org_marks[i] + birth_mont[i];
    }

    for (int i = 0; i < n; i++) {
        sum_org_marks += org_marks[i];
        sum_revised_marks += revised_marks[i];
    }

    class_avg_org = (float)sum_org_marks / n;
    class_avg_revised = (float)sum_revised_marks / n;

    increase_in_avg = class_avg_revised - class_avg_org;
    if (increase_in_avg >= 5.0) {
        printf("Can implement - Significant increase in class average\n");
    } else {
        printf("Need not implement - No significant increase in class average\n");
    }

    return 0;
}
