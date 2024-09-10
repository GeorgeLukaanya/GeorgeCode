#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

int main(){
    //only when empty
    /*
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));//this is typecasting
    **/
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;
//mehtod 1
    struct node *current2 = malloc(sizeof(struct node));
    current2 -> data = 3;
    current2 -> link = NULL;
    current -> link = current2;

    printf("%d", head -> data);
    return 0;
}