#include <bits/stdc++.h>
using namespace std;

// without params -- no return type
void printFriendName()
{
    cout << "Vishnu" << endl;
}

// with params -- no return type
void printName(string name)
{
    cout << "Hello " << name << "\n";
}

int addition(int num1, int num2)
{
    int res = num1 + num2;
    return res;
}

int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    printFriendName();

    string name;
    cin >> name;

    printName(name);

    // addition of two numbers
    int num1, num2;
    cin >> num1 >> num2;
    int res = addition(num1, num2);
    cout << res << endl;

    // maximum of two numbers
    int a, b;
    cin >> a >> b;
    int maxi = maximum(a, b);
    cout << maxi;

    return 0;
}