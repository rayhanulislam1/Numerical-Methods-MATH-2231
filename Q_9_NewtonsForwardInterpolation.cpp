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

void newton_Forward_Interpolation()
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
    h=x[2]-x[1];
    u=(X-x[1])/h;
    int nn=n;
    double ans= y[1];
    cout << fixed << setprecision(4);
    cout << "Forward Difference table\n";
    int cnt = 1;
    while(nn>1)
    {
        cout << "Del(y)";if(cnt>1)cout << "^"<<cnt;cout << endl;
        cout << "-------\n";
        vector<double>tem(nn);
        for(int i=1;i<nn;i++)
        {
            tem[i]=y[i+1]-y[i];
            cout << tem[i] << endl;
            y[i]=tem[i];
        }
        diff[cnt]=tem[1];
        nn--;
        cnt++;
        newline;
    }
    double df = u;
    int fact = 1;
    for(int i=1;i<n;i++)
    {
        ans+=df*diff[i];
        u-=1.0;
        df*=u;
        fact*=(i+1);
        df/=fact;
    }
    cout << "f("<< X << ") = " << ans << endl;
}

int32_t main()
{
    //first_IO;
    int test=1;
    //cin >> test;
    //cout << "Test = " << test << endl;
    //in_buffer;
    for(int t=1;t<=test;t++)newton_Forward_Interpolation();
    goto_hell;
}


/*#include <bits/stdc++.h>

using namespace std;

class NewtonsForwardDifferenceFormula {

public:

    void solve() {
        double x[100], y[100][100];
        
        int n;
        cout << "Number of data: ";
        cin >> n;

        cout << "Enter data: " << endl;

        for(int i = 0; i < n; i++) {
            cout << "x[" << i << "] = ";
            cin >> x[i];
            cout << "y[" << i << "] = ";
            cin >> y[i][0];
        }

        // creating forward difference table

        for(int i = 1; i < n; i++) {
            for(int j = 0; j < n-1; j++) {
                y[j][i] = y[j+1][i-1] - y[j][i-1];
            }
        }

        // displaying forward difference table
        cout << "\n\nFORWARD DIFFERENCE TABLE\n\n";
        for(int i = 0; i < n; i++) {
            cout << x[i];
            for(int j = 0; j < n-i; j++) {
                cout << "\t" << y[i][j];
            } cout << endl;
        }
        cout << "Enter the value of where find the interpolation: ";
        double xx;
        cin >> xx;
        // step size
        double h = x[1] - x[0];
        double p = (xx - x[0]) / h;

        double yy = 0.0;
        double pp = p;
        yy = y[0][0] + p*y[0][1];
        double fact = 1;
        for(int i = 2; i < n; i++) {
            
            pp = pp*(p-(i-1));
            fact = fact*i;

            yy += (pp*y[0][i]) / fact;
            cout << "p = "<< pp << endl;
            cout << "fact = "<< fact << endl;

        }

        cout << "\n\nResult: " << yy << endl << endl;
    }

};


int main() {

    NewtonsForwardDifferenceFormula nfd;
    nfd.solve();

    return 0;

}*/