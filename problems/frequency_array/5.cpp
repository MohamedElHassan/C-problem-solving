#include <iostream>
#include <vector>
#define max(a,b)    (((a) > (b))? (a) : (b))
using namespace std;

int solution(int X, vector<int> &A) {
    int size = A.size();
    for (int i = 0; i <= size; ++i) {
        if (A[i] == X) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> A = {1, 3, 1, 4, 2, 3, 5, 4};
    cout << "Answer: " << solution(5 ,A) << endl;
    return 0;
}

// --------



int solution(int X, int A[], int N)
{
    int falltime[X+1];

    for(int i = 1; i <= X; i++)
    {
        falltime[i] = -1;
    }

    for(int i = N-1; i >= 0; i--)
    {
        falltime[A[i]] = i;
    }

    int arrivaltime = falltime[1];

    for(int i = 1; i <= X; i++)
    {
        if(falltime[i] == -1)   return -1;

        arrivaltime = max(arrivaltime, falltime[i]);
    }

    return arrivaltime;
}
