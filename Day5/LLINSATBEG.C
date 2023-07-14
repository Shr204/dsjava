#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
}
void insertatbeg(struct node** head, int data){
    struct node *newnode = malloc(sizeof(struct node));l
    newnode->data = data;
    newnode->prev = NULL;
    newnode ->next = NULL;
    
}
int main(){
    struct node* head = malloc(sizeof(struct node));
    insertatbeg(&head,10);
    insertatbeg(&head, 20);
    insertatbeg(&head, 30);
    printf("Insertion at beginning");
    struct node* temp = malloc(sizeof(struct node));
    temp = head;
    while(temp!=0){
        printf("%d", temp->data);
        temp = temp->next;
    }
    
}
