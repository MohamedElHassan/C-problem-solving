#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // Add this line to include the numeric header

int solution(std::vector<int> &A)
{
  const size_t size = A.size();

  // Calculate the expected sum of elements from 1 to (N+1)
  long long expectedSum = (size + 1LL) * (size + 2LL) / 2LL;

  // Calculate the actual sum of elements in the array
  long long actualSum = std::accumulate(A.begin(), A.end(), 0LL);

  // The missing element is the difference between expected and actual sum
  return static_cast<int>(expectedSum - actualSum);
}

int main()
{
  // Example test case
  std::vector<int> A = {2, 3, 1, 5, 6, 8, 4};
  std::cout << "Missing element: " << solution(A) << std::endl;

  return 0;
}
