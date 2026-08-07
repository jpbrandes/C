#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *create_node(int value) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL) {
        return NULL;
    }
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

int insert_at_beginning(Node **head_pointer, int value) {
    Node *new_node = create_node(value);
    if (new_node == NULL) {
        return 0;
    }

    new_node->next = *head_pointer;
    *head_pointer = new_node;
    return 1;
}

void print_list(const Node *head_pointer) {
    printf("\n--- Linked List Elements ---\n");
    const Node *current_node = head_pointer;

    while (current_node != NULL) {
        printf("%d -> ", current_node->data);
        current_node = current_node->next;
    }
    printf("NULL\n");
    printf("----------------------------\n");
}

void free_list(Node **head_pointer) {
    if (head_pointer == NULL) {
        return;
    }

    Node *current_node = *head_pointer;
    Node *next_node = NULL;

    while (current_node != NULL) {
        next_node = current_node->next;
        free(current_node);
        current_node = next_node;
    }

    *head_pointer = NULL;
}

int main(void) {
    Node *head = NULL;
    int number_of_elements;

    printf("Enter the number of elements to insert: ");
    if (scanf("%d", &number_of_elements) != 1 || number_of_elements <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int index = 0; index < number_of_elements; index++) {
        int input_value;
        printf("Enter value %d: ", index + 1);
        if (scanf("%d", &input_value) != 1) {
            printf("Invalid value.\n");
            free_list(&head);
            return 1;
        }

        if (!insert_at_beginning(&head, input_value)) {
            printf("Memory allocation failed during insertion.\n");
            free_list(&head);
            return 1;
        }
    }

    print_list(head);

    free_list(&head);

    return 0;
}