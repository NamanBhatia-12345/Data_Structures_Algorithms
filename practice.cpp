#include <bits/stdc++.h>
using namespace std;

namespace Functions{
	int divide(int x,int y){
		return (x/y);
	}
	int prod(int x,int y);
}
int Functions::prod(int x,int y){
	return (x*y);
}  

struct node{
     string str;
     int date;
     double val;
     char x;   
};

int main(){
    array<int,8> arr;
    for(int i=0;i<8;i++)
      arr[i]=i+1;
    for(auto it : arr)
      cout << it << " ";
    cout << endl;  
}   
