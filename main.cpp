#include <iostream>
using namespace std;

int main() {

    string O1 = "  *****  ";
    string O2 = " *     * ";
    string O3 = " *     * ";
    string O4 = " *     * ";
    string O5 = " *     * ";
    string O6 = " *     * ";
    string O7 = "  *****  ";

    string P1 = " ******  ";
    string P2 = " *     * ";
    string P3 = " *     * ";
    string P4 = " ******  ";
    string P5 = " *       ";
    string P6 = " *       ";
    string P7 = " *       ";

    string S1 = "  *****  ";
    string S2 = " *     * ";
    string S3 = " *       ";
    string S4 = "  *****  ";
    string S5 = "       * ";
    string S6 = " *     * ";
    string S7 = "  *****  ";

    cout << O1 + " " + O1 + " " + P1 + " " + S1 << endl;
    cout << O2 + " " + O2 + " " + P2 + " " + S2 << endl;
    cout << O3 + " " + O3 + " " + P3 + " " + S3 << endl;
    cout << O4 + " " + O4 + " " + P4 + " " + S4 << endl;
    cout << O5 + " " + O5 + " " + P5 + " " + S5 << endl;
    cout << O6 + " " + O6 + " " + P6 + " " + S6 << endl;
    cout << O7 + " " + O7 + " " + P7 + " " + S7 << endl;

    return 0;
}

