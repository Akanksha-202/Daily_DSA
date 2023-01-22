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

int len(Node* head){
    Node* temp =head;
    int cnt = 0;
    while(temp->next !=NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
    //size of ll is cnt+1
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

void addLast(Node* &head, Node* &tail,int d){

    Node* node = new Node(d);

    if(tail==NULL){
        head = node;
        tail = node;
    }
    else{
        tail->next = node;
        node->prev = tail;
        tail = node;
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

void removeLast(Node* &head, Node* &tail){
    if(head==NULL){
        cout<<"Empty Doubly Linked List";
    }
    if(head->next == NULL){
        head = tail = NULL;
    }
    else{
        Node* temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        free(temp);
    }
}

int getFirst(Node* &head, Node* &tail){
    if(head==NULL){
        cout<<"Empty Linked List";
        return -1;
    }
    return head->data;
}

int getLast(Node* &head, Node* &tail){
    if(tail==NULL){
        cout<<"Empty Linked List";
        return -1;
    }
    return tail->data;
}

int getAtIndex(Node* &head, Node* &tail,int index,int len){
    if(index < 0 || index > len || head==NULL){
        cout<<"Invalid!";
        return -1;
    }
    int cnt = 0;
    Node* temp = head;
    while(cnt < index){
        cnt++;
        temp = temp->next;
    }

    return temp->data;
}

void addAtIndex(Node* &head, Node* &tail,int index,int d,int len){

    if(index < 0 || index > len){
        cout<<"Invalid!";
    }

    if(index == 0){
        addfirst(head,tail,d);
    }

    if(index == len+1){
        addLast(head,tail,d);
    }

    else{
        int cnt = 0;
        Node* temp = head;
        while(cnt < index){
            cnt++;
            temp = temp->next;
        }

        Node* node = new Node(d);

        Node* back = temp->prev;
        back->next = node;
        node->next = temp;
        node->prev = back;
        temp->prev = node;
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

    removeLast(head,tail);
    printLL(head);

    cout<<"First element is: "<<getFirst(head,tail)<<endl;
    cout<<"Last element is: "<<getLast(head,tail)<<endl;

    int size = len(head);

    cout<<"Element at 0th index is: "<<getAtIndex(head,tail,0,size)<<endl;
    addfirst(head,tail,90);
    addfirst(head,tail,56);
    addfirst(head,tail,87);

    size = len(head);

    printLL(head);
    cout<<"Element at -1 index is: "<<getAtIndex(head,tail,-1,size)<<endl;
    cout<<"Element at 5 index is: "<<getAtIndex(head,tail,5,size)<<endl;
    cout<<"Element at 3 index is: "<<getAtIndex(head,tail,3,size)<<endl;
    cout<<"Element at 2 index is: "<<getAtIndex(head,tail,2,size)<<endl;


    addAtIndex(head,tail,4,65,size);
    printLL(head);



    return 0;
}