// #include <iostream>
// #include <array>
// using namespace std;

// int main(){
//     int basic[3] = { 1,2,3} ;

//     array<int,4> a ={1,2,3,4};

//     int size = a.size();
//     for(int i = 0; i < size ; i++)
//     {
//         cout<<a[i]<<endl;
//     }

//     cout<<"Element at 2nd index: "<<a.at(2)<<endl;
//     cout<<"Is the array empty?" <<a.empty()<<endl;
//     cout<<"First element: "<<a.front()<<endl;
//     cout<<"Last element: "<<a.back()<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int>v;

//     vector<int> a(5,1); //Sixe of vector is 5 and initialised by 1

//     for(int i:a)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     vector<int> last(a); //Copying elements of a in 'last' vector
//     for(int i:last)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;   //Space for element

//     v.push_back(1);
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;

//     v.push_back(2);
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;

//     v.push_back(3);
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;

//     cout<<"Element at 2nd index: "<<v.at(2)<<endl;
//     cout<<"First element: "<<v.front()<<endl;
//     cout<<"Last element: "<<v.back()<<endl;

//     v.pop_back();
//     cout<<v.size()<<endl;

//     cout<<"Size before clear: "<<v.size()<<endl;
//     cout<<"Capacity before clear: "<<v.capacity()<<endl;
//     v.clear();
//     cout<<"Size after clear : "<<v.size()<<endl;
//     cout<<"Capacity before clear: "<<v.capacity()<<endl;
//     //Size = 0 but capacity remains same
//     return 0;
// }

// #include <iostream>
// #include<deque>
// using namespace std;

// int main(){
//     deque<int>d;
//     d.push_back(1);
//     d.push_front(2);
//     for(int i :d)
//     {
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     //d.pop_back();
//     //d.pop_front();
//     // cout<<endl;
//     // for(int i :d)
//     // {
//     //     cout<<i<<" ";
//     // }

//     cout<<"Print first index element: "<<d.at(1)<<endl;
//     cout<<"First element: "<<d.front()<<endl;
//     cout<<"Last element: "<<d.back()<<endl;
//     cout<<"Is the array empty?" <<d.empty()<<endl;

//     cout<<"Size before erase: "<<d.size()<<endl;
//     d.erase(d.begin()); //range of deletion (excluding rightmost) 
//     cout<<"Size after erase: "<<d.size()<<endl;
//     return 0;
// }

// #include <iostream>
// #include <list>
// using namespace std;

// int main(){
//     list<int> l;
//     l.push_back(1);
//     l.push_front(2);
//     for(int i :l){
//         cout<<i<<" ";
//     }
//     //begin,end,empty O(1)
//     //erase O(n)
//     //size
//     list<int> copy(l)      // copy elemnts of l in copy
//     return 0;
// }

// #include <iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack <string>s;

//     s.push("Meena");
//     s.push("Kumar");
//     s.push("Yadav");

//     cout<<"Element on top:"<<s.top()<<endl;
//     s.pop();
//     cout<<"Element now on top:"<<s.top()<<endl;
//     cout<<"Size of stack: "<<s.size()<<endl;
//     cout<<"Empty?: "<<s.empty();
//     return 0;
// }


// #include <iostream>
// #include<queue>
// using namespace std;

// int main(){
//     queue<string>q;
//     q.push("Meena");
//     q.push("Kumar");
//     q.push("Yadav");
//     cout<<"Element on top: "<<q.front()<<endl;
//     q.pop();
//     cout<<"Element now on top: "<<q.front()<<endl;
//     return 0;
// }


#include <iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>maxi;    //MaxHeap

    priority_queue<int,vector<int>,greater<int>>mini;   //MinHeap

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n =maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    cout<<endl;
    
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    int m =mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }

    
    return 0;
}