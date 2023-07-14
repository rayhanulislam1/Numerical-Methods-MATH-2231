/*Implement Raphson Method*/
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
#include <bits/stdc++.h>
#include<vector>
using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define int ll
#define ld long double
#define pb push_back
#define mp make_pair
#define ft front()
#define bk back()
#define pi 2*acos(0.0)     /// acos(-1) , 3.14159265359
#define gap ' '
#define en '\n'
#define endl en
#define sz(x) (int)(x.size())
#define mem(a, b) memset(a, b, sizeof(a))
#define sor(x)  sort(x.begin(), x.end())

#ifdef TESLA
#include "main.hpp"
#else
#define dbg(...)
#endif
//dbug(), watch(), output_run_time()
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rng(x,y) uniform_int_distribution<int>(x,y)(rng)
#define F0R(i,a,b) for (int i = (a); i < (b); ++i)
#define FOR(i,a) F0R(i,0,a)
#define R0F(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define ROF(i,a) R0F(i,0,a)
#define each(a,x) for (auto& a: x)
const int MOD = 1e9+7; // 998244353;
const int MAX = 2e5+5;
const int N = 1005;

double f(double x){
    return x*x*x - x*x + 2;
}
double df(double x){
    return 3*x*x - 2*x;
}
void newtonRaphson(double x){
    double h = f(x) / df(x);
    while (abs(h) >= 0.0001)
    {
        h = f(x) / df(x);
        x = x - h;
    }
    cout << "The value of the root is : " << x;
}
void solve(int tt){
    double x0 = -20; // Initial guess
    newtonRaphson(x0);
    
}
int32_t main(){
    #ifndef DEBUG
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    #endif
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++){
        solve(i);
    }
    return 0;
}


/*#include <bits/stdc++.h>

using namespace std;

#define ep_s 0.0001
#define total_steps 100

class Newton_Raphson {

public:

    double f(double x) { // original polynomial
        return (x*x*x + x*x - 1);
    }

    double df(double x) { // derivative function
        return (3*x*x + 2*x);
    }

    void solve() {
        
        srand(int(time(0)));

        double prev_root;

        while(true) {
            prev_root = -9 + rand()%10;
            if(df(prev_root) != 0) break;
        }
        double root;

        int step = 0;

        while(true) {

            double fx = f(prev_root);
            double dfx = df(prev_root);

            root = prev_root - (fx / dfx);  // finding the new root

            if(f(root) == 0.0) break;

            double ep_a = abs((root - prev_root)/root);  // finding the absolute relative apprx error

            if(ep_a < ep_s) {
                break;
            }

            cout << "Iteration-" << ++step << ":\t x = "<< setw(10) << root <<" and f(x) = " << setw(10) << f(root) << endl;

            prev_root = root;

            if(step > total_steps) {
                cout << "non convergent.." << endl;
                return;
            }
        }

        cout << "the value of the root is: " << root << endl;
    }
};



int main() {

    double x = -20.0;

    Newton_Raphson newton_raphson = Newton_Raphson();

    newton_raphson.solve();

    return 0;

}*/