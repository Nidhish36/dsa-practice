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
    int k;
    int flag = 0;
    cout<<"enter the elements which u wanna search"<<endl;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            flag =1;
            break;
        }
    }
    if(flag)
    {
        cout<<"the entered element is present in the array"<<endl;
    }
    else
    {
        cout<<"the entered element is not present in the array"<<endl;

    }
    return 0;
}