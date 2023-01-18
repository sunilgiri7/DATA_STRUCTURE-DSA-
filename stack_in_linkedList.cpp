#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int isert(struct node* ptr){
    while (ptr !=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
// struct node * insertAtFirst(struct node *head, int data){
//     struct node * ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->next=head;
//     ptr->data=data;
//     return ptr;
// }
int main(){
    struct node 

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 30;
    third->next = NULL;
}