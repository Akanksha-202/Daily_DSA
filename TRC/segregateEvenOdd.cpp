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

Node* eh = NULL;
Node* et = NULL;
Node* oh = NULL;
Node* ot = NULL;

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

void segregate(Node* head){

    int sizee = 0;
    int sizeo = 0;

    Node* temp = head;

    while(temp){
        if(temp->data % 2 == 0){
            sizee++;
            if(eh == NULL){
                eh = temp;
                et = temp;
            }
            else{
                et->next = temp;
                et = temp;
            }
        }
        if(temp->data %2 != 0){
            sizeo++;
            if(oh == NULL){
                oh = temp;
                ot = temp;
            }
            else{
                ot->next = temp;
                ot = temp;
            }
        }
        temp = temp->next;
    }

    printLL(eh,sizee);
    printLL(oh,sizeo);

}



int main(){

    Node* node1 = new Node(19);
    Node* head = node1;
    Node* tail = node1;
    addFirst(head,88);
    addFirst(head,7);
    addFirst(head,6);
    addFirst(head,67);
    addFirst(head,4);
    addFirst(head,2);
    addFirst(head,21);
    addFirst(head,1);
    printLL(head,9); //40 is added to first and then 50 is added to first => 50 40 30 20 10
    cout<<"Head: "<<head->data<<endl;

    segregate(head);


    

    return 0;
}