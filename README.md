# Experiment 1
## Program 1: Hello World
### Aim:
To print "Hello World" using C++.

### Software:
Visual Studio Code

## Theory:
The "Hello World" program is a beginner's first step in learning a new programming language. It shows how to use basic syntax, including libraries, the main() function, and printing to the console. The main() function is where the program starts running. The std namespace is used to simplify syntax.

### Program Code:
``` javascript
#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World";
    return 0;
}
```

### Output:
![image](https://github.com/user-attachments/assets/96af507e-aa5d-4885-ab08-f7ddf8d98360)

### Conclusion:
We learned how to display text in C++ and successfully printed "Hello World".

## Program 2: User Input and Output
### Aim:
To get input from the user and display it.

### Software:
Visual Studio Code

## Theory:
To get user input, we use cin with the >> operator. This lets the user enter data like numbers or text. The program then shows this input using cout.

### Program Code:
``` javascript
#include <iostream>
using namespace std;

int main(){
    int Number;
    string String;
    cout<<"Enter a number: ";
    cin>>Number;
    cout<<"Enter a word: ";
    cin>>String;
    cout<<"Your entered number= "<<Number<<endl;
    cout<<"Your entered word= "<<String<<endl;
    return 0;
}
```
### Output:
![image](https://github.com/user-attachments/assets/2bc67462-a86d-4345-836b-283c5456e80e)

### Conclusion:
We learned how to take user input and show it in C++.

## Program 3: Basic Calculator
### Aim:
To create a simple calculator that performs addition, subtraction, multiplication, and division.

### Software:
Visual Studio Code

## Theory:
This program does basic math operations. It asks the user for two numbers and performs the chosen arithmetic operations (addition, subtraction, multiplication, or division), then shows the results.

### Program Code:
``` javascript
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
```
### Output:
![image](https://github.com/user-attachments/assets/caddc5dd-107f-44fc-9c5a-cc685ec1a620)

### Conclusion:
We learned to perform basic calculations in C++ and created a simple calculator to display the results.




