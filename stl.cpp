#include<bits/stdc++.h>
using namespace std;
struct node{
    string str;
    int num;
    double doub;
    char x;
    node(string str_, int num_, double doub_, char x_){
        str = str_;
        num = num_;
        doub = doub_;
        x = x_; 
    }
};
namespace naman{
    int val = 50;
    void getVal(){
        cout << "Hello World" << endl;
        cout <<  val * 10 << endl;
    }
}
int main(){
    //naman::val = 10;
    // double val = 10.0;
    // cout << val << endl;
    //naman::getVal();

    // node ch;
    // ch.str = "naman";
    // ch.num = 23;
    // ch.doub = 34.5;
    //  node *cv = new node("naman",67,76.8,"");    
    //   node cv = node("naman",67,76.8,"");     
    array<int,5> arr = {1,2,3,4,5};
    for(auto it=arr.rbegin();it!=arr.rend();it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto it : arr)
      cout << it << " ";
    vector<int> x;
    x.push_back(0);
    x.push_back(2);
    x.pop_back();   

}