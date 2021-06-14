#include<iostream>

using namespace std;

int no_of_ones(int n)
{
    int count = 0;
    while(n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << no_of_ones(2) <<endl;

    int k = 1 & (1 << 1);
    cout << k << endl;

    return 0;
}