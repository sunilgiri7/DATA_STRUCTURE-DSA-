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
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int push(struct stack * ptr, int val){
    if(isFull(ptr)){
        cout<<"Overflow"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int main(){
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    st->size=5;
    st->top=-1;
    st->arr = (int *)malloc(st->size * sizeof(int));

    push(st, 10);
    push(st, 10);
    push(st, 10);
    push(st, 10);
    push(st, 10);
    push(st, 10);

    if(isEmpty(st)){
        cout<<"Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
}