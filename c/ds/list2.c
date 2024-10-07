#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int number;
    struct node *next;
}node;
//binary search can't work here
int main(int argc, char *argv[]) {
    node *list = NULL;
    for (int i = 1; i < argc; i++) {
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        if (n == NULL) {
            //free memory thus far
            return 1;
        }
        n->number = number;//putting a value in the memory chunk
        n->next = list;
        list = n;//pointing list to n
    }
    //Print whole list
    node *ptr=list;
    while(ptr != NULL) {
        printf("%i\n", ptr->number);
        ptr=ptr->next;
    }
    // Free allocated memory
while (list != NULL) {
    node *temp = list;
    list = list->next;
    free(temp);
}
}