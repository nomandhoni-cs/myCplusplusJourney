#include <bits/stdc++.h>
include <iostream>
using namespace std;
int main()
{
    int age;
    char gender;
    cout << "Enter your Age here ";
    cin >> age;
    cout << "Enter your gender here (M/F) ";
    cin >> age;
    if(age < 18)
    {
        if(gender == 'M'){
            cout << gender << "Kid";
        }
        else{
            cout << gender << "Kid";
        }
    }
    // else if(gender == 'M'){
    //         cout << gender << "Adult";
    //     else{
    //         cout << gender << "Adult";
    //     }
    // }
    else cout << "Invalid Input"
return 0;
}