/*
Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.
*/

#include<iostream>
using namespace std;
void differencecount(int arr[],int key,int array_size)
{
    int c=0;
    for(int i=0;i<array_size;i++)
    {
      for(int j=i+1;j<array_size;j++)
        {
        if(arr[i]>arr[j])
        {
            if(arr[i]-arr[j]==key)
            {
                c++;
            }
        }
        else
        {
            if(arr[j]-arr[i]==key)
            {
                c++;
            }
        }
        }
    }
    cout<<c<<endl;
}
int main()
{
    int arr[100],array_size,testcase,key;
    cout<<"Input test case"<<endl;
    cin>>testcase;
    while(testcase--)
    {
        cout<<"Input array size"<<endl;
        cin>>array_size;
        cout<<"Input array elements"<<endl;
        for(int i=0;i<array_size;i++)
        {
            cin>>arr[i];
        }
        cout<<"Input key to search"<<endl;
        cin>>key;
        differencecount(arr,key,array_size);
    }
}
