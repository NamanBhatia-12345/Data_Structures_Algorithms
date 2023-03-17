#include <iostream>
using namespace std;
int calculate_prime(int n){
    for(int i=2;i*i<n;i++){
         if(n % i == 0)
           return -1;  
    }
    return n;
}
int main(){
    int n;
    cin >> n;
    if(n == 2)
        cout << "Not possible\n";
    else if(n == 3)
        cout << "2\n";
    else if(n == 5)
        cout << "3\n";
    else{
        int ans = -1, prev = -1;
        for(int i=2;i<=n;i++){
           int x = calculate_prime(i);  
           if(x == -1)
             continue;
           else{
            prev = ans;    
            ans = x;
           }
        }  
       if(prev == -1)
          cout << "Not Possible\n";
       else
          cout << prev << "\n";
    }
    return 0;
}


// Time Complexity : O(n^(3/2))
// Space Complexity : O(1)