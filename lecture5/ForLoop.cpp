#include <iostream>
using namespace std;

int main()
{
    /*
    int number;
    cout << "ENter the nummber to print: ";
    cin >> number;
    cout << "Printing numbers from 1 to " << number << endl;

    for (int i = 1; i <= number; i++)
    {
        cout << i << endl;
    }
    */

    //question1:

    /*
    int number = 1;
    cout << "ENter the number for sum: ";
    cin >> number;
    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }

    cout << "Sum of numbers from 1 to " << number << " is: " << sum;
    */

    //question2: Fibonacci Series
    /*
    int a = 0;
    int b = 1;
    int n = 10;

    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int fibNext = a + b;
        cout << fibNext << " ";
        a = b;
        b = fibNext;
    }
    */

    //question3: Prime Number

    int number;
    cout << "ENter a number: ";
    cin >> number;
    bool isPrime = 1;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime Number";
    }
}