#include <iostream>
#include<string>
using namespace std;

int getLength(char name[]){

    int count = 0;
    for(int i = 0 ; name[i]!='\0' ; i++){
        count++;
    }

    return count;
}

void reverseString(char name[], int n){

    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

bool checkPali(char name[],int n){

    int s = 0 ;
    int e = n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Length: " << getLength(name)<<endl;
    
    reverseString(name, getLength(name));
    cout<<"Reverse: ";
    cout<<name<<endl;

    cout<<"Is given string Palidrome: "<<checkPali(name,getLength(name))<<endl;




    return 0;
}