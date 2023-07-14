#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
void insertatend(struct node** head, int data){
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode ->next = NULL;
    struct node *temp = *head;
    if (*head == NULL) {
        newnode->prev = NULL;
        *head = newnode;
        return;
    }
    while(temp->next!=NULL){
        temp = temp->next;
        
    }
    temp->next = newnode;
    newnode->prev = temp;
}
int main(){
    struct node* head = malloc(sizeof(struct node));
    head->data = 40;
    head->prev = NULL;
    head->next = NULL;
    insertatend(&head, 30);
    insertatend(&head, 20);
    insertatend(&head, 10);
    printf("Insertion at beginning");
    struct node* temp = malloc(sizeof(struct node));
    temp = head;
    while(temp!=NULL){
        printf("\n%d", temp->data);
        temp = temp->next;
    }
    
}
