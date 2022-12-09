#include <iostream>

using namespace std;

int addition(int, int);
int subtraction(int, int);
int multiplication(int, int);
int division(int, int);

int main() {

    int a = 0.0, b = 0.0;
    char q = '0';

    cout << "/integer calculator/\n\n";

    do {
        cout << "input 1st number: ";
        cin >> a;
        cout << "input 2nd number: ";
        cin >> b;
        cout << "input operation (+, -, *, /): ";
        cin >> q;

        switch (q) {
        case '0': cout << "\nexit\n";
            break;
        case '+': cout << "result = " << addition(a, b) << endl;
            break;
        case '-': cout << "result = " << subtraction(a, b) << endl;
            break;
        case '*': cout << "result = " << multiplication(a, b) << endl;
            break;
        case '/': cout << "result = " << division(a, b) << endl;
            break;
        default: cerr << "\nerror\n";
            break;
        }

        cout << endl;
    } while (q != '0');

    cout << endl;

    return 0;
}

int addition(int a, int b) {
    int ret = 0;

    for (int i = 0; i < a; i++) {
        ret += 1;
    }
    for (int i = 0; i < b; i++) {
        ret++;
    }

    return ret;
}

int subtraction(int a, int b) {
    int ret = a;
    int local_b = b;

    do {
        ret--;
    } while (--local_b > 0);

    return ret;
}

int multiplication(int a, int b) {
    int ret = 0;
    int local_b = b;

    while (local_b-- > 0) {
        ret += a;
    }

    return ret;
}

int division(int a, int b) {
    if (0 == b) {
        return 0;
    }
    else {
        return a / b;
    }
}