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
    int k = 0;
    for(int i=0;i<n;i++)
    {
        k = k^a[i];
    }
    cout<<"the number which appears only once is"<<k<<endl;
    return 0;

}