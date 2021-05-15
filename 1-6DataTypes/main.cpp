#include <iostream>
#include <string>

using namespace std;

int main()
{
    string hello = "Hello, World";
    int count = 7;

    cout << "The message is :" << hello << endl;
    cout << "The cout is :" << count << endl;

    cout << "Size of int :" << sizeof(int) << "bytes" << endl;
    cout << "Size of char :" << sizeof(char) << "bytes" << endl;
    cout << "Size of bool :" << sizeof(bool) << "bytes" << endl;
    cout << "Size of float :" << sizeof(float) << "bytes" << endl;
    cout << "Size of double :" << sizeof(double) << "bytes" << endl;
    cout << "Size of wchar_t :" << sizeof(wchar_t) << "bytes" << endl;

    unsigned int var1 = -200;
    cout << "Var1 is :" << var1 << endl;

    return 0;
}

/**
 * 実行結果：
 * The message is :Hello, World
 * The cout is :7
 * Size of int :4bytes
 * Size of char :1bytes
 * Size of bool :1bytes
 * Size of float :4bytes
 * Size of double :8bytes
 * Size of wchar_t :4bytes
 * Var1 is :4294967096
 */
