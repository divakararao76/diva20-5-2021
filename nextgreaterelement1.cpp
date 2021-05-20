#include<iostream>
using namespace std;
int main()
{
    int n,j,next;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];
    for (i = 0; i < n; i++)
    {
        next = -1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                next = a[j];
                break;
            }
        }
        cout << next << " ";
    }
     return 0;
}
