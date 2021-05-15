#include <iostream>

using namespace std;

//[Return Type] [Function name] [Function Parameters]
void sayHello() {
    cout << "Hello Daniel" << endl;
}

int sumation(int a, int b) {
    return a + b;
}

float sumation(float a, float b) {
    return a + b;
}

double sumation(double a, double b) {
    return a + b;
}

int main()
{
    sayHello();

    cout << "The sum of 3 and 7 is : " << sumation(3, 7) << endl;
    cout << "The sum of 3.3f and 7.2f is : " << sumation(3.3f, 7.2f) << endl;
    cout << "The sum of 3.3 and 7.2 is : " << sumation(3.3, 7.2) << endl;

    return 0;
}
