// #include <iostream>
// using namespace std;

// int add(int a,int b){
//     return a+b;
// }

// double add(double a,double b){
//     return a+b;
// }

// int add(int a,int b,int c){
//     return a+b+c;
// }

// double add(int a,double b){
//     return a+b;
// }

// double add(double a,int b){
//     return a+b;
// }

// int main(){
//     cout << add(1,2) << "\n";
//     cout << add(3.5,4.5) << "\n";
//     cout << add(3,4,5) << "\n";
//     cout << add(3,4.5) << "\n";
//     cout << add(3.5,4) << "\n";
//     return 0;
// }


// #include <iostream>
// using namespace std;



// int main(){
//     int num,den;
//     cin >> num >> den;
//     int ans;
//     try{
//         if(den == 0)
//           throw den;
//         ans = (num / den);  
//     }
//     catch(int ex){
//         cout << "Division is not possible\n";
//         exit(0);
//     }
//     cout << "Answer : " << ans << "\n";
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class Cars{
//     private:
//     string company_name;
//     string model_name;
//     string fuel_type;
//     float mileage;
//     double price;

//     public:
//     // Cars(){

//     // }
//     // Cars(string cname,string fname,string ftype,float x,double ptr){

//     // }
//     // Cars(Cars &obj){

//     // }
//     void setdata(string cname,string mname,string ftype,float m,double p){
//         company_name = cname;
//         model_name = mname;
//         fuel_type = ftype;
//         mileage = m;
//         price = p;
//     }
//     void displaydata(){
//         cout << "Car Properties :-" << "\n\n";
//         cout << "Car Company Name - " << company_name << "\n";
//         cout << "Car Company Model " << model_name << "\n";
//         cout << "Car Fuel Type " << fuel_type << "\n";
//         cout << "Car Mileage " << mileage << "\n";
//         cout << "Car Price " << price << "\n";

//     }
// };

// int main(){

//     Cars car1;
//     car1.setdata("toyota","altris","petrol",15.5,150000);
//     car1.displaydata();
//     return 0;
// }

#include <iostream>
using namespace std;



int main(){
    unsigned int x = 3;
    while(x-- >= 0){
        printf("%d  ",x);
    }
    return 0;
}