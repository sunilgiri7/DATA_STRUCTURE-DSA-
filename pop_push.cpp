#include<iostream>
using namespace std;
struct stack{
    int size;
    int top;
    int *arr;
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
int isPush(struct stack * ptr, int val){
    if(isFull(ptr)){
        cout<<"Stack OverFlow, "<<val<< " is not pushed"<<endl;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int isPOP(struct stack * ptr){
    if(isEmpty(ptr)){
        cout<<"Stack UnderFlow"<<endl;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return val;
    }
}
int main(){
    struct stack *s= (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    cout<<"Before Pushing, Empty: "<<isEmpty(s)<<endl;
    cout<<"Before Pushing, Full: "<<isFull(s)<<endl;
    isPush(s,15);
    isPush(s,95);
    isPush(s,53);
    isPush(s,55);
    isPush(s,59);
    isPush(s,85);
    isPush(s,55);
    isPush(s,55);
    isPush(s,25);
    isPush(s,45);
    isPush(s,555);
    cout<<"after Pushing, Empty: "<<isEmpty(s)<<endl;
    cout<<"after Pushing, Full: "<<isFull(s)<<endl;

    cout<<isPOP(s)<<" is POPED from stack "<<endl;
}