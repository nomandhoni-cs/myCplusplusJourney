#include <iostream>
using namespace std;
int main(){  
    int a, b, multiplication;
    cout << "Enter a " << endl;
    cin >> a;
    cout << "Enter b " << endl;
    cin >> b;
    multiplication = (a * b);
    cout << "The Multipliccation is " << multiplication << endl;
    cout << sizeof(multiplication);
    return 0;
}