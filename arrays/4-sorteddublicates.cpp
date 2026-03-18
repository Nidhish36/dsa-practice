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

    int i = 0;

    for( int j=i;j<n;j++)
    {
        if(a[j]!=a[i])
        {
            i++;
            a[i]=a[j];
        }
    }
    cout<<"the sorted n cleaned array is "<<endl;
    for(int j=0;j<i+1;j++)
    {
        cout<<a[j]<<endl;
    }
    return 0 ;
}
