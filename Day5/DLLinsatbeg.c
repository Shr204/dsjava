#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
void insertatbeg(struct node** head, int data){
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode ->next = NULL;
    newnode-> next = *head;
    (*head)->prev = newnode;
    
    (*head) = newnode;
}
int main(){
    struct node* head = malloc(sizeof(struct node));
    head->data = 40;
    head->prev = NULL;
    head->next = NULL;
    insertatbeg(&head, 30);
    insertatbeg(&head, 20);
    insertatbeg(&head, 10);
    printf("Insertion at beginning");
    struct node* temp = malloc(sizeof(struct node));
    temp = head;
    while(temp!=NULL){
        printf("\n%d", temp->data);
        temp = temp->next;
    }
    
}
