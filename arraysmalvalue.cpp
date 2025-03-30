#include <iostream>
using namespace std;
int main(){
     int nums[]{12,23,11,34,64,56,-3}
      int size = 7;

  int smallest = INT_MAX;

 for(int i=0; i<size; i++){
  if(nums[i] <smallest){
    smallest = nums[i];

  }
  min(num[i],smallest)
 }

cout << "smallest = "<< smallest << endl;
 return 0;
}
