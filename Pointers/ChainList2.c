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

int remove_node_by_value(Node **head_pointer, int target_value) {
    if (head_pointer == NULL || *head_pointer == NULL) {
        return 0;
    }

    Node *current_node = *head_pointer;
    Node *previous_node = NULL;

    while (current_node != NULL && current_node->data != target_value) {
        previous_node = current_node;
        current_node = current_node->next;
    }

    if (current_node == NULL) {
        return 0;
    }

    if (previous_node == NULL) {
        *head_pointer = current_node->next;
    } else {
        previous_node->next = current_node->next;
    }

    free(current_node);
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

    insert_at_beginning(&head, 10);
    insert_at_beginning(&head, 20);
    insert_at_beginning(&head, 30);
    insert_at_beginning(&head, 40);

    printf("Initial list:");
    print_list(head);

    int target_value = 20;
    printf("\nRemoving value %d...\n", target_value);
    if (remove_node_by_value(&head, target_value)) {
        printf("Value %d successfully removed.\n", target_value);
    } else {
        printf("Value %d not found in the list.\n", target_value);
    }

    printf("List after removal:");
    print_list(head);

    free_list(&head);

    return 0;
}