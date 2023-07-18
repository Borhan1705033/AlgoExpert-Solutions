
#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
   for(int i = 0; i < array.size(); i++)
    {
      if(array[i]<0)
      {
        array[i] *= -1;
      }
    }
  sort(array.begin(),array.end());
  for(int i = 0; i < array.size(); i++)
    {
      array[i] = array[i] * array[i];
    }

  return {array};
}
