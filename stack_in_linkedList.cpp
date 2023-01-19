#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int insert(struct node* ptr){
    while (ptr !=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
struct node *pop(struct node * head, int val){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next=head;
}
// struct node * insertAtFirst(struct node *head, int data){
//     struct node * ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->next=head;
//     ptr->data=data;
//     return ptr;
// }
int main(){
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 30;
    third->next = NULL;
    
    cout<<"Before Insertion"<<endl;
    insert(head);
    head = pop(head, 50);
    cout<<"After Insertion"<<endl;
    insert(head);
}