#include<iostream>

using namespace std;

int main()
{
    int a=20;

    auto f=[a](int b){cout<<a+b<<endl;};

    cout<<a<<endl;
    f(1);
    f(2);
    f(3);
    cout<<a<<endl;
    return 0;
}