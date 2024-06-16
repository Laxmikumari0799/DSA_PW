#include<bits/stdc++.h>
using namespace std;
void print_subset(int arr[],int n,int idx,vector<int>ans,int k)
{
    if(idx==n)
    {
        if(ans.size()==k)
        {
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }

        return;
    }
    if(ans.size()+(n-idx) < k) return;//Time complexity better ho jaegi
      //(n-idx) is the remaining length of the array
    print_subset(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    print_subset(arr,n,idx+1,ans,k);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    print_subset(arr,n,0,v,k);
}