#include <bits/stdc++.h>
using namespace std;
void find(int i,int arr[],vector<int>& ds,int n)
{
    if(i==n)
    {
        for(auto it:ds)
        cout<<it<<" ";
        if(ds.size()==0)
        cout<<"{}";
        cout<<endl;
        return;
    }
    ds.push_back(arr[i]);//take or pick the particular index into the subsequence.
    find(i+1,arr,ds,n);//not pick or not take condition , this element is not added into your subsequence.
    ds.pop_back();
    find(i+1,arr,ds,n);
}
int main()
{
    int arr[]={3,1,2};
    vector<int> ds;
    find(0,arr,ds,3);
    return 0;
}
