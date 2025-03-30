#include <iostream>
using namespace std;
int  decToBinary(int decNum){
int ans = 0, pow =1;
while(decNum > 0){
  int rem =decNum %2;
  decNum /= 2;
  ans += (rem * pow);
  pow *= 10;

} 
return ans; //binary from

}
int main(){
//int decNum = 10;
//cout << decToBinary(decNum) << endl;
for(int i=1;1<=10;i++){
  cout << decToBinary() << endl;
}
return 0;

}