#include <stdio.h>
#include <string.h>
#define GRADES 10
typedef struct {
    char  ra[9];
    int   grade_1;
    int   grade_2;
    int   exam_grade;
    float average;
    char  status[3];
} Student;
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
void calculate(Student *a) {
    int sum = a->grade_1 + a->grade_2;
    if (sum >= 140) {
        a->exam_grade = -1;
        a->average = sum / 2.0f;
    } else {
        a->exam_grade = read_grade("Exam Grade: ");
        a->average = (sum + a->exam_grade) / 3.0f;
    }
    strcpy(a->status, a->average >= 70.0f ? "AP" : "RP");
}
void register_student(Student class[], int *qty) {
    if (*qty >= GRADES) { printf("Class full!\n"); return; }
    Student *a = &class[*qty];
    printf("RA: ");
    scanf("%8s", a->ra);
    a->grade_1 = read_grade("Grade 1: ");
    a->grade_2 = read_grade("Grade 2: ");
    calculate(a);
    printf("Average: %.1f | %s\n", a->average, a->status);
    (*qty)++;
}
void list(Student class[], int qty) {
    if (qty == 0) { printf("No students registered.\n"); return; }
    printf("\n%-10s %4s %4s %4s %7s  %s\n", "RA", "G1", "G2", "EG", "Average", "Sit.");
    for (int i = 0; i < qty; i++) {
        Student *a = &class[i];
        char eg[5];
        if (a->exam_grade == -1) strcpy(eg, " -- ");
        else sprintf(eg, "%4d", a->exam_grade);
        printf("%-10s %4d %4d %s %7.1f  %s\n",
            a->ra, a->grade_1, a->grade_2, eg, a->average, a->status);
    }
}
int main(void) {
    Student class[GRADES];
    int qty = 0, op;
    do {
        printf("\n1-Register  2-List  0-Exit\nOption: ");
        scanf("%d", &op);
        if (op == 1) register_student(class, &qty);
        if (op == 2) list(class, qty);
    } while (op != 0);
    return 0;
}
