#include<bits/stdc++.h>
#include <cstdio>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define f0(i,n) for(int i=0;i<=n;i++)
#define first_IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define in_buffer cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define ordered_set tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define ll long long
#define zero (int)0
#define int long long
#define double long double
#define pb push_back
#define goto_hell return 0
#define newline cout  << "\n"
#define endl "\n"
using namespace __gnu_pbds;
using namespace std;

void CurveFitting()
{
    vector<double>x(100),y(100);
    int n;
    newline;
    cout << "Enter the number of Observation: ";cin >> n;
    newline;
    cout << "Enter the values of Xi and Yi: \n";
    for(int i=0;i<n;i++)
    {
        cin >> x[i] >> y[i];
    }
    double a=n,b=0,c=0,p=0,q=0,r=0;
    for(int i=0;i<n;i++)
    {
        b+=x[i];
        c+=y[i];
        q+=x[i]*x[i];
        r+=x[i]*y[i];
    }
    p = b;
    double a0,a1;
    if((a*q-b*p)==0)
    {
        cout << "Equations Are Identical.. Sorry We can't find any Single solution.\n";
        return;
    }
    a0 = (b*r-c*q)/(b*p-a*q);
    a1 = (c*p-a*r)/(b*p-a*q);
    newline;
    cout << "a0 = " << a0 << "  & a1 = " << a1 << endl;
}
int32_t main()
{
    //first_IO;
    int test=1;
    //cin >> test;
    //cout << "Test = " << test << endl;
    //in_buffer;
    for(int t=1;t<=test;t++)CurveFitting();
    goto_hell;
}