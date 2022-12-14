#include<iostream>
using namespace std;
int data;
struct node{
    int data;
    struct node * next;
    
};
void linkedListTraversal(struct node *ptr){
    while (ptr != NULL){
    
    cout<<ptr->data<<endl;
    ptr = ptr->next;
    }
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    // memory allocation of linked list is in heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    // first node
    head->data=10;
    head->next=second;
    
    // second node
    second->data=20;
    second->next=third;

    //third node
    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    linkedListTraversal(head);

    return 0;
    
}

