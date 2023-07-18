#include <bits/stdc++.h>
using namespace std;

// F(x) = x^3 - 4x - 9
double f(double x){
    return pow(x, 3) - 4*x - 9;
}
class Bisection{
    public:
    double a, b;
    Bisection(){
        srand(time(0));
        a = rand()%10;
        b = rand()%10;
        while(1){
            if(a != b) break;
        }
    }
    void solve(){
        double precision = 0.001;
        double root;
        while(1){
            root = (a + b)/2;
            if(f(a)*f(root) < 0) b = root;
            else a = root;
            if(abs((b - a)/b) < precision) break;
        }
        cout << "Root : " << root << endl;
    }
};
int main(){
    Bisection cls = Bisection();
    cls.solve();

    return 0;
}
/*
Question: Implement bisection method.
We know that,
x2 = (a + b)/2
where, x2 is the next approximation, a and b are the current approximations.
Example:
Root : 2.08008
*/