#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

//MERGE SORT IMPLEMENTATION
// merge function
vector<double> merge(vector<double> left,vector<double> right){
  int leftCount = 0;
  int rightCount = 0;

  vector<double> results;

  bool useLeft;
  for (int i=0; i<left.size()+right.size();i++){
    if(leftCount<left.size()){
      if(rightCount<right.size()){
        useLeft = (left[leftCount] < right[rightCount]);
      }
      else{
        useLeft = true;
      }
    }
    else{
      useLeft = false;
    }

    if (useLeft){
      results.push_back(left[leftCount]);
      if (leftCount < left.size()){
        leftCount++;
        }
    }
    else{
      results.push_back(right[rightCount]);
      if (rightCount<right.size()){
        rightCount++;
      }
    }
  }
  return results;
}

// merge sort function
vector<double> mergeSort(vector<double> a){
  if (a.size() <= 1){
    return a;
  }
  int len = floor(a.size()/2);
  vector<double> left(a.begin(), a.begin()+len);
  vector<double> right(a.begin()+len, a.end());

  return merge(mergeSort(left),mergeSort(right));
}
int main(){
  //initialize a vector with random elements
  vector<double> a;
  
  for (int j=0; j<20; j++){
    a.push_back(rand() % 100);
  }
  
  vector<double> msort = mergeSort(a);
  cout<< "msort" << endl;
}
