<<<<<<< HEAD
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

Node* reverse(Node* head, int k){
    
    //base case
    if(head==NULL){
        return NULL;
    }

    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;


    while(curr!=NULL && count < k ){
        next = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next!=NULL){
        head->next = reverse(next , k);
    }
    return prev;
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
    cout<<"Head: "<<head->data<<endl;

    //50 40 30 20 10
    cout<<"Head is: "<<reverse(head,3)->data; //gives head as 30

    return 0;
=======
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

Node* reverse(Node* head, int k){
    
    //base case
    if(head==NULL){
        return NULL;
    }

    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;


    while(curr!=NULL && count < k ){
        next = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next!=NULL){
        head->next = reverse(next , k);
    }
    return prev;
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
    cout<<"Head: "<<head->data<<endl;

    //50 40 30 20 10
    cout<<"Head is: "<<reverse(head,3)->data; //gives head as 30

    return 0;
>>>>>>> d5ccae7a0430d2260477baa94598e380c70f27bc
}