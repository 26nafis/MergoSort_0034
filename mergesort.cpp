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
    cout << "\n=============================" << endl;

    for (int i = 0; i < n; i++){
        cout << "array index ke - " << i << "i ";
        cin >> arr[i];
    }
}

void mergesort(int low, int high) {

    if (low >= high) { //step 1
        return;       //step1.a
    }

    int mid = (low + high) /2; //step 2

    //step 3
    //fungsi rekursi > memangil diri sendiri 
    mergesort(low, mid);     //step3.a
    mergesort(mid + 1, high); // step 3.b

    //step 4
    int i = low; //step 4.a
    int j = mid + 1; //step4.b
    int k = low; // step4.c

    while (i <= mid && j <= high){ //step 4.d
        if (arr[i] <= arr[j]) {
            B[k] = arr[i];
            i++;
        } else {
            B[k] = arr[j];
            i++;
        }
        k++;
    }

    while (j <= high) { //step 4.e
        B[k] = arr[j]; // step 4.e.1
        j++;           // step 4.e.11
        k++;           // step 4.e.iii
    }

    while (i <= mid ) {
        B[k] = arr[i];
        i++; //step
        k++;
    }

    //step 5
    for (int x = low; x<= high; x++) {
        arr[x] = B[x];
    }
}

void output() {
    cout << "\nData setelah diurutkan (mergesort): ";
    for ( int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    input();
    mergesort(0, n - 1);
    output();
}