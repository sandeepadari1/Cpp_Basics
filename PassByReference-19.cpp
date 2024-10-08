#include <bits/stdc++.h>
using namespace std;

void passByRef(int &num){
    num+=5;
    cout<<num<<"\n";
}

void passByRefString(string &str){
    str[0] = 'b';
    cout<<str<<endl;
}

int main(){
    int num = 10;
    passByRef(num);
    cout<<num<<endl;

    string str = "vishnu";
    passByRefString(str);
    cout<<str;
}