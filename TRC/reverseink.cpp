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

Node* th = NULL;
Node* tt = NULL;

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

int sizeL(Node* head){
    Node* temp = head;
    int size = 1;
    while(temp->next!=NULL){
        temp = temp->next;
        size++;
    }

    return size;
}

void addFirstRev(Node* node){
    if(th==NULL){
        th = node;
        tt = node;
    }
    else{
        node->next = th;
        th = node;
    }
}

void kgroup(Node* head,int k){

    int size;
    size = sizeL(head);
    int n = size;
    Node* c = head;
    Node* f = head->next;

    Node* oh = NULL;
    Node* ot = NULL;

    while(size > k){
        int cnt = k;
        while(cnt){
            addFirstRev(c);
            c = f;
            f = f->next;
            cnt--;
            size--;
        }

        if(oh==NULL){
            oh = th;
            ot = tt;
        }
        else{
            ot->next = th;
            ot = tt;
        }

        th = NULL;
        tt = NULL;
    
    }

    ot->next = c;

    printLL(oh,n);    
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

    kgroup(head,3);

    

    return 0;
}