//
// Created by LTGW GEORGE on 1/12/2024.
//
//Inserting node at the beginning of a linked list
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* link;
};
struct Node* head; // global variable, can be accessed anywhere

void Insert(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = head;
    head = temp;
}

void Print() {
    struct Node* temp = head;
    printf("List is:");
    while (temp != NULL) {
        printf(" %d", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    head = NULL; // empty list
    printf("How many numbers: ");
    int n, i, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter the number: \n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }

    return 0;
}
