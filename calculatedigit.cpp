#include <iostream>
using namespace std;
int sumofDigits(int num){
int digSum = 0;

while (num > 0) {
int lastdigit =  num % 10;
 num /=10;
 digSum += lastdigit;


}
   return digSum;
}
int main(){ 
  cout << "sum =" << sumofDigits(12345) << endl;
  return 0;


}