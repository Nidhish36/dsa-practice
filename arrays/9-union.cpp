#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the size of the  first array"<<endl;
    cin>>n;
    cout<<"enter the size of the second array"<<endl;
    cin>>m;
    vector<int> a(n);
    vector<int> b(m);
    cout<<"enter the elements of the first array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the elements of the second array"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    vector<int> c;
    int i = 0;
    int j = 0;
    while(i<n&&j<m)
    {   
        if(a[i]<b[j])
        {
            if(c.size()==0||c.back() != a[i])
            {
                c.push_back(a[i]);
                
            }
            i++;

        }
        else if (b[j]<a[i])
        {
            if(c.size()==0||c.back() != b[j])
            {
                c.push_back(b[j]);
                
            }
            j++;

        }
        else if (a[i]==b[j])
        {
            if(c.size()==0||c.back() != b[j])
            {
                c.push_back(b[j]);
              
            }
            i++;
            j++;
        }   
    }
    
    
    while(i!=n)
    {
         if(c.size()==0||c.back() != a[i])
            {
                c.push_back(a[i]);
            }
            i++;
    }
    while(j!=m)
    {
         if(c.size()==0||c.back() != b[j])
            {
                c.push_back(b[j]);
                
            }
            j++;

    }
    cout<<"the union of the entered arrays is "<<endl;
    for(int i=0;i<c.size();i++)
    {
        cout<<c[i];
    }
    return 0;
}