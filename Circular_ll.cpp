#include<iostream>
using namespace std;
int data;
struct node{
    int data;
    struct node * next;
};
struct node transverse(struct node * ptr){
    while (ptr != NULL)
    {
    cout<<ptr->data<<endl;
    ptr = ptr->next;
    }
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node *  fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = NULL;
    transverse(head);
}