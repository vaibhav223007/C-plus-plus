#include<iostream>
using namespace std;

int main() {

    //question-1
    /*
    int a;
    cin >> a;

    if (a>0){
        cout << "a is positive" << endl;
    }
    else {
        cout << "a is negative" << endl;
    }
    */

    //question-2
    /*
    int a,b;

    //cin >> a >> b; // cin do not take tab,enter or space under consideration, if we want to take enter, space or tab as input then we use something called cin.get()

    cout << "Enter the value of A:";
    cin >> a;

    cout << "ENter the value for B:";
    cin >> b;

    if(a>b){
        cout << "A is greater than B";
    } if (b>a){
        cout << "B is greater than A";
    }
    */

    //question-3

    /*
    int a;

    cout << "ENter the number: ";
    cin >> a;
    
    if ( a > 0 ) {
        cout << "Number is +ve";
    } else if (a == 0) {
        cout << "Number is 0";
    } else {
        cout << "Number is -ve";
    }
    */

    //question-4

    char ch;

    cout << "Enter a character: " << endl;

    cin >> ch;

    if (ch>=97 and ch<=122){
        cout << "CHaracter is small letter" << endl;
    } else if (ch>=65 and ch<=90) {
        cout << "Character is Capital letter" << endl;
    } else if (ch>=48 and ch<=57){
        cout << "Numeric" << endl;
    }
    
}