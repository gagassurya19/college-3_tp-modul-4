#include <iostream>
#include "list.h"

using namespace std;

void createList(List &L){
  // this procedure will init the list L
  first(L) = NULL;
} 

address allocate(infotype x){
  address p = new elmlist;
  info(p) = x;
  next(p) = NULL;

  return p;
}

void inserFirst(List &L, address P){
  next(P) = first(L);
  first(L) = P;
}

void printInfo(List L){
  address p = first(L);
  while (p != NULL){
    cout << info(p);
    p = next(p);
  }
  cout << endl;
}

void insertLast(List &L, address P){
  address x = first(L);
  if (!x) {
    first(L) = P;
  } else {
    while (next(x) != NULL){
      x = next(x);
    }
    next(x) = P;
  }
}

void insertAfter(List &L, address X, address Prec ){
  // handle if there is no prec
  if (!Prec){
    return;
  };

  next(X) = next(Prec);
  next(Prec) = X;
}