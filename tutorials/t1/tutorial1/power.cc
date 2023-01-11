// Victor Sandru
// 101231111

#include<iostream>
#include<string>

using namespace std;

void power(int a, int b, int& c) {
    int temp = 1;
    if(a != 0) {
        for(int i = 0; i < b; ++i) {
            temp *= a;
        }
    }

    c = temp;
}