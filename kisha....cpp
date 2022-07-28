#include <iostream>
using namespace std;

int MergeSort(int A[], int p, int r)
{

int q;






if (p < r)

{

    q = (p + r) / 2;

    MergeSort(A, p, q);

    MergeSort(A, q + 1, r);

    MergeSort(A, p, r);
}
};





int main()
{

    int n;

    cout << "Enter size of the Array: ";

    cin >> n;

    int A[n], i;

    cout << "Enter array values: \n";

    for (i = 0; i < n; i++)

        cin >> A[i];

    MergeSort(A, 0, n - 1);
    cout << "The Sorted List is\n";

    for (i = 0; i < n; i++)

    {

        cout << A[i] << " ";
    }
return 0;
}




