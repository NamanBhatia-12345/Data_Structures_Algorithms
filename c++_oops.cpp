#include <bits/stdc++.h>
using namespace std;
#define ios ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define ll long long
struct abc
{
    int a;
    char b;
};
struct dob
{
    int day;
    string month;
    int year;
};
void swap_one_two(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void solve(int *a, int n)
{
    if(n <= 2){
       cout << "-1\n";
       return;
    }
    int mx1 = a[0], mx2 = INT_MIN, mx3 = INT_MIN;
    for(int i=1;i<n;i++){
        if(a[i] > mx1){
            mx3 = mx2;
            mx2 = mx1;
            mx1 = a[i];
        }
        else if(mx2 < a[i]){
            mx3 = mx2;
            mx2 = a[i];
        }
        else if(mx3 < a[i])
            mx3 = a[i];
        }
    cout << mx3 << endl;     
}

int main()
{
ios;
//malloc and free
// int *x = (int *)malloc(sizeof(int));
// cin >> *x;
// cout << *x << "\n";

// free(x);
//new and delete 
// int *y = new int;
// cin >> *y;
// cout << *y << "\n";
// delete y;
// placement new
// char *buffer = new char[80];
// int *var1 = new (buffer) int(76);
// int *var2 = new(buffer + 4) int(75);

// delete [] buffer;
// dob st;
// st.day = 10;
// st.month = "January";
// st.year = 2000;
// cout << st.day << " " << st.month << " " << st.year << endl;
// int a = 'A' * 10;
// cout << a << "\n";
int n;
cin >> n;
int *arr = (int *)malloc(sizeof(int)*n);
for(int i=0;i<n;i++)
  cin >> arr[i];
solve(arr,n);  
// for(int i=0;i<n;i++)
//   cout << arr[i] << " ";
// cout << "\n";  
// string str;
// getline(cin , str);
// int n = str.size();
// solve(str,n-1);
return 0;
}