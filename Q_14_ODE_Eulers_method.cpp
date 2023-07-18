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
/*
    Ques:
    You will be given an equation in this format:
    dy/dx = f(x, y) or
    dy/dx = x^2 + 2xy + y^2 or 
    f(x,y) = x^2 + 2xy + y^2

    and y(0) = 5, what is y(0.5) = ?

    Solve:
    We know that , y0 = 5
    So, y(0+h) = x0 + h*f(x0, y0)  [h is a small value]
    Let, h = 0.01
    Now, y(0+0.01) = 5 + 0.001*f(0, 5) = 5.05
        y(0.02) = 5.05 + 0.001*f(0.01, 5.05) = 5.101
        we will continue this to get y(0.5).
*/