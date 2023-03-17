// #include <iostream>
// using namespace std;

// // class Work{
// //     int number;
// //     static int counter;
// //     public : Work(){
// //         number = counter;
// //         counter++;
// //         cout << "Number Created->" << number << endl;
// //         if(number == 2)
// //           throw 2;
// //     }
// // };
// // int Work :: counter = 1;
// int Recur(int num){
//     if(num == 1 || num == 0)
//       return 1;
//     if(num % 2 == 0)
//       return Recur(num / 2) + 2;
//     else
//       return Recur(num - 1) + 3;    
// }
// int main(){
//     int a = 9;
//     printf("%d\n", Recur(a));
//     return 0;   
// }

#include <stdio.h>

int main() {
int i=1,j=1;
for(;;)
{
    if(i>5)
    break;
    else
    j += i--;
    printf("%d\n",j);
    i += j;
    j = j+7;
}
return 0;
}