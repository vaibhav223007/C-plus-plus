#include<iostream>
using namespace std;

int main(){

    // question1
    /*
    int a;

    cout << "ENter a number: ";

    cin >> a;
    int i = 1;

    while ( i <= a ) {
        cout << i << endl;
        i = i +1;
    } */


    //question2

    /*
    int number;

    cout << "Enter a Number: ";

    cin >> number;

    int summ = 0;
    int count = 1;

    while (count <= number ){
        summ = summ + count;
        count = count + 1;
    }

    cout << "Sum of " << number << " is " << summ; */

    //question3: Sum of N even numbers:

    /*
    int number;

    cout << "Enter a number: ";

    cin >> number;

    int sum = 0;
    int count = 1;

    while ( count <= number ){
        if (count%2 == 0){
            sum = sum + count;
        } 

        count = count + 1;
    }

    cout << "Sum is : " << sum << endl; */

    //question4: fahrenheit to celsius
    /*
    float fahrenheit;

    cout << "Enter fahrenheit value: ";
    cin >> fahrenheit;

    float celsius = (fahrenheit - 32) * 5/9;

    cout << "Celsius value is : " << celsius; */

    //question5: Prime Number

    int number;

    cout << "Enter a number to find prime or not: ";
    cin >> number;

    int count = 2;

    while (count < number) {
        if ( number%count == 0){
            cout << "Number is not prime for :" << count << endl;
        } else{
            cout << "Number is prime for: " << count << endl;
        }
        count= count + 1;
    }
    

}