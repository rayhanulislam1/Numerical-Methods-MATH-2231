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
    double x0;
    NewtonRaphson(){
        srand(time(0));
        x0 = rand()%10;
    }
    void solve(){
        double precision = 0.001;
        double x1;
        while(1){
            if(df(x0) == 0){
                cout << "Division by zero error!" << endl;
                return;
            }
            x1 = x0 - f(x0)/df(x0);
            if(abs((x1 - x0)/x1) < precision) break;
            x0 = x1;
        }
        cout << "Root : " << x1 << endl;
    }
};
int main(){
    NewtonRaphson cls = NewtonRaphson();
    cls.solve();

    return 0;
}
/*
Root : 2.08008
*/