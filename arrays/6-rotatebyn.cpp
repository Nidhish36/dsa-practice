#include<iostream>
#include<vector>
using namespace std;
int reverse(vector<int> &a,int s,int n)
{   int i =s;
    int j=n;
    int temp;
    while(i<j)
    {
        temp =a[i];
        a[i]=a[j];
        a[j] =temp;
        i++;
        j--;
    }
    return 0;
}
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
    int k;
    cout<<"enter the number of rotations"<<endl;
    cin>>k;
    k=k%n;
    reverse(a,0,k-1); //left rotation
    reverse(a,k,n-1);
    reverse(a,0,n-1);
    cout<<"the array after the rotation is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}