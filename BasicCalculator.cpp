#include <iostream>
using namespace std;

int main() {
  int a,b;
  cout<<"Welcome to calculator"<<endl;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
    cout<<"The sum of your digits is = "<<(a+b)<<endl;
    cout<<"The difference of your digits is = "<<(a-b)<<endl;
    cout<<"The product of your digits is = "<<(a*b)<<endl;
    if(b!=0){
        cout<<"The division of your digits is = "<<(a/b)<<endl;
    } else { 
        cout<<"divide by 0 error";
    }
  return 0;
}