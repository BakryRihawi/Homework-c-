#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;
int Number1 = 4;
long Number2 = 123456789123456;
char Letter = 'a';
float Number3 = 335.23;
double Number4 = 14049.304930000;

int main() {
    cin >> Number1 >> Number2 >> Letter >> Number3 >> Number4;
    // Complete the code.
    cout << Number1 << "\n";
    cout << Number2 << "\n";
    cout << Letter << "\n";
    cout << fixed;
    cout << setprecision(3) << Number3 << "\n";
    cout << setprecision(9) << Number4 << "\n";
}
