#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& A, int tar P){
  int st = 0, end = A.size()-1;
  while(st <= end) {
int mid = st +(end  - st)
/2;
if (A[mid] == tar) {
  return mid;
}
if(A[st]<=A[mid]){
  //left sorted
  if(A[st] <= tar && tar <= A[mid]){
   end =mid -1;

  }else {

st = mid+1;

  }

}else {
  st = mid + 1;
}
} 
}else {//right sorted
  if(A[mid] <= tar && tar <= A[mid]){
    st =mid+1;

  } else{
    end = mid -1;

  }
}
  }
  return -1;

}