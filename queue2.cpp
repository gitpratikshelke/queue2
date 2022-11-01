#include<stdio.h>
#include<iostream>
//#define SIZE 100;
using namespace std;
//array and pointer intilization
int queue[100];
int n=100,front=-1,rear=-1;


void isEmpty(){
    if(rear==-1&& front==-1){
        cout<<"q is empty:";
    }
    else{
        cout<<"q is not empty:";
    }
}
void isFull(){
    if(rear==n-1){
        cout<<"q is full:";
    }
    else{
        cout<<" q is empty:";
    }
}
void Peek(){
    if(rear==-1&&front==-1){
        cout<<"there is no element to display:"<<endl;
    }
    else{
        cout<<"the element at the front end is"<<endl;
    }
}
void Enqueue(){
    int element;
    if(rear==n-1){
        cout<<"overflow error"<<endl;
    }
    else
    {
        if(front==-1){
            front=0;
        }
        cout<<"enter the element to insertion";
        cin>>element;
        rear++;
        queue[rear]=element;
    }
}
void Dequeue(){
    if(rear==-1&& front==-1)
    {
        cout<<"underflow error"<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        cout<<"the deleted element from the dequeue is"<<queue[front];
        front++;
    }
}
void Display(){
    if(front==-1){
        cout<<"q is empty";
    }
    else{
        cout<<"queue element are";
        for(int i=front; i<=rear;i++)
        cout<<queue[i]<<" ";
        cout<<endl;
    }

}
int main(){
    int choice;
    cout<<"1)insert element into the queue"<<endl;
    cout<<"2)delete element from the queue"<<endl;
    cout<<"3)display all the element from the queue"<<endl;
    cout<<"4)display element at the ront node without deletion"<<endl;
    cout<<"5)display if the queue is full or not"<<endl;
    cout<<"6)display if the queue is empty or not"<<endl;
    cout<<"7)quit"<<endl;
    do{
        cout<<"enter your choice "<<endl;
        cin>>choice;
        switch(choice){
            case 1:Enqueue();
            break;
            case 2:Dequeue();
            break;
            case 3:Display();
            break;
            case 4:Peek();
            break;
            case 5:isFull();
            break;
            case 6:isEmpty();
            break;
            case 7:exit(1);
            default:cout<<"invalid chopice"<<endl;
        }
    }
    while(choice!=7);
    return 0;
}