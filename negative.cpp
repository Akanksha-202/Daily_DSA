#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void printArray(vector<int>v, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<v[i]<<" ";
	}
	
}

int main(){
	vector<int> v = {38,83,-23,-32,27};
	sort(v.begin(),v.end());
	printArray(v,5);
	return 0;
}