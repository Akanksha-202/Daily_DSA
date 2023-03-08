#include <iostream>
using namespace std;

void toh(int n,char t1,char t2,char t3){
    if(n==0){
        return;
    }
    toh(n-1,t1,t3,t2);
    cout<<n<<"[ "<<t1<<" -> "<<t2<<" ]"<<endl;
    toh(n-1,t3,t2,t1);
}

int main(){
    int noOfWeights;
    char t1,t2,t3;
    cout<<"Enter no. of weights: ";
    cin>>noOfWeights;
    cout<<"Enter tower1: ";
    cin>>t1;
    cout<<"Enter tower2: ";
    cin>>t2;
    cout<<"Enter tower3: ";
    cin>>t3;
    
    toh(noOfWeights,t1,t2,t3);
    return 0;
}