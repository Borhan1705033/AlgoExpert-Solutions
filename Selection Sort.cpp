#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> array) {
  // Write your code here.
  for(int i=0;i<array.size()-1;i++)
    {
      int min_ind = i;
      for(int j=i+1;j<array.size();j++)
        {
          if(array[j]<array[min_ind])
          {
            min_ind = j;
          }
        }
      if(i!=min_ind)
      {
        swap(array[i],array[min_ind]);
      }
    }
  return {array};
}

