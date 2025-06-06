#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>  //for sort
#include <chrono>     //rand and srand
#include <cstdlib>    //time

using namespace std;

//function to print array stack
void print(const vector<int>& arr, int highlight1 = -1, int highlight2 = -1){
  int maxHeight = *max_element(arr.begin(), arr.end());

  //Print from top (maxHeight) to bottem (1)
  for (int row = maxHeight; row >= 1; row--){
    if (arr[col] >= row){
      if (col == highlight1 || col == highlight2)
        cout<<"[*]";
      else
        cout<<" * ";
    } else {
        cout<< " ";
    }
  }
  cout << "\n";

//printing baseline
for (int val : arr){
    if (val < 10)
      cout << " " << val << " ";
    else
      cout << val << " ";
}
cout<< "\n\n";
}

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

  cout<<"Adjusted time: "<<adjustedTime<<" seconds"endl;
}

//Function to generate an array 'n' integers with given 'sorted'
vector<int> generate(int n, int sorted){
  vector<int> arr(n);

  //fill arr with random values 1-10
  for (int& num : arr){
    num = rand() % 10 + 1;
  }

  int sortedCount = (n * sorted) / 100;           //calculate how many elements to be sorted
  sort(arr.begin(), arr.begin() + sortedCount);

  return arr;
}

int main(){
  srand(time(0))    //generate and print arrays for testing
  int size[] = {10, 20, 30, 40};
  int level[] = {0, 25, 50, 75};

  for (int s : sizes){
    for (int lvl : levels){
      cout<<"Array Size"<< s << ", Sorted: " << ivi << end;
      vector<int> arr = generate(s, lvl);
      print(arr);
      cout<<" bubble sort "<<endl;
      bubbleSort(arr);
      cout<<"Press enter to continute"<<endl;
      cin.ignore();
    }
  }

cout<<"End of program""<<endl;

  return 0;
}
