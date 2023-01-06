<<<<<<< HEAD
#include <iostream>
#include <vector>
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

//More space O(n)
bool palindrome(Node* &head){
    vector<int> v;

    Node* temp = head;
    while(temp!=NULL){
        v.push_back(temp->data);
        temp = temp->next;
    }
    
    int start = 0;
    int end = v.size()-1;

    while(start<=end){
        if(v[start]!=v[end]){
            return 0;
        }
        start++;
        end--;
    }
    
    return 1;
}

//Approach 2
// find mid of linkedList and reverse from mid->next 
// if head-mid == mid->next-tail
// return true


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
    addFirst(head,20);
    addFirst(head,10);
    printLL(head,5); //40 is added to first and then 50 is added to first => 50 40 30 20 10
    cout<<"Head: "<<head->data<<endl;

    cout<<"Given Linked List is palindrome: "<<palindrome(head);

    return 0;
=======
#include <iostream>
#include <vector>
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

//More space O(n)
bool palindrome(Node* &head){
    vector<int> v;

    Node* temp = head;
    while(temp!=NULL){
        v.push_back(temp->data);
        temp = temp->next;
    }
    
    int start = 0;
    int end = v.size()-1;

    while(start<=end){
        if(v[start]!=v[end]){
            return 0;
        }
        start++;
        end--;
    }
    
    return 1;
}

//Approach 2
// find mid of linkedList and reverse from mid->next 
// if head-mid == mid->next-tail
// return true


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
    addFirst(head,20);
    addFirst(head,10);
    printLL(head,5); //40 is added to first and then 50 is added to first => 50 40 30 20 10
    cout<<"Head: "<<head->data<<endl;

    cout<<"Given Linked List is palindrome: "<<palindrome(head);

    return 0;
>>>>>>> d5ccae7a0430d2260477baa94598e380c70f27bc
}