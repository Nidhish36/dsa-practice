#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int breaks = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i]>a[(i+1)%n])
        {
            breaks++;
        }
    }
    if(breaks>1)
    {
        cout<<"the entered array is not sorted and rotated"<<endl;
    }
    else
    {
        cout<<"the entered array is sorted and rotated"<<endl;
    }

    return 0;


}
