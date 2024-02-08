#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int size = A.size();

    // Create a vector to mark the presence of positive integers
    vector<bool> present(size + 1, false);

    // Mark the presence of positive integers in A
    for (int i = 0; i < size; ++i) {
        if (A[i] > 0 && A[i] <= size) {
            present[A[i]] = true;
        }
    }

    // Find the smallest missing positive integer
    for (int i = 1; i <= size; ++i) {
        if (!present[i]) {
            return i;
        }
    }

    // If all positive integers are present, return size + 1
    return size + 1;
}

int main() {
    vector<int> A = {1,100,101,103};
    cout << "The smallest positive integer missing from A is: " << solution(A) << endl;
    return 0;
}
