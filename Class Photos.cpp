#include <vector>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
  // Write your code here.

  sort(redShirtHeights.begin(),redShirtHeights.end());
  sort(blueShirtHeights.begin(),blueShirtHeights.end());
  bool flag = true;

  if(blueShirtHeights[0]>redShirtHeights[0])
  {
    for(int i=0;i<redShirtHeights.size(); i++)
      {
        if(blueShirtHeights[i]<=redShirtHeights[i])
        {
          flag = false;
          break;
        }
      }
  }
  else{
     for(int i=0;i<redShirtHeights.size(); i++)
      {
        if(blueShirtHeights[i]>=redShirtHeights[i])
        {
          flag = false;
          break;
        }
      }
  }

  return flag;
}

