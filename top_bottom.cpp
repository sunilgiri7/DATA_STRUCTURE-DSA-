#include<iostream>
using namespace std;
struct stack{
    int size;
    int top;
    int * arr;
};
int isEmpty(struct stack * ptr){
    if (ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack * ptr){
    if (ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int push(struct stack *ptr, int val){
    if(isFull(ptr)){
        cout<<"OverFlow"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int stackTop(struct stack *ptr){
    return ptr->arr[ptr->top];
}
int stackBottom(struct stack * ptr){
    return ptr->arr[0];
}
int main(){
    struct stack *sk = (struct stack*)malloc(sizeof(struct stack));
    sk->size = 10;
    sk->top = -1;
    sk->arr = (int *)malloc(sk->size * sizeof(int));
    
    cout<<"Before Push, isEmpty: "<<isEmpty(sk)<<endl;
    push(sk,10);
    push(sk,12);
    push(sk,14);
    push(sk,1);
    push(sk,60);
    push(sk,30);
    push(sk,450);
    push(sk,70);
    cout<<"After Push, isEmpty: "<<isEmpty(sk)<<endl;
    cout<<"Top of Stack is: "<<stackTop(sk)<<endl;
    cout<<"Bottom of Stack is: "<<stackBottom(sk);
}