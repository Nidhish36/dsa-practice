# Difficulty: Easy
# Topic: Arrays
# Problem: find largest number 
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int* a = new int[n];
    cout<<"enter the array elements"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>> a[i];
    }
    int largest=0;
    for(int i =0;i<n;i++)
    {
        if(a[i]>=a[largest])
        {
            largest =i;
        }
    }
    cout<<"the largest element among the  array is "<<a[largest];
    return 0 ;
}