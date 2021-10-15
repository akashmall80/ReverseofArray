//Array Reverse
//We are given an array and want to reverse all the elements of array.
//{10,20,30,45,60,80,90}
//2 approaches
//1).Print all the element in reverse
//2).reverse the starting and ending element in an array and increase s and decrease e.
//{10,20,30,45,60,80,90}
//10 is starting and 90 is ending
//{90,20,30,45,60,80,10}
//starting becomes 20 and ending becomes 80 reverse it and so on
#include<iostream>
using namespace std;
int main()
{

    int arr[]={10,20,30,45,60,90};
    int n=sizeof(arr)/sizeof(int);
    int s=0;
    int e=n-1;
    cout<<"Before Reverse:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //doing the reverse
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<"After Reverse:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
