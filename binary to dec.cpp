#include <iostream>
using namespace std;
int binToDecimal(int binNum){
  int ans = 0, pow = 1;
  while(binNum > 0){
    int rem = binNum % 10;
    ans += rem* pow;
    binNum /=10;
    pow *=2;

  }
  return ans;//decimal to binnnnnnnnnnnury
}
int main(){ 
  //int decNum = 50;
 // for(int i=1; i<=10;i++){
    //cout << de
  cout << binToDecimal(101) << endl;
  return 0;
  }
   
