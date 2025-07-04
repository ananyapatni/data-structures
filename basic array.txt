#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int x[size];
    cout << "Enter a set of  integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> x[i];
    }
    cout << "The array elements are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << x[i] << " ";
    }
}