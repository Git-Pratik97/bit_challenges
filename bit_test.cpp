#include<iostream>

using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < (1 << n); i++)
    {
        cout << i <<endl;
        for(int j = 0; j < n; j++)
        {
            int k = i & (1 << j);
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}