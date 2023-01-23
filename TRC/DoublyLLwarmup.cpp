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

void removeAtIndex(Node* &head, Node* &tail,int index,int len){

    if(index < 0 || index > len){
        cout<<"Invalid!";
    }

    if(index == 0){
        removeFirst(head,tail);
    }

    if(index == len){
        removeLast(head,tail);
    }

    else{
        int cnt = 0;
        Node* temp = head;
        while(cnt < index){
            cnt++;
            temp = temp->next;
        }

        Node* back = temp->prev;
        Node* forw = temp->next;
        back->next = forw;
        forw->prev = back;
    }
}

void addBefore(Node* &node, Node* & head, Node* &tail, int d ){
    
    Node* node1 = new Node(d);

    if(node==head){
        node1->next = head;
        head->prev = node1;
        head = node1;
    }

    else{
        Node* back = node->prev;
        back->next = node1;
        node1->prev =back;
        node1->next =node;
        node->prev = node1;
    }
}

void addAfter(Node* &node, Node* & head, Node* &tail, int d ){
    
    Node* node1 = new Node(d);

    if(node==tail){
        tail->next = node1;
        node1->prev = tail;
        tail = node1;
    }

    else{
        Node* follow = node->next;
        node->next = node1;
        node1->prev =node;
        node1->next = follow;
        follow->prev = node1;
    }
}

void removeAfter(Node* &node , Node* &head, Node* &tail){

    //Case 1 -> reference Node = tail, therefore node node after that to remove
    if(node==tail){
        cout<<"Invalid!!\nNo Node after tail(reference node) to remove"<<endl;
    }

    //Case 2 -> reference node =tail->prev, therefore tail moght get lost if it's removed
    if(node == tail->prev){
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
    }

    else{
        Node* follow = node->next->next;
        node->next = follow;
        follow->prev = node;
    }
}

void removeBefore(Node* &node , Node* &head, Node* &tail){

    //Case 1 -> reference Node = head, therefore node node before that to remove
    if(node==head){
        cout<<"Invalid!!\nNo Node before head(reference node) to remove"<<endl;
    }

    //Case 2 -> reference node =head->next, therefore head might get lost if it's removed
    if(node == head->next){
        Node* temp = head;
        head = head->next;
        head->prev =NULL;
        free(temp);
    }

    else{
        Node* back = node->prev->prev;
        back->next = node;
        node->prev = back;
    }
}

void removeNode(Node* &node, Node* &head, Node* &tail){

    Node* temp = node;

    if(node == head){
        head = head->next; 
        head->prev = NULL;     
    }

    if(node==tail){
        tail = tail->prev;
        tail->next = NULL;
    }
    
    else{
        Node* back = node->prev;
        Node* follow = node->next;

        back->next = follow;
        follow->prev = back;
    }

    free(temp);

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
    size = len(head);

    removeAtIndex(head,tail,3,size);
    printLL(head);

    cout<<"Add Before Function:"<<endl;
    Node* refnode = tail;
    addBefore(refnode,head,tail,46);
    cout<<"Adding 46 node before tail: "<<endl;
    printLL(head);

    refnode = head;
    addBefore(refnode,head,tail,59);
    cout<<"Adding 59 node before head: "<<endl;
    printLL(head);
    cout<<"Updated head: "<<head->data<<endl;

    refnode= head->next->next;
    addBefore(refnode,head,tail,86);
    cout<<"Adding 86 node before some random node(2 index): "<<endl;
    printLL(head);

    cout<<endl;
    cout<<"///////////////////////////////////////////////////";
    cout<<endl;

    cout<<"Add After Function:"<<endl;
    refnode = tail;
    addAfter(refnode,head,tail,90);
    cout<<"Adding 90 node after tail: "<<endl;
    printLL(head);
    cout<<"Updated tail: "<<tail->data<<endl;

    refnode = head;
    addAfter(refnode,head,tail,22);
    cout<<"Adding 22 node after head: "<<endl;
    printLL(head);
    

    refnode= head->next->next;
    addAfter(refnode,head,tail,37);
    cout<<"Adding 37 node after some random node(2 index): "<<endl;
    printLL(head);

    cout<<endl;
    cout<<"///////////////////////////////////////////////////";
    cout<<endl;

    cout<<"Remove After Function:"<<endl;

    // refnode = tail;
    // removeAfter(refnode,head,tail);
    // cout<<"Remove node after tail: "<<endl;
    // printLL(head);
    // cout<<"Updated tail: "<<tail->data<<endl;

    refnode = tail->prev;
    removeAfter(refnode,head,tail);
    cout<<"Removing the tail: "<<endl;
    printLL(head);
    cout<<"Updated tail: "<<tail->data<<endl;
    

    refnode = head->next->next;
    removeAfter(refnode,head,tail);
    cout<<"Removing the node after random node (2 index): "<<endl;
    printLL(head);

    cout<<endl;
    cout<<"///////////////////////////////////////////////////";
    cout<<endl;

    cout<<"Remove Before Function:"<<endl;

    // refnode = head;
    // removeBefore(refnode,head,tail);
    // cout<<"Remove node before head: "<<endl;
    // printLL(head);

    refnode = head->next;
    removeBefore(refnode,head,tail);
    cout<<"Removing the head: "<<endl;
    printLL(head);
    cout<<"Updated head: "<<head->data<<endl;
    

    refnode = head->next->next;
    removeBefore(refnode,head,tail);
    cout<<"Removing the node before random node (2 index): "<<endl;
    printLL(head);
    

    cout<<endl;
    cout<<"///////////////////////////////////////////////////";
    cout<<endl;

    cout<<"Removing Node Function:"<<endl;

    refnode = head;
    removeNode(refnode,head,tail);
    cout<<"Removing head of the doubly Linked List"<<endl;
    printLL(head);
    cout<<"Updated head: "<<head->data<<endl;  
    
    

    refnode = tail;
    removeNode(refnode,head,tail);
    cout<<"Removing tail of the doubly Linked List"<<endl;
    printLL(head);
    cout<<"Updated tail: "<<tail->data<<endl;

    refnode = head->next->next->next;
    removeNode(refnode,head,tail);
    cout<<"Removing a random node(3rd index)"<<endl;
    printLL(head);


    return 0;
}