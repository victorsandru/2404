// Victor Sandru
// 101231111

#include<iostream>
#include<string>

using namespace std;

void power(int, int, int&);


int main(int argc, char const *argv[])
{
    int x, y, product = 0;
    cout << "Please enter two integers: ";
    cin >> x;
    cin >> y;
    power(x, y, product);
    cout << endl << x << " to the power of " << y << " is " << product << endl; 
    return 0;
}