#include <bits/stdc++.h>
using namespace std;

void passByRef(int arr[], int n)
{
    arr[0] += 35;
    cout << "Value inside the void fxn " << arr[0] << "\n";
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    passByRef(arr, n);

    cout << "Value inside the main function " << arr[0] << endl;

    /* zero based indexing
    int arr[5];
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }

    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    */
    return 0;
}