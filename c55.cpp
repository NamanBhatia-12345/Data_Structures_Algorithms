#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string res = "";
    vector<int> arr(3);
    int j = 0;
    int a;
    for(int i=0;i<str.length();i++){
        if(str[i] == '-'){
          arr[j] = stoi(res);
          res = "";
          j++;
          continue;
        }
        res += str[i];
    }
    for(int i=0;i<3;i++){
        if(arr[i] > 255){
            cout << "NA";
            exit(0);
        }
    }
    char hex_string[20];
    for(int i=0;i<3;i++){
     sprintf(hex_string, "%X", arr[i]);
    }
    cout << hex_string << "\n";
   return 0;
}