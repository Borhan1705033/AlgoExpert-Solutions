#include <vector>
using namespace std;

vector<int> threeNumberSort(vector<int> array, vector<int> order) {
  // Write your code here.
  int odr_ind = 0;
  int cnt=0;
  while(odr_ind<order.size())
    {
      for(int i=0;i<array.size();i++)
        {
          if(array[i]==order[odr_ind])
          {
            int flag = array[cnt];
            array[cnt]=array[i];
            array[i]=flag;
            cnt++;
          }
        }
      odr_ind++;
    }

  return array;
}
