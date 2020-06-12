//The code should take all the values from int, long, char, float and doubt but after I enter char value, it stops taking other values and gives the output.This is my problem sir

#include <iostream>

using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout <<"\n you entered:\n";
    cout <<a <<"\n"<<b <<"\n"<<c <<"\n" <<d <<"\n" <<e;
    return 0;
}
