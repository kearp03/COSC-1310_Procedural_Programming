#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
    int data;
    struct node *next;
};

int main(void){
    /* Initialize nodes */
    struct node *head = NULL; // list is empty
    struct node *new_node;
    struct node *current_node;

    /* Allocate memory */
    new_node = malloc(sizeof(struct node));

    /* Assign data values */
    new_node->data = 1;

    /* Insert node at the start of list */
    new_node->next = head;
    head = new_node;

    /* create and add another node */
    new_node = malloc(sizeof(struct node));
    new_node->data = 2;
    new_node->next = head;
    head = new_node;

    /* create and add a third node */
    new_node = malloc(sizeof(struct node));
    new_node->data = 3;
    new_node->next = head;
    head = new_node;

    /* while loop to print the data elements of the list */
    current_node = head;

    while (current_node) {
        printf ("%d\n", current_node->data);
        current_node = current_node->next;
    }

    /* delete the last node of the list */
    current_node = head;
    struct node *previous_node = NULL;

    while(true){
        if(current_node->next == NULL){
            //last element
            free(current_node);
            previous_node->next = NULL;
            break;
        }
        else {
            //not the last element
            previous_node = current_node;
            current_node = current_node->next;
        }
    }


    /* while loop to print the data elements of the list */
    current_node = head;

    while (current_node) {
        printf ("%d\n", current_node->data);
        current_node = current_node->next;
    }
    return 0;
}
