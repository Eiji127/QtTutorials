#include <iostream>

using namespace std;

int main()
{   
    /*
     Lamdas
     [capture list](parameter list) {function body}
     */

    //Give lambda function a name and call it
    auto func = []() {
        cout << "Hello World!" << endl;
    };

    func();

    //Call lambda funciton directly after definition
    []() {
            cout << "Hello World2!" << endl;
        }();

    //Define lambda function that takes parameters
    [](int a, int b) {
      cout << "a + b = " << a + b << endl;
    }(7, 3);

    //Define a lambda that returns something
    int sum = [](int a, int b) -> int {
      return a + b;
    }(7, 3);

    cout << "The sum is : " << sum << endl;
    cout << "The sum is : " << [](int a, int b) -> int {
        return a + b;
      }(7, 3) << endl;

    //Capture lists
    int a = 7;
    int b = 3;

    [a, b]() {
      cout << "a is : " << a << endl;
      cout << "b is : " << b << endl;
    }();

    [a, b]() {
      cout << "a + b is : " << a + b << endl;
    }();

    //Capturing by value
    int c = 42;
    auto func2 = [c]() {
        cout << "The inner value of c is : " << c << endl;
    };

    for (int i = 1 ; i < 5 ; i++) {
        cout << "The outer value of c is : " << c << endl;
        func2();
        c = c + 1;
    }
    /*
     実行結果：
The outer value of c is : 42
The inner value of c is : 42
The outer value of c is : 43
The inner value of c is : 42
The outer value of c is : 44
The inner value of c is : 42
The outer value of c is : 45
The inner value of c is : 42
→ inner valueは変化していない
     */

    //Capturing by reference
    auto func3 = [&c]() {
        cout << "The inner value of c is : " << c << endl;
    };

    for (int i = 1 ; i < 5 ; i++) {
        cout << "The outer value of c is : " << c << endl;
        func3();
        c = c + 1;
    }
    /*
    実行結果：
The outer value of c is : 42
The inner value of c is : 42
The outer value of c is : 43
The inner value of c is : 43
The outer value of c is : 44
The inner value of c is : 44
The outer value of c is : 45
The inner value of c is : 45
     */

    //Capture everything by value
    int d = 6;

    auto func4 = [=]() {
        cout << "The inner value of c is : " << c << endl;
        cout << "The inner value of d is : " << d << endl;
    };

    for (int i = 1 ; i < 5 ; i++) {
        cout << "The outer value of c is : " << c << endl;
        func4();
        c = c + 1;
    }
    /*
     実行結果：
The inner value of d is : 6
The outer value of c is : 43
The inner value of c is : 42
The inner value of d is : 6
The outer value of c is : 44
The inner value of c is : 42
The inner value of d is : 6
The outer value of c is : 45
The inner value of c is : 42
The inner value of d is : 6

→使用する変数をすべて取得している
     */

    //Capture everything by reference
    auto func5 = [&]() {
        cout << "The inner value of c is : " << c << endl;
        cout << "The inner value of d is : " << d << endl;
    };

    for (int i = 1 ; i < 5 ; i++) {
        cout << "The outer value of c is : " << c << endl;
        func5();
        c = c + 1;
    }
    /*
     実行結果：
The outer value of c is : 42
The inner value of c is : 42
The inner value of d is : 6
The outer value of c is : 43
The inner value of c is : 43
The inner value of d is : 6
The outer value of c is : 44
The inner value of c is : 44
The inner value of d is : 6
The outer value of c is : 45
The inner value of c is : 45
The inner value of d is : 6
→ 使用する変数の値を取得、更新を行っている
     */

    return 0;
}
