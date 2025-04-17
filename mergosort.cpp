#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void input() {
    while (true) {
        cout << "masukan panjang element array: ";
        cin >> n;

        if (n<= 20){
            break;
        }
        else{
            cout <<"/nmaksimal panjang array adalah 20";
        }
    }

    cout <<"\n=============================";
    cout << "\ninputkan isi element array";
    cout << "\n============================="; << endl;

    for (int i = 0; i < n; i++){
        cout << "array index ke - " << i << "i ";
        cin >> arr[i];
    }
}

void mergesort(int low, int high) {

    if (low >= high) { //step 1

    }
}