#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;};
struct node *createnode(int data){
  struct node *newnode=(struct node*)malloc(sizeof(struct node));//malloc return in void type means return nothing, thus we use the struct node is the type casting ,that convert the return void data typing into struct datatype  
  newnode->data=data;
  newnode->next=NULL;
  return newnode;}
void insertatbegin(struct node **head,int data){
  struct node *newnode=createnode(data);
  newnode->next = *head;
  *head=newnode;}
void printlist(struct node *head){
  struct node *temp= head;
  while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;}
  printf("NULL\n");}
int main()
{  struct node *head=NULL;\\
  insertatbegin(&head,40);
  insertatbegin(&head,30);
  insertatbegin(&head,20);
  insertatbegin(&head,10);
  printf("linked list:");
  printlist(head);
  return 0;}
