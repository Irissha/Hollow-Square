#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    const char star = '*';
    int size;
    cout << "Введите размер квадрата : ";
    cin >> size;

    for (int i = 0; i < size; i++)
          cout << star;
    cout << endl;

    for (int i = 0; i < size - 2; i++)
        cout << star << setw(size - 1) << star << endl;

    for (int i = 0; i < size; i++)
        cout << star;
    cout << endl;

    return 0;
}
