#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        this->data = d;
        this->next = NULL;
    }
};

class Queue{
    public:
    node* front;
    node* rear;

    Queue(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int d){
        node* temp = new node(d);
        if(rear==NULL){
            front = rear = temp;
            return;
        }
        else{
            rear->next = temp;
            rear = temp;
        }

    }

    void dequeue(){
        if(front==NULL){
            return;
        }
        else{
            node* temp = front;
            front = front->next; 
            delete temp;
        }
    }

};

int main(){

    Queue q;
    q.enqueue(3);
    q.enqueue(17);  
    q.enqueue(12);
    q.enqueue(30);

    cout<<"First: "<<q.front ->data<<endl;
    cout<<"Last: "<<q.rear->data<<endl;

    q.dequeue();
    cout<<"First: "<<q.front ->data<<endl;
    cout<<"Last: "<<q.rear->data;
    

    return 0;
}