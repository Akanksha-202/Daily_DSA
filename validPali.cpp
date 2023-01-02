#include <iostream>
using namespace std;

void toLowercase(string s)
{
    for(int i =0 ; i < s.length()-1 ; i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            continue;
        }
        else{
            char temp = s[i] - 'A' +'a';
            s[i] = temp;
        }
    }
}

bool checkPali(string s){
    toLowercase(s);
    
}

int main(){
    
    string s;

    s = "A man, a plan, a canal: Panama";
    checkPali(s);
    return 0;
}