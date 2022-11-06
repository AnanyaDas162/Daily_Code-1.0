
#include <stdio.h>
#include <stdlib.h>


typedef struct node {
    int data;
    struct node *next;
}node;

node *head = NULL, *tail = NULL;

node* create_node (){
   node *newnode =  (node *)malloc (sizeof(node));
   newnode -> next = NULL;
   return newnode;
}

void insert_end (){
    node *ptr = create_node ();
    printf("\n Enter the value :: ");
    int val;
    scanf ("%d", &val);
    if (head == NULL){
        head = ptr;
        tail = ptr;
        head -> data = val;
    }
    else{
        tail -> next = ptr;
        tail = ptr;
        tail -> data = val;
    }
}

void insert_beginning (){
    node *ptr = create_node();
    printf("\n Enter the value :: ");
    int val;
    scanf ("%d", &val);
    if (head == NULL){
        head = ptr;
        tail = ptr;
    }
    else{
         ptr -> next = head;
         head = ptr;
    }
    head -> data = val;
}

void display (){
    node* temp = head;
    while (temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main()
{
    int choice = 1;
    while (1){
        printf ("1 :: insert end 2 :: insert beginning ");
        scanf ("%d", &choice);
        if (choice == 1){
            insert_end();
        }
        else if (choice == 2){
            insert_beginning();
        }
        else{
            break;
        }
        display();
    }
    return 0;
}
