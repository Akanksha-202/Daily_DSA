#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;

void printLL(Node* &head){
    if(head == NULL){
        cout<<"Empty Doubly linked List";
    }

    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void addfirst(Node* &head, Node* &tail,int d){

    Node* node = new Node(d);

    if(head==NULL){
        head = node;
        tail = node;
    }
    else{
        node->next = head;
        head->prev = node;
        head = node;
    }
    
}

void removeFirst(Node* &head, Node* &tail){

    if(head==NULL){
        cout<<"Empty Doubly Linked List";
    }
    if(head->next == NULL){
        head = tail = NULL;
    }
    else{
        Node* temp = head;
        head = temp->next;
        head->prev = NULL;
        free(temp);
    }
}

int main(){

    addfirst(head,tail,20);
    printLL(head);
    addfirst(head,tail,30);
    addfirst(head,tail,40);
    addfirst(head,tail,50);
    printLL(head);

    cout<<"Head is: "<<head->data<<endl;
    cout<<"Tail is: "<<tail->data<<endl;

    cout<<"Second value is: "<<head->next->data<<endl;
    cout<<"Second last value is: "<<tail->prev->data<<endl;

    removeFirst(head,tail);
    printLL(head);

    cout<<"Head is: "<<head->data<<endl;
    cout<<"Tail is: "<<tail->data<<endl;

    cout<<"Second value is: "<<head->next->data<<endl;
    cout<<"Second last value is: "<<tail->prev->data<<endl;


    return 0;
}