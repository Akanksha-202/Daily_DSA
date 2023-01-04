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

void addAtIndex(Node* &head, int d,int pos){

    Node* element = new Node(d);
    Node * temp = head;
    int cnt = 1;
    while(cnt<pos){    //traversing LL upto the given position
        temp = temp->next;
        cnt++;
    }
    //(temp is now at pos-1)

    element->next =temp->next;
    temp->next = element;
}

void removeLast(Node* &head, Node* &tail,int n){

    Node* temp = head;
    int cnt = 1;
    while(cnt<(n-1)){
        temp=temp->next;
        cnt++;
    }
    //temp is at size-1 index

    tail = temp;
    tail->next = NULL;
    temp = temp->next;
    free(temp);
}

void reverseLL(Node* &head, Node* &tail){

    Node* prev = NULL;
    Node* curr = head;

    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    swap(head,tail);

}

int nodeFromEnd(Node* head, Node* tail, int k){

    Node* s = head;
    Node* f = head;
    for(int i = 0 ; i < k ; i++){
        f = f->next;
    }
    while(f!=tail){
        s = s->next;
        f= f->next;
    }

    return s->data;

}

int middleNode(Node* &head){
    Node* s = head;
    Node* f = head;
    while(f->next != NULL && f->next->next != NULL){
        s = s->next;
        f = f->next->next;
    }
    return s->data;
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

    addAtIndex(head,35,2);
    printLL(head, 6);

    removeLast(head,tail,6);
    printLL(head,5);
    cout<<"Tail: "<<tail->data<<endl;;

    reverseLL(head,tail);
    printLL(head, 5);
    cout<<"Head: "<<head->data<<" Tail: "<<tail->data<<endl;

    cout<<"2nd element from end is: "<<nodeFromEnd(head,tail,2)<<endl; //for last elememt k =0

    cout<<"Middle Node of the gieven LL is: "<<middleNode(head)<<endl; //Odd Nodes

    addAtIndex(head,23,4);
    printLL(head,6);
    cout<<"Middle Node of the gieven LL is: "<<middleNode(head)<<endl; //Even Nodes
    
    return 0;
}