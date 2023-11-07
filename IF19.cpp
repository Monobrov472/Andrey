#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    // Введення чотирьох чисел
    cout << "Enter four integers: ";
    cin >> a >> b >> c >> d;

    // Перевірка, яке число відмінне від інших
    if (a == b && b == c) {
        cout << "Number " << d << " different from others." << endl;
    }
    else if (a == b && b == d) {
        cout << "Number " << c << " different from others." << endl;
    }
    else if (a == c && c == d) {
        cout << "Number " << b << " different from others." << endl;
    }
    else {
        cout << "Number " << a << " different from others." << endl;
    }

    return 0;
}
