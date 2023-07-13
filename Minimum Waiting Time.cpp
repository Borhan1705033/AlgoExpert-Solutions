using namespace std;

int minimumWaitingTime(vector<int> queries) {
  // Write your code here.
  sort(queries.begin(),queries.end());

  int prev = 0;
  int sum = 0;

  for(int i=0;i<queries.size()-1;i++)
    {
      int curr = prev + queries[i];
      sum = sum + curr;
      prev = curr;
    }
  return sum;
}

