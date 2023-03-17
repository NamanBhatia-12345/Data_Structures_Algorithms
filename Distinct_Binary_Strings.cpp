#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
void solve(){
    int n;
    cin >> n;
    string str,temp;
    cin >> str;
    temp=str;
    set<string> mp;
    for(int i=0;i<n;i++){
       temp.erase(temp.begin()+i,temp.begin()+i+1);
       mp.insert(temp);
       temp=str;
    }
    cout << mp.size() << "\n";
}
int main()
{
ios;
int t;
cin >> t;
while(t--){
solve();
}
return 0;
}
// #include <bits/stdc++.h>


// using namespace std;



// /*
//  * Complete the 'getPhoneNumber' function below.
//  *
//  * The function is expected to return a STRING.
//  * The function accepts STRING s as parameter.
//  */

// string getPhoneNumber(string s) {
//     stringstream ss(s);
//     istream_iterator<string> begin(ss);
//     istream_iterator<string> end;
//     vector<string> t1(begin,end);
//     string res = "";
//     for(int i=0;i<t1.size();i++){
//         if(t1[i] == "one")
//          res += '1';
//         else if(t1[i] == "two")
//           res += '2';
//         else if(t1[i] == "three")
//           res += '3';
//         else if(t1[i] == "four")
//           res += '4';
//         else if(t1[i] == "five")
//           res += '5';
//         else if(t1[i] == "six")
//           res += '6';
//         else if(t1[i] == "seven")
//           res += '7';
//         else if(t1[i] == "eight")
//           res += '8';
//         else if(t1[i] == "nine")
//           res += '9';
//         else if(t1[i] == "zero")
//           res += '0';
//         else {
//            if(t1[i] == "double"){
//               if(t1[i+1] == "one")
//                 res += "11";
//               else if(t1[i+1] == "two")
//                 res += "22";
//               else if(t1[i+1] == "three")
//                 res += "33";
//               else if(t1[i+1] == "four")
//                res += "44";
//               else if(t1[i+1] == "five")
//               res += "55";
//               else if(t1[i+1] == "six")
//               res += "66";
//               else if(t1[i+1] == "seven")
//                res += "77";
//               else if(t1[i+1] == "eight")
//                 res += "88";
//                else if(t1[i+1] == "nine")
//                 res += "99";
//                else if(t1[i+1] == "zero")
//                 res += "00";
//                i++; 
//            }
//            else{
//                 if(t1[i+1] == "one")
//                 res += "111";
//               else if(t1[i+1] == "two")
//                 res += "222";
//               else if(t1[i+1] == "three")
//                 res += "333";
//               else if(t1[i+1] == "four")
//                res += "444";
//               else if(t1[i+1] == "five")
//               res += "555";
//               else if(t1[i+1] == "six")
//               res += "666";
//               else if(t1[i+1] == "seven")
//                res += "777";
//               else if(t1[i+1] == "eight")
//                 res += "888";
//                else if(t1[i+1] == "nine")
//                 res += "999";
//                else if(t1[i+1] == "zero")
//                 res += "000";
//                 i++;
//            }
//         }  
//     }
//     return res;
// }

// int main()

// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string s;
//     getline(cin, s);

//     string result = getPhoneNumber(s);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }
