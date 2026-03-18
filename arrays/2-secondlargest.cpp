#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n ; 
    int* a = new int[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    int l1,l2,s1,s2;

    s1 = INT_MAX;
    s2 = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i] < s1)
        {
            s2=s1;
            s1=a[i];
        }
        else if(a[i]<s2&& a[i]>s1)
        {
            s2= a[i];
        }
    }
    cout<<"the smallest element is "<<s1<<"the second smallest is "<<s2<<endl;
    return 0 ;
}