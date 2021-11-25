/* 
    int a = 5; --> we have a variable a of type integer which is storing value 5. When we delclare int, complier gives a memeory of 4 byte(32 bits) to that variable.
    char ch = 'a'; --> character is represented using single inverter comma. Char is given 1 byte of memory(8 bit).
    bool --> It takes only two values "True"(1) or "False"(0). Bool is of size 1 byte.
    float f = 1.2; --> 4 bytes memory
    doube d = 1.23; --> 8 bytes memory 
*/

#include<iostream>
using namespace std;

int main() {

    int a = 123;
    cout << a << endl;

    char b = 'v';
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    float f = 1.2;
    cout << f << endl;

    double db = 3.4;
    cout << db << endl;

    int size = sizeof(db);
    cout << "Size of db is : " << size << endl;

    // type casting //

    int ab = 'a';
    cout << ab << endl; // will get a value of 97 printed which is ASCII calue for 'a'. Which means 'a' is typecasted to integer value 97.//

    char bc = 97;
    cout << bc <<  endl; // will get 'a' printed which means 97 got type casted to 'a' which is it's ASCII value. //

    bool bll = 'a';
    cout << bll << endl; 

    unsigned int un = 123;
    cout << un << endl;

    unsigned int un1 = -123;
    cout << un1 << endl;

}