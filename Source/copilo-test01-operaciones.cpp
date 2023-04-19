//Write a program that reads two numbers and writes their addition, subtraction, multiplication, and division. Rounded to two decimal places of precision
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b;

    cout << "Enter two numbers: " << endl;
    cin >> a;
    cin >> b;

    cout << endl;
    
    cout << "The sum is " << fixed << setprecision(2) << a + b << endl;
    cout << "The difference is " << fixed << setprecision(2) << a - b << endl;
    cout << "The product is " << fixed << setprecision(2) << a * b << endl;
    cout << "The quotient is " << fixed << setprecision(2) << a / b << endl;

    return 0;
}




