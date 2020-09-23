#include <iostream>

using namespace std;

int main()
{
    long long int n;
    long long int p, nap, razem;
    p=0;
    cin >> n;
    nap=1;
    razem=0;
    for (int i=0;razem<n;i++)
    {
        nap=nap+1;
        razem=razem+nap;
        p=p+1;
    }
    cout << p;
    return 0;
}
