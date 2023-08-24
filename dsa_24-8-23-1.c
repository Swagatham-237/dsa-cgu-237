#include <stdio.h>
#define MAX_SIZE 10

// Define a structure for the stack
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack is full. Cannot push %d.\n", value);
    } else {
        stack->items[++stack->top] = value;
        printf("Pushed %d onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
    } else {
        printf("Popped %d from the stack.\n", stack->items[stack->top--]);
    }
}

// Function to peek at the top element of the stack
void peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Nothing to peek.\n");
    } else {
        printf("Top element of the stack: %d.\n", stack->items[stack->top]);
    }
}

// Function to display the contents of the stack
void display(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack contents:\n");
        for (int i = stack->top; i >= 0; i--) {
            printf("%d\n", stack->items[i]);
        }
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 6);
    push(&stack, 7);
    push(&stack, 8);
    push(&stack, 5);
    push(&stack, 3);

    printf("Stack after pushes:\n");
    display(&stack);

    pop(&stack);
    push(&stack, 10);
    pop(&stack);

    printf("Stack after pops:\n");
    display(&stack);

    peek(&stack);

    return 0;
}
