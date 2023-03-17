#include<iostream>
using namespace std;
class Example{
    public:
        static int a;
        int b;
        Example(int x){
            b = x;
            a = b-2;
        }
};
int Example:: a = 0;
int main(void){
    Example b1(9);
    Example b2(13);
    cout << "b1.a is " << b1.a << endl;
    cout << "b1.b is " << b1.b << endl;
    cout << "b2.a is " << b2.a << endl;
    cout << "b2.b is " << b2.b << endl;
}
