#include <iostream>

using namespace std;

int main()
{
    int a = 20;
    int b = 7;

    cout << "-------------Math Operators-------------" << endl;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a / b = " << (float) a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "-------------Logical Operators-------------" << endl;

    /*
     演算子：>, <, >=, <=, ==
     */

    if (a > b)
    {
        cout << "A is greater than b " << endl;
    } else
    {
        cout << "A is not greater than b " << endl;
    }

    if (a == b)
    {
        cout << "A is equal to b " << endl;
    } else
    {
        cout << "A is not equal to b " << endl;
    }

    //Loops
    cout << "Hello Daniel 1" << endl;
    cout << "Hello Daniel 2" << endl;
    cout << "Hello Daniel 3" << endl;
    cout << "Hello Daniel 4" << endl;
    cout << "Hello Daniel 5" << endl;
    cout << "Hello Daniel 6" << endl;
    cout << "Hello Daniel 7" << endl;
    cout << "Hello Daniel 8" << endl;
    cout << "Hello Daniel 9" << endl;
    cout << "Hello Daniel 10" << endl;
    cout << "Hello Daniel 11" << endl;
    cout << "Hello Daniel 12" << endl;
    cout << "Hello Daniel 13" << endl;
    cout << "Hello Daniel 14" << endl;
    cout << "Hello Daniel 15" << endl;
    cout << "Hello Daniel 16" << endl;
    cout << "Hello Daniel 17" << endl;
    cout << "Hello Daniel 18" << endl;
    cout << "Hello Daniel 19" << endl;
    cout << "Hello Daniel 20" << endl;

    //For loop
    for (int i = 1 ; i <= 20 ; i++) // i++ → i=i+1
    {
        cout << "Hello Daniel " << i << endl;
    }

    //While loop
    int i = 1;
    while (i <= 20) {
        cout << "Hello Daniel " << i << endl;
        i = i + 1;
    }
    // or
//    do {
//        cout << "Hello Daniel " << i << endl;
//        i = i + 1;
//    } while (i <= 20);

//    return 0;
}

/*
-------------Math Operators-------------
a + b = 27
a - b = 13
a * b = 140
a / b = 2
a / b = 2.85714
a % b = 6
-------------Logical Operators-------------
A is greater than b
A is not equal to b
Hello Daniel 1
Hello Daniel 2
Hello Daniel 3
Hello Daniel 4
Hello Daniel 5
Hello Daniel 6
Hello Daniel 7
Hello Daniel 8
Hello Daniel 9
Hello Daniel 10
Hello Daniel 11
Hello Daniel 12
Hello Daniel 13
Hello Daniel 14
Hello Daniel 15
Hello Daniel 16
Hello Daniel 17
Hello Daniel 18
Hello Daniel 19
Hello Daniel 20
Hello Daniel 1
Hello Daniel 2
Hello Daniel 3
Hello Daniel 4
Hello Daniel 5
Hello Daniel 6
Hello Daniel 7
Hello Daniel 8
Hello Daniel 9
Hello Daniel 10
Hello Daniel 11
Hello Daniel 12
Hello Daniel 13
Hello Daniel 14
Hello Daniel 15
Hello Daniel 16
Hello Daniel 17
Hello Daniel 18
Hello Daniel 19
Hello Daniel 20
Hello Daniel 1
Hello Daniel 2
Hello Daniel 3
Hello Daniel 4
Hello Daniel 5
Hello Daniel 6
Hello Daniel 7
Hello Daniel 8
Hello Daniel 9
Hello Daniel 10
Hello Daniel 11
Hello Daniel 12
Hello Daniel 13
Hello Daniel 14
Hello Daniel 15
Hello Daniel 16
Hello Daniel 17
Hello Daniel 18
Hello Daniel 19
Hello Daniel 20
 */
