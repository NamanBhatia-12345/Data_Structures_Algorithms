#include <bits/stdc++.h>
using namespace std;
string reverse(string str){  // O(m)
	string st = "";
	for(int i = str.length() - 1; i >= 0; i--)
		st += str[i];
	return st;
}
string solve(string str){   // O(n) + O(n) + O(n*m) => O(m*n)
     vector<string> arr;    // m => size of particular string
     string temp = "";      // n => size of array
     for(int i = 0; i < str.length() ; i++){
        if(str[i] == ' '){
          arr.push_back(temp);
          temp = "";
         }
        temp += str[i];        
    }
    arr.push_back(temp);
    string result = "";
    string s; 
    for(int i = 0; i < arr.size(); i++){ 
	    s = reverse(arr[i]);
        result += s;
        result += ' ';
    } 
    return result;  
}
int main(){
    string str;
    getline(cin, str);
    string res;
    res = solve(str);
    cout << res << "\n";
}
