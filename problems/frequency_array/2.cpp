#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int solution(vector<int> &A) {
    int size = A.size();
    vector<int> exists(size + 1, 0);
    for(int  i = 0; i < size; ++i) exists[A[i]]++;
    for(int i = 1; i <= size; ++i) if(exists[i] == 0) return 0;
    return 1;
}

int main() {
    vector<int> A = {2, 3, 1, 5, 6, 7};
    cout << "The Array Permutation status is : " << solution(A) << endl;
    return 0;
}


// ChatGPT 3.5 Solution:

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    int size = A.size();

    // Create a set to check for uniqueness
    vector<bool> unique(size + 1, false);

    for (int i = 0; i < size; ++i) {
        // Check if the value is within the allowed range
        if (A[i] < 1 || A[i] > size || unique[A[i]]) {
            return 0;  // Not a valid permutation
        }
        unique[A[i]] = true;
    }

    return 1;  // Valid permutation
}

int main() {
    vector<int> A1 = {4, 1, 3, 2};
    cout << "Is A1 a permutation? " << solution(A1) << endl;  // Should output 1

    vector<int> A2 = {4, 1, 3};
    cout << "Is A2 a permutation? " << solution(A2) << endl;  // Should output 0

    return 0;
}
