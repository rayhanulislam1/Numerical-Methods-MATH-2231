#include <bits/stdc++.h>
using namespace std;

// F(x) = x^3 - 4x - 9
double f(double x){
    return pow(x, 3) - 4*x - 9;
}
class NewtonRaphson{
    public:
    double x0, x1;
    NewtonRaphson(){
        srand(time(0));
        x0 = rand()%10;
        x1 = rand()%10;
        while(1){
            if(x0 != x1) break;
        }
    }
    void solve(){
        double precision = 0.001;
        double x2;
        while(1){
            if(x0 == x1){
                cout << "Division by zero error!" << endl;
                return;
            }
            x2 = x1 - (f(x1)*(x1 - x0))/(f(x1) - f(x0));
            if(abs((x2 - x1)/x2) < precision) break;
            x0 = x1;
            x1 = x2;
        }
        cout << "Root : " << x2 << endl;
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