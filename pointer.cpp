#include<iostream>

using namespace std;
int main()
{
    int *p, i, n;
    cout<<"Enter no of elements in array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    p = arr;
    for(i=0;i<n;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
