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
    int x=0;
    for(int i=0;i<n+1;i++)
    {
      x= x^i;  
    }
    for(int i=0;i<n;i++)
    x= x^a[i];
    cout<<"the5 missing number is"<<x<<endl;
    return 0;
}