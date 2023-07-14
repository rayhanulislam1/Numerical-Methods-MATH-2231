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

double f(double x)
{
    return x*exp(x)-1;
}

double eps = 1e-5;

void guess(int &a,int &b)
{
    a=rand()%10;
    b=rand()%10;
}

double inf = 1e18;
double infM = -1e18;

double secandMethod(double a,double b)
{
    double root;
    while(abs(b-a)>eps)
    {
        root = a*f(b)-b*f(a);
        if(abs(f(b)-f(a))==0)return b;
        root = root/(f(b)-f(a));
        if(f(root)==0)return root;
        cout << "a = " << a <<  " b = " << b << " f(a) = " << f(a) << " f(b)= " << f(b) << " root = " << root << endl;
        a = b;
        b = root;
    }
    return root;
}

void solve()
{
    int a,b;
    cin >> a >> b;
    //guess(a,b);
    double res = secandMethod(a,b);
    cout << res << endl;
}

int32_t main()
{
    //first_IO;
    int test=1;
    //cin >> test;
    //cout << "Test = " << test << endl;
    //in_buffer;
    for(int t=1;t<=test;t++)solve();
    goto_hell;
}