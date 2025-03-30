#include <iostream>
using namespace std;
int factoriaLN(int n){
 int fact = 1;
 for(int i=1; i<=n; i++){
   fact *=i;
 }
return fact;
}
 int main(){
  cout <<factoriaLN(4) << endl;
  cout <<factoriaLN(4) << endl;
  return 0;
 }