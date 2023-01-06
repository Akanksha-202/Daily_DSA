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

Node* findMid(Node* head){

    Node* s = head;
    Node* f = head;
    while((f->next !=NULL) && (f->next->next != NULL)){
        s = s->next;
        f = f->next->next;
    }
    return s;
}

Node* merge(Node* l1, Node* l2){

    if(!l1){
        return l2;
    }
    if(!l2){
        return l1;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;


    while(l1 && l2){
        if(l1->data < l2->data){
            temp->next = l1;
            temp = l1;
            l1 = l1->next;
        }
        else{
            temp -> next = l2;
            temp = l2;
            l2 = l2->next;
        }
    }

    while(l1){
        temp->next = l1;
        temp = l1;
        l1 = l1->next;
    }
    while(l2){
        temp->next = l2;
        temp = l2;
        l2 = l2->next;
    }
    ans = ans -> next;

    return ans;
}

Node* mergeSort(Node* head){
     
    //base case
    if(head == NULL || head->next==NULL){
        return head;
    }
    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    left  = mergeSort(left);
    right = mergeSort(right);

    Node* result = merge(left, right);

    return result;
}

int main(){

    Node* node1 = new Node(57);
    Node* head = node1;
    Node* tail = node1;
    printLL(head, 1); //only 10 is present in LL
    cout<<"Head: "<<head->data<<endl;
    addFirst(head,23);
    addFirst(head,60);
    printLL(head,3); //20 is added to first and then 30 is added to first => 30 20 10
    cout<<"Head: "<<head->data<<endl;
    addFirst(head,47);
    addFirst(head,14);
    printLL(head,5); //40 is added to first and then 50 is added to first => 50 40 30 20 10
    cout<<"Head: "<<head->data<<endl; 

    // mergeSort(head);
    // printLL(head,5);

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

Node* findMid(Node* head){

    Node* s = head;
    Node* f = head;
    while((f->next !=NULL) && (f->next->next != NULL)){
        s = s->next;
        f = f->next->next;
    }
    return s;
}

Node* merge(Node* l1, Node* l2){

    if(!l1){
        return l2;
    }
    if(!l2){
        return l1;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;


    while(l1 && l2){
        if(l1->data < l2->data){
            temp->next = l1;
            temp = l1;
            l1 = l1->next;
        }
        else{
            temp -> next = l2;
            temp = l2;
            l2 = l2->next;
        }
    }

    while(l1){
        temp->next = l1;
        temp = l1;
        l1 = l1->next;
    }
    while(l2){
        temp->next = l2;
        temp = l2;
        l2 = l2->next;
    }
    ans = ans -> next;

    return ans;
}

Node* mergeSort(Node* head){
     
    //base case
    if(head == NULL || head->next==NULL){
        return head;
    }
    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    left  = mergeSort(left);
    right = mergeSort(right);

    Node* result = merge(left, right);

    return result;
}

int main(){

    Node* node1 = new Node(57);
    Node* head = node1;
    Node* tail = node1;
    printLL(head, 1); //only 10 is present in LL
    cout<<"Head: "<<head->data<<endl;
    addFirst(head,23);
    addFirst(head,60);
    printLL(head,3); //20 is added to first and then 30 is added to first => 30 20 10
    cout<<"Head: "<<head->data<<endl;
    addFirst(head,47);
    addFirst(head,14);
    printLL(head,5); //40 is added to first and then 50 is added to first => 50 40 30 20 10
    cout<<"Head: "<<head->data<<endl; 

    mergeSort(head);
    printLL(head,5);

    return 0;
>>>>>>> d5ccae7a0430d2260477baa94598e380c70f27bc
}