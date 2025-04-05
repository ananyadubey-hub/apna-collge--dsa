#include <iostream>
#include <vector>
using namespace std;
int recBinarySerach(vector<int> arr,int tar ,int st,int end){
  if(st <= end){
  int mid = st + (end-st)/2;
  if(tar > arr[mid]){ //2nd half
    return recBinarySerach(arr,tar,mid+1,end);

  } else if(tar < arr[mid]){//1sthalf
    return recBinarySerach(arr,tar,mid-1);

  } else { //mid => ans
    return mid;
    }
  }
  return -1;
}


int main(){
  vector<int>arr1 = {-1 ,0,3,4,5,9,12};
  int tar1 =40;
   ///

   vector<int>arr2 = {-1 ,0,3,4,5,9,12};
   int tar2 =20;
   cout << recBinarySerach(arr2, tar2)<endl;
   return 0;

}