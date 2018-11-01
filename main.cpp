#include <iostream>
#include "muro.hpp"

using namespace std;

int main (void){

  int h,l;
  cout << "Altura: ";
  cin >> h;
  cout << "Longitud: ";
  cin >> l;

  muro pared(h,l);

  // pared.write(cout);
// 7 archivos: 1 main 3clases y dos archivos
//clase ladrillo, clase fila(vector de ladrillos) clase muro



  return 0;
}
