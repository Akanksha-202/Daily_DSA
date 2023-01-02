#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

class Stack {
    public:
    Node* top;

    Stack(){
        top = NULL;
    }

    void push(int data){
        Node* element = new Node(data);
        element->next = top;
        top = element;
    }

    void pop(){
        Node* temp = top;
        if(top==NULL){
            cout<<"Underflow"<<endl;
        }
        else{
            top = top->next;
            free (temp);
        }
    }

    int peek(){
        if(top==NULL){
            return -1;
        }
        else{
            return top->data;
        }
    }
};

// void insertAtHead(Node* &head , int d){
//     if(head==NULL){
//         Node* temp = new Node(d);
//         head = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         temp ->next = head;
//         head = temp;
//     }
// }

// void print(Node* &head){

//     if(head==NULL){
//         cout<<"Linked List is empty"<<endl;
//     }
//     else{
//         Node* temp =head;
//         while(temp!= NULL){
//             cout<<temp -> data<<" ";
//             temp = temp->next;
//         }
//         cout<< endl;
//     }
// }


int main(){
     
    Stack s;

    s.push(12);
    s.push(15);
    s.push(9);
    s.push(26);

    cout<<"Top = "<<s.peek()<<endl;
    s.pop();
    cout<<"Top = "<<s.peek()<<endl;

   
    
    return 0;
}