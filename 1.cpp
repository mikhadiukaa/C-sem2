#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    float a, b;
    string yesorno, action;

    if (yesorno == "yes") {
        cout << "Choose action to do : sum(A+B), A*B, compare A and B, log10(A) \n";
        cin >> action;
        cout << "Enter two numbers A and B: \n";
        cin >> a >> b;
        if (action=="sum(A+B)"){
            cout << "A + B = " << (a+b) << "\n";
        } else if (action== "A*B") {
            cout << "A * B = " << (a*b) << "\n";
        } else if (action== "compare A and B") {
            if (a>b) {
                cout << "A is bigger then B" << endl;
            } else if (a=b) {
                cout << "B is bigger then A" << endl;
            } else {
                cout << "B = A" << endl;
            }
        }
        else if (action== "log10(A)") {
            cout << "lg(A)= " << (log10(a))<< endl;
        }

    }else if (yesorno == "no"){
        return 0;
    }
}