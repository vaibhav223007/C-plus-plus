#include<iostream>
using namespace std;

int main() {

    //question1
    /*
    int printing;

    cout << "Enter the rows to be printed:";
    cin >> printing;

    int count = 1;

    while (count <= printing){
        int column = 1;
        while (column <= printing ){
            cout<< column;
            column = column + 1;
        }
        cout << endl;
        count = count + 1;
    }
    */

    //question2
    /*
    int printing;

    cout << "Enter the rows to be printed:";
    cin >> printing;

    int count = 1;

    while (count <= printing){
        int j = 1;
        while (j <= printing){
            cout << printing-j+1;
            j = j+1;
        }
        cout << endl;
        count = count + 1;
    }
    */

    //question3
    /*
    int printing;

    cout << "Enter the rows to be printed:";
    cin >> printing;

    int count = 1;
    int a=1;

    while (count <= printing){
        int j = 1;
        while (j <= printing){
            cout << a;
            j = j+1;
            a = a+1;
        }
        cout << endl;
        count = count + 1;
    } */

    //question4

    /*
    int star;

    cout << "Enter the number of star to print: ";
    cin >> star;

    int row = 1;

    while (row <= star){
        int column = 1;
        while (column <= row){
            cout<<'*';
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    } */

    //question5

    /*
    int star;

    cout << "Enter the number of star to print";
    cin >> star;

    int row =1;

    while (row <= star){
        int column = 1;
        while (column <= row ){
            cout<<row;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    } */

    //question6
    /*
    int star;

    cout << "Enter the number of star to print";
    cin >> star;

    int row =1;
    int count = 1;

    while (row <= star){
        int column = 1;
        while (column <= row){
            cout<<count << " ";
            column = column + 1;
            count = count +1;
        }
        cout << endl;
        row = row +1;
    } */

    //question7

    /*
    int star;

    cout << "Enter the number of star to print";
    cin >> star;

    int row =1;
    int count = 1;

    while (row <= star){
        int column = 1;
        while (column <= row){
            cout<<row+column-1 << " ";
            column = column + 1;
            count = count +1;
        }
        cout << endl;
        row = row +1;
    } */

    //question8

    /*
    int star;

    cout << "Enter the number of star to print";
    cin >> star;

    int row =1;
    int count = 1;

    while (row <= star) {
        int column = 1;
        while (column <= row){
            cout<< row-column+1 << " ";
            column = column + 1;
            count = count +1;
        }
        cout << endl;
        row = row +1;
    } */

    //question9

    /*
    int pattern;

    cout << "Enter the number: ";
    cin >> pattern;

    int row = 1;
    char ch = 'A';

    while ( row <= pattern ){
        int column = 1;
        while ( column<=pattern ){
            cout<<ch;
            column = column + 1;
        }
        cout <<  endl;
        ch = ch+1;
        row = row +1;
    } */

    //question10

        int pattern;

    cout << "Enter the number: ";
    cin >> pattern;

    int row = 1;


    while ( row <= pattern ){
        int column = 1;
        char ch = 'A';
        while ( column<=pattern ){
            cout<<ch;
            ch = ch+1; 
            column = column + 1;
        }
        cout <<  endl;
        row = row +1;
    }

}