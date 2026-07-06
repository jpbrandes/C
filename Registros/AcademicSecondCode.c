#include <stdio.h>
#include <string.h>
#define GRADES 10
char  ra[GRADES][9];
int   grade_1[GRADES];
int   grade_2[GRADES];
int   exam_grade[GRADES];
float average[GRADES];
char  status[GRADES][3];
int valid_ra(const char *r) {
    int len = strlen(r);
    if (len < 1 || len > 8) return 0;
    for (int i = 0; i < len; i++)
        if (r[i] < '0' || r[i] > '9') return 0;
    return 1;
}
int duplicate_ra(int qty, const char *r) {
    for (int i = 0; i < qty; i++)
        if (strcmp(ra[i], r) == 0) return 1;
    return 0;
}
int read_grade(const char *msg) {
    int n;
    do {
        printf("%s", msg);
        scanf("%d", &n);
        if (n < 0 || n > 100)
            printf("  Invalid! Enter a value between 0 and 100.\n");
    } while (n < 0 || n > 100);
    return n;
}
void calculate(int i) {
    int sum = grade_1[i] + grade_2[i];
    if (sum >= 140) {
        exam_grade[i] = -1;
        average[i] = sum / 2.0f;
    } else {
        exam_grade[i] = read_grade("Exam Grade: ");
        average[i] = (sum + exam_grade[i]) / 3.0f;
    }
    strcpy(status[i], average[i] >= 70.0f ? "AP" : "RP");
}
void register_student(int *qty) {
    if (*qty >= GRADES) { printf("Class full!\n"); return; }
    int i = *qty;
    do {
        printf("RA (numbers only, up to 8 digits): ");
        scanf("%8s", ra[i]);
        if (!valid_ra(ra[i]))
            printf("  Invalid RA! Use only numeric digits.\n");
        else if (duplicate_ra(i, ra[i]))
            printf("  RA already registered!\n");
        else
            break;
    } while (1);
    grade_1[i] = read_grade("Grade 1: ");
    grade_2[i] = read_grade("Grade 2: ");
    calculate(i);
    printf("Average: %.1f | %s\n", average[i], status[i]);
    (*qty)++;
}
void list(int qty) {
    if (qty == 0) { printf("No students registered.\n"); return; }
    printf("\n%-10s %4s %4s %4s %7s  %s\n", "RA", "G1", "G2", "EG", "Average", "Sit.");
    for (int i = 0; i < qty; i++) {
        char eg[5];
        if (exam_grade[i] == -1) strcpy(eg, " -- ");
        else sprintf(eg, "%4d", exam_grade[i]);
        printf("%-10s %4d %4d %s %7.1f  %s\n",
            ra[i], grade_1[i], grade_2[i], eg, average[i], status[i]);
    }
}
int main(void) {
    int qty = 0, op;
    do {
        printf("\n1-Register  2-List  0-Exit\nOption: ");
        scanf("%d", &op);
        if (op == 1) register_student(&qty);
        if (op == 2) list(qty);
    } while (op != 0);
    return 0;
}
