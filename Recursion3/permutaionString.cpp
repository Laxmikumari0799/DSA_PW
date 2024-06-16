#include<bits/stdc++.h>
using namespace std;
void permutaion(string ans,string original)
{
    if(original=="")
    {
cout<<ans<<endl;
return;
    }
for(int i=0;i<original.length();i++)
{
    char ch=original[i];
    string left=original.substr(0,i);
    string right=original.substr(i+1);
    permutaion(ans+ch,left+right);
}
}
int main()
{
    string str="abc";
    permutaion("",str);
    //cout<<str.substr(1,2); //(a,b) a is starting idx ->inclusive
    //c ka idx hai 2,string len=5(0-4)
    // string left=str.substr(0,2);
    // string right=str.substr(2+1);
}