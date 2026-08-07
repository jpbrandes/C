#include <stdio.h>
#include <stdlib.h>

#define MAXIMUM_NAME_LENGTH 100

typedef struct {
    char name[MAXIMUM_NAME_LENGTH];
    float grade;
} Student;

Student *allocate_student(void) {
    Student *student_pointer = (Student *)malloc(sizeof(Student));
    return student_pointer;
}

int read_student_data(Student *student_pointer) {
    printf("Enter student's name: ");
    if (fgets(student_pointer->name, MAXIMUM_NAME_LENGTH, stdin) != NULL) {
        char *char_pointer = student_pointer->name;
        while (*char_pointer != '\0') {
            if (*char_pointer == '\n') {
                *char_pointer = '\0';
                break;
            }
            char_pointer++;
        }
    } else {
        return 0;
    }

    printf("Enter student's grade: ");
    if (scanf("%f", &student_pointer->grade) != 1) {
        return 0;
    }

    return 1;
}

void print_student_data(const Student *student_pointer) {
    printf("\n--- Student Record ---\n");
    printf("Name : %s\n", student_pointer->name);
    printf("Grade: %.2f\n", student_pointer->grade);
    printf("----------------------\n");
}

void deallocate_student(Student **student_pointer) {
    if (student_pointer != NULL && *student_pointer != NULL) {
        free(*student_pointer);
        *student_pointer = NULL;
    }
}

int main(void) {
    Student *student_record = allocate_student();

    if (student_record == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    if (!read_student_data(student_record)) {
        printf("Invalid input.\n");
        deallocate_student(&student_record);
        return 1;
    }

    print_student_data(student_record);

    deallocate_student(&student_record);

    return 0;
}