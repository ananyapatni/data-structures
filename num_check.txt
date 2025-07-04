#include <iostream>
using namespace std;

int main() {
    int key = 56;
    int x[5] = {34, 45, 65, 33, 55};
    int i;
    for (i = 0; i < 5; i++) {
        if (x[i] == key) {
            cout << "Element is found at position " << i << endl;
            break;
        }
    }
    if (i == 5) {
        cout << "Element is not found in the array" << endl;
    }
}