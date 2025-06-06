#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>  //for sort
#include <chrono>     //rand and srand
#include <cstdlib>    //time

using namespace std;

//function to print array stack

//Bubble sort with animation
void bubbleSort(vector<int>& arr){
  int n = arr.size()
  const int sTime= 1000000;  //animation delay per step in microseconds
  int sCounter= 0;

  auto start = high_resolution_clock::now();    //start time

  for (int i = 0; i < n - 1; i++){
    for (int j = 0; j < n - i - 1; j++){
      print(arr, j, j + 1);
      usleep(sTime);        //animation delay
      sCounter++;
      if (arr[j], arr[j + 1]){
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  auto end = high_resolution_clock::now();      //end time
  print(arr);

  //calculating total time and subtract visualization delay
  duration<double> totalTime = end - start;
  double adjustedTime = totalTime.count() - (sCounter * sTime / 1000000.0);

  cout<<adjustedTime<<endl;
}

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
