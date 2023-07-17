#include <bits/stdc++.h>
using namespace std;

// F(x) = x^3 - 4x - 9
double f(double x){
    return pow(x, 3) - 4*x - 9;
}
class Bisection{
    public:
    void solve(){
        double a, b;
        cin >> a >> b;
        double precision = 0.001;
        double root = (a+b)/2;
        double x = root;
        while(1){
            if(f(a) * f(b)== 0) break;
            else if(f(a) * f(b) > 0) a = root;
            else b = root;
            root = (a+b)/2;
            if(abs((root - x)/root) < precision) break;
            x = root;
        }
        cout << "Root : " << root << endl;
    }
};
int main(){
    Bisection cls = Bisection();
    cls.solve();

    return 0;
}