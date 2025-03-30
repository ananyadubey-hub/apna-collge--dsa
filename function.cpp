#include <iostream>
using namespace std;

// sum of 2 num
double sum(double a, double b) {
 double s = a + b;
  return s;
}
//min of 2 num
int minofTwo (int a ,int b) {
  if(a < b){
    return a;
  } else {
  return b;
  }
  
}
//max of 2 num;
int maxofTwo (int a ,int b) {
  if(a < b, a > b){
    return a;
  } else {
  return b;
  }
}
int main(){

  cout <<"max = " << maxofTwo( 5,24) << endl;
  return 0;
}