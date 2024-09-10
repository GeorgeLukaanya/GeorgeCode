#include <stdio.h>
#include <stdlib.h>
//adding node at end
struct node
{
    int data;
    struct node *link;
};

struct node* add_at_end(struct node *ptr, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;

    ptr -> link = temp;
    return temp;
}
int main(){
    struct  node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 67);

    //to be able to traverse the list again
    ptr = head;

    while(ptr != NULL){
        printf("%d", ptr->data);
        ptr -> link;
    }
    return 0;
}
