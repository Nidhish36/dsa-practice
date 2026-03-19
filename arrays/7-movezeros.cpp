#include<iostream>
#include<vector>
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
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]!=0)
        {
            swap(a[i],a[j]);
            i++;
        }
    }
    cout<<"the array after the operation"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    return 0;
}