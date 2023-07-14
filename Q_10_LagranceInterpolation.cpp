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

void LagranceInterpolation()
{
    vector<double>x(100),y(100),p(100),diff(100);
    double X,f2=0,u,h;
    int n;
    newline;
    cout << "Enter the number of Observation: ";cin >> n;
    newline;
    cout << "Enter the values of x and f(x): \n";
    for(int i=1;i<=n;i++)
    {
        cin >> x[i] >> y[i];
    }
    cout<<"\nEnter the value of x at which you want to interpolate: ";
    cin >> X;
    double ans = 0;
    double C= 1;
    for(int i=1;i<=n;i++)
    {
        C*=(X-x[i]);
    }
    for(int i=1;i<=n;i++)
    {
        double tem = C/(X-x[i]);
        for(int j=1;j<=n;j++)
        {
            if(j!=i)
            {
                tem/=(x[i]-x[j]);
            }
        }
        ans+=tem*y[i];
    }
    cout << "f(" << X << ") = " << ans << endl;
}

int32_t main()
{
    //first_IO;
    int test=1;
    //cin >> test;
    //cout << "Test = " << test << endl;
    //in_buffer;
    for(int t=1;t<=test;t++)LagranceInterpolation();
    goto_hell;
}


/*#include <bits/stdc++.h>

using namespace std;

class Lagrange {

public:

    void solve() {

        double x[100], y[100], xp, yp = 0.0, p;

        cout << "Enter number of data: ";
        int n;
        cin >> n;

        cout << "\nEnter data: " << endl;
        
        for(int i = 0; i < n; i++) {
            cout << "x[" << i << "] = ";
            cin >> x[i];
            cout << "y[" << i << "] = ";
            cin >> y[i];
        }

        cout << "Enter interpolation point: ";
        cin >> xp;

        // implementing lagrange interpolation
        for(int i = 0; i < n; i++) {
            p = 1;
            for(int j = 0; j < n; j++) {
                if(j != i) {
                    p = p * (xp - x[j]) / (x[i] - x[j]);
                }
            }
            yp +=( y[i]*p);
        }
 
        cout << "\n\nInterpolated Value at " << xp << " is " << yp << endl; 
    }
};

int main() {

    Lagrange lagrange;
    lagrange.solve();

    return 0;

}*/