#include <iostream>
using namespace std;
int main(){
 int n = 150;
 int oddsum = 0;
 for(int i=1; i<=n; i++){
 if(i%2 != 0){
  oddsum += i;
  cout << i << "\n";
   }
 }
 cout << endl;
 return 0;
}