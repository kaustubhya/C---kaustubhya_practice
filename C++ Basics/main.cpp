#include <iostream>
#include <cmath>

using namespace std;

int main()
{
/*   string name;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Hello " << name;
    return 0;
    */

// Calculator
/*    int num1, num2;
    cout << "Enter first number ";
    cin >> num1;

     cout << "Enter second number ";
    cin >> num2;

    cout << num1 + num2;
*/



  //  cout << endl;

    // MadLib Game

    string colour, pluralNoun, celebrity;

    cout << "Enter a colour: ";
    getline(cin, colour);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << colour << endl;
    cout << pluralNoun << " are blue " << endl;
    cout << celebrity << " I love you " << endl;

    return 0;
}
