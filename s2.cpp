#include <iostream>
using namespace std;
class A
{

public:
    void show(){
      cout << "Base class";
    }
};
class B : public A
{
public:
void show(){
      cout << "derived class";
    }
};


int main(){
  A a ;
  B b;
  A *ptr;
  ptr->show();
  ptr = &b;  
  ptr->show();
  return 0;
}

// #include<iostream>
// using namespace std;
// class Base
// {
// private:
//   int a;
// protected:
//  int b; 
// public:
//   int c;  
// };
// class Derived : public Base
// {
// private:
//   int d;
// protected:
//  int e; 
// public:
//   int f;  
// };

// int main(){
//   Derived D;
//   cout << sizeof(D) << endl;
//   return 76;
// }
