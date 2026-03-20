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
    for(int i  = 0 ; i < n;i++)
    {cin>>a[i];
    }
    int max = 0;
    int curr = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            curr++;
            if(curr>max)
            {
                max = curr;
            }
        }
        else{
            curr = 0;
        }
    }
    cout<<"the max consecutive ones r "<<max<<endl;
    return 0;
}