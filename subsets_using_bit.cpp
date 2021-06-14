#include<iostream>

using namespace std;

int subsets(int n, int arr[])
{
    for (int i = 0; i < (1 << n); i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] <<" ";
            }
        }
        cout <<endl;
    }
    return 0;
}

int main()
{
    int n = 4;
    int arr[4] = {1, 2, 3, 4};
    subsets(4, arr);

    return 0;
    
}