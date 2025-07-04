#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1000,210,30,304,402};
    int max = arr[0], min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
}

/*
Maximum: 1000
Minimum: 30
*/