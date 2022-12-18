#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout << "Enter first number ";
    cin >> num1;
     cout << "Enter Operator ";
    cin >> op;
     cout << "Enter second number ";
    cin >> num2;

    if(op == '+'){
        return  num1+ num2;
    }

        if(op == '-'){
        return  num1- num2;
    }

        if(op == '*'){
        return num1* num2;
    }

        if(op == '/'){
        return  num1/ num2;
    }
        if(op == '%'){
        return  num1% num2;
    }

    else{
        cout << "Invalid Operator";

    }




    return 0;
}
