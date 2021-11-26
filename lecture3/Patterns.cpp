#include<iostream>
using namespace std;

int main() {

    //question1
    /*
    int star;

    cout << "Enter number of star to print: ";
    cin >> star;

    int row = 1;

    while (row <= star){
        int column = 1;
        while (column <= star){
            cout << "*";
            column = column + 1;
        }
        cout << endl;
        row = row +1;
    } */

    
    //question2

    int star;
    cout << "ENter the number of star to print";
    cin >> star;
    int row = 1;

    while (row <= star) {
        int column = 1;
        while (column <= star) {
            cout << row;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    }
}