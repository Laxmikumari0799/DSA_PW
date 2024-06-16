#include <iostream>
using namespace std;
float powerlog(float a, int b)
{
    if(b==0) return 1;
    if(b==1) return a;
   float ans= powerlog(a,b/2);
    if(b%2==0) return ans*ans;
    if(b%2!=0) return ans*ans*a;
}
int main()
{
    float a;
    cin >> a;
    int b;
    cin >> b;
    cout << powerlog(a, b);
}