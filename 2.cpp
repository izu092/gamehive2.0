#include <iostream>
using namespace std;

int main (){
  // write a program that reads 4 interger numbers and find the biggest number and display it based on the number that considers the highest
  int int1 = 0, int2, int3, int4;
  int highest = -9999;


  int c = 50;


  

while (c < 0) {
      cin >> int1 >> int2 >> int3 >> int4;
if (int1 > 100 || int2 > 100 || int3 > 100 || int4 > 100){
    break;
}
else {
    if (int1 > highest){
    highest = int1;}

    if (int2 > highest) {
    highest = int2; }

    if (int3 > highest) {
    highest = int3; }

    if (int4 > highest) {
    highest = int4; }

   int a = highest;
   int b = highest;
  
  while (0 < a){
    cout << b << " ";
    a--;
  }
}
c--;
}

  return 0;
}