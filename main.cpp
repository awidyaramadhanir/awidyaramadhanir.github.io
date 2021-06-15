#include <iostream>
#include "list.h"
using namespace std;
/* A. Widya Ramadhani Rahmi
    1303193046 */
int main(){
    infotype x;
    List L;
    address P;
    createList(L);
    cout << "---------------------------"<< endl;
    cout << "MODUL 2 SINGLE LINKED LIST "<< endl;
    cout << "by. A Widya Ramadhani Rahmi"<< endl;
    cout << "      (1303193046)         "<< endl;
    cout << "---------------------------"<< endl;
    cout << "~>> NIM digit pertama = "; cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);
    cout << "~>> NIM digit kedua = "; cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);
    cout << "~>> NIM digit ketiga = "; cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);
    cout << "~>> NIM digit keempat = "; cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);
    cout << "~>> NIM digit kelima = "; cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);
    cout << "~>> NIM digit keenam = "; cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);
    cout << "~>> NIM digit ketujuh = "; cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);
    cout << "~>> NIM digit kedelapan = "; cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);
    cout << "~>> NIM digit kesembilan = "; cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);
    cout << "~>> NIM digit kesepuluh = "; cin >> x;
    P = allocate(x);
    insertFirst(L, P);
    printInfo(L);
    cout << "~>> Hapus Nim First" << endl;
    deleteFirst(L, P);
    printInfo(L);
    return 0;
}
