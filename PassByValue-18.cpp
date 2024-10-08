#include <bits/stdc++.h>
using namespace std;

void passByValue(int num)
{
    num += 5; // num = num+5
    cout << num << endl;
}

void passByValueString(string str)
{
    str[0] = 'b';
    cout << str << endl;
}

int main()
{
    int num = 10;
    passByValue(num);
    cout << num << endl; // orginal won't changed

    string str = "vishnu";
    passByValueString(str);
    cout << str;
}