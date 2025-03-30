#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int>vec;
cout <<"size=" <<vec.size()<< endl;
vec.push_back(25);
vec.push_back(35);
vec.push_back(45);
vec.push_back(55);
vec.push_back(475);
vec.push_back(457);
cout <<"after pop back size="<< vec.size()<< endl;
vec.pop_back();//45



  cout << vec.at(5)<< endl;

return 0;
}
