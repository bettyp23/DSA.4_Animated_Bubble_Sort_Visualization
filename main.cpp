#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>  //for sort
#include <chrono>     //rand and srand
#include <cstdlib>    //time

using namespace std;

//function to print array stack

//Bubble sort with animation

//Function to generate an array 'n' integers with given 'sorted'
vector<int> generate(int n, int sorted){
  vector<int> arr(n);

  //fill arr with random values 1-10
  for (int& num : arr){
    num = rand() % 10 + 1;
  }

  int sortedPer = (n * sorted) / 100;           //calculate how many elements to be sorted
  sort(arr.begin(), arr.begin() + sortedPer);   //sort first 'sortedPer' elements
}

int main(){
  srand(time(0))    //generate and print arrays for testing
  int size[] = {10, 20, 30, 40};
  int level[] = {0, 25, 50, 75};
}
