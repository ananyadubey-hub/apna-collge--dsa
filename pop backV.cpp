#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vec;
cout <<"size=" <<vec.size()<< endl;
vec.push_back(25);
vec.push_back(35);
vec.push_back(45);
cout <<"after pop back size="<< vec.size()<< endl;
vec.pop_back();//45
for(int val :vec){

  cout << val << endl;
}
return 0;
}
