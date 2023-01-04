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

void printLL(Node* &head, int n){

    Node* temp = head;
    for(int i = 0 ; i < n; i++){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void addFirst(Node* &head, int d){
    Node* first = new Node(d);
    first->next = head;
    head = first;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    printLL(head, 1); //only 10 is present in LL
    cout<<"Head: "<<head->data<<endl;
    addFirst(head,20);
    addFirst(head,30);
    printLL(head,3); //20 is added to first and then 30 is added to first => 30 20 10
    cout<<"Head: "<<head->data<<endl;
    addFirst(head,40);
    addFirst(head,50);
    printLL(head,5); //40 is added to first and then 50 is added to first => 50 40 30 20 10
    cout<<"Head: "<<head->data<<endl; //head of the data keeps on changing everytime element is added to first

    return 0;
}