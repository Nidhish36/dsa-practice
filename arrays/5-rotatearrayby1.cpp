#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"enter the array elemenets"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f = a[0];
    for(int i =1;i<n;i++)
    {
        a[i-1]= a[i];
    }
    a[n-1] = f;
    cout<<"the array after rotation is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;

}