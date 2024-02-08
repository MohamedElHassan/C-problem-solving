#include <iostream>
#include <vector> // Add this line to include the vector header
#include <algorithm>

using namespace std;

int solution(vector<int> &A)
{
  int exists[100000 + 9] = {0};
  const size_t size = A.size();

  for (size_t i = 0; i < size; ++i)
  {
    exists[A[i]]++;
  }
  for (int i = 1; i <= size; ++i)
  {
    if (exists[i] == 0)
    {
      return i;
    }
  }

  return -1;
}

int main()
{
  vector<int> A = {2, 3, 1, 5, 6, 7};
  cout << "Missing element: " << solution(A) << endl;
  return 0;
}
