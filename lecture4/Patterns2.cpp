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

    /*
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
    } */

    //question11

    /*
    int pattern;

    cout << "Enter the number" ;
    
    cin >> pattern;

    int row = 1;
    char count = 'A';

    while (row <= pattern) {
        int column = 1;
        while ( column <= pattern){
            cout << count;
            column = column + 1;
            count = count + 1;
        }
        cout << endl;
        row = row + 1;
    } */

    //question12

    /*
    int pattern;

    cout << "Enter a number";
    cin >> pattern;

    int row = 1;

    while (row <= pattern ){
        int column = 1;
        while ( column <= pattern ){
            char ch = row + column + 'A' - 2;
            cout << ch;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    } */

    //question13

    /*
    int pattern;

    cout << "Enter a number";
    cin >> pattern;

    int row = 0;

    while ( row < pattern ){
        int column = 0;
        while (column <= row){
            char ch = 'A' + row;
            cout << ch;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    } */

    //question14

    /*
    int pattern;

    cout << "Enter a number";
    cin >> pattern;

    int row = 1;

    while ( row <= pattern ){
        int column = 1;
        while (column <= row){
            char ch = 'A' + row + column -2;
            cout << ch;
            column = column + 1;
        }
        cout << endl;
        row = row + 1;
    } 
    */

    //question 15

    /*
    int pattern;

    cout << "Enter a number";
    cin >> pattern;

    int row = 1;
    int count = pattern;

    while ( row <= pattern ){
        int column = 1;
        while (column <= row){
            cout << count + column - 1;
            column = column + 1;
        }
        
        cout << endl;
        row = row + 1;
        count = count - 1;
        
    } */

    //question 16

    /*
    int pattern;

    cout << "Enter a number";
    cin >> pattern;

    int row = 1;
    int count = pattern;

    while ( row <= pattern ){
        int column = 1;
        while (column <= row){
            char ch = 'A' + count + column -2;
            cout << ch;
            column = column + 1;
        }
        
        cout << endl;
        row = row + 1;
        count = count - 1;
        
    } */

    //question17

    /*
    int number;

    cout << "Enter a number";
    cin >> number;

    int row = 1;

    while (row <= number ){
        int space = number - row;
        while (space != 0){
            cout<<" ";
            space = space - 1;
        }
        int star = 1;
        while (star <= row){
            cout << '*';
            star = star+1;
        }

        cout << endl;
        row = row + 1;
    }
    */

    //question18

    /*
    int number;

    cout << "ENter a number";
    cin >> number;

    int row = 1;
    int count = number;

    while (row <= number){
        int column = 1;
        while (column <= count){
            cout << count - column + 1;
            column = column +1;
        }
        cout << endl;
        row = row + 1;
        count = count -1;
    } */

    //question18

    int number;

    cout << "ENter a number";
    cin >> number;

    int row = 1;
    int count = number;

    while (row <= number){
        int column = 1;
        while (column <= count){
            cout << '*';
            column = column +1;
        }
        cout << endl;
        row = row + 1;
        count = count -1;
    }


}