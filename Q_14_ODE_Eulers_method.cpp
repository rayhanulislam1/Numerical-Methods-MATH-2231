#include <bits/stdc++.h>
using namespace std;

class EulersMethod{
    public:
    double x0, y0, h, xn;
    EulersMethod(){
        cout << "Enter the initial value of x : ";
        cin >> x0;
        cout << "Enter the initial value of y : ";
        cin >> y0;
        cout << "Enter the step size : ";
        cin >> h;
        cout << "Enter the value of x for which y is required : ";
        cin >> xn;
    }
    double func(double x, double y){
        return (x+y);
    }
    void solve(){
        double y = y0;
        double x = x0;
        while(x < xn){
            y = y + h*func(x, y);
            x = x + h;
        }
        cout << "The value of y at x = " << xn << " is " << y << endl;
    }
};

int main(){
    EulersMethod cls = EulersMethod();
    cls.solve();

    return 0;

}