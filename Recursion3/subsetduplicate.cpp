#include<bits/stdc++.h>
using namespace std;
void storesubset(string str, string v,vector<string>&ans,bool flag)
{
  if(str.length()==0) 
  {
    ans.push_back(v);
    return;
  }
   char ch=str[0];
  if(str.length()==1) 
  {
    storesubset(str.substr(1),v,ans,true);
  storesubset(str.substr(1),v+ch,ans,true);
  return; //taki niche ke do conditions na chale 
  }
 char dh=str[1];
 if(ch==dh) //duplicate
 {
 if(flag==true) storesubset(str.substr(1),v,ans,true);
storesubset(str.substr(1),v+ch,ans,false);
 }
else{//no duplicate
   if(flag==true) storesubset(str.substr(1),v,ans,true);
  storesubset(str.substr(1),v+ch,ans,true);
}
}
int main()
{
    string str="aabc";
    //printsubset("",str);
    vector<string>ans;
    string v="";
    bool flag=true;
    storesubset(str,v,ans,true);
//   for(auto ele:ans)
//   {
//     cout<<ele<<" ";
//       cout<<endl;
//   }

}