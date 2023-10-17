#include <iostream>
#include "list.h"

using namespace std;

int main() {
  List L;
  createList(L);

  cout << "Masukkan NIM perdigit" << endl;
  int input;

  for (int i = 1; i <= 4; i++) {
    cout << "Digit " << i << " : ";
    cin >> input;

    address node = allocate(input);
    insertLast(L, node);
  }

  // int a;
  // cout << "M: ";
  // cin >> a;

  // address node1 = allocate(a);
  // insertAfter(List L, )
  
  cout << "List: ";
  printInfo(L);
  
  return 0;
}