#include <bits/stdc++.h>
using namespace std;

// F(x) = x^3 - 4x - 9
double f(double x){
    return pow(x, 3) - 4*x - 9;
}
double df(double x){
    return 3*pow(x, 2) - 4;
}
class NewtonRaphson{
    public:
    double a;
    NewtonRaphson(){
        srand(time(0));
        a = rand()%10;
    }
    void solve(){
        double precision = 0.001;
        double root = a - (f(a)/df(a));
        double x = root;
        while(1){
            root = root - (f(root)/df(root));
            cout << "Root : " << root << ", X : " << x << endl;
            if(abs((root - x)/root) < precision) break;
            x = root;
        }
        cout << "Root : " << root << endl;
    }
};
int main(){
    NewtonRaphson cls = NewtonRaphson();
    cls.solve();

    return 0;
}