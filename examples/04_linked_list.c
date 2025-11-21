#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

typedef struct Node Node;

Node *create_node(int value) {
    Node *node = malloc(sizeof(*node));
    if (node == NULL) {
        perror("Unable to allocate node");
        exit(EXIT_FAILURE);
    }
    node->value = value;
    node->next = NULL;
    return node;
}

void append(Node **head, int value) {
    Node *new_node = create_node(value);
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    Node *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
}

void print_list(const Node *head) {
    printf("Linked list values: ");
    for (const Node *current = head; current != NULL; current = current->next) {
        printf("%d ", current->value);
    }
    printf("\n");
}

void free_list(Node *head) {
    while (head != NULL) {
        Node *next = head->next;
        free(head);
        head = next;
    }
}

int main(void) {
    Node *head = NULL;
    int value = 0;

    printf("Enter integers to store in the linked list (Ctrl+D to finish):\n");
    while (scanf("%d", &value) == 1) {
        append(&head, value);
    }

    print_list(head);
    free_list(head);
    return 0;
}
