#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> array) {
  // Write your code here.
  for(int i=0;i<array.size()-1;i++)
    {
      for(int j=0;j<array.size()-i-1;j++)
        {
          if(array[j]>array[j+1])
          {
            swap(array[j+1],array[j]);
          }
        }
    }
 // sort(array.begin(),array.end());
  return {array};
}
