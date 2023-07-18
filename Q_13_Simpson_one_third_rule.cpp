#include <bits/stdc++.h>
using namespace std;

class SimpsonsOneThirdRule{
    public:
    int n;
    double a, b, h, sum = 0.0, x[100], y[100];
    SimpsonsOneThirdRule(){
        cout << "Enter the number of data points: ";
        cin >> n;
        cout << "Enter the lower limit: ";
        cin >> a;
        cout << "Enter the upper limit: ";
        cin >> b;
        h = (b-a)/n;
        cout << "Enter the data points: " << endl;
        for(int i = 0; i < n+1; i++){
            cin >> x[i] >> y[i];
        }
    }
    void solve(){
        for(int i = 1; i < n; i++){
            if(i%2 == 0){
                sum += 2*y[i];
            }
            else{
                sum += 4*y[i];
            }
        }
        sum = (h/3)*(y[0] + y[n]) + h*sum;
        cout << "The integral is: " << sum << endl;
    }
};

int main(){
    SimpsonsOneThirdRule cls = SimpsonsOneThirdRule();
    cls.solve();

    return 0;

}
/*
    Ques:
    You will be given a set of data points and you have to find the integral of the curve using Simpson's 1/3rd rule.
    ans:
    We know that,
    I = (h/3)*(y0 + yn) + h*(y1 + y3 + y5 + ... + yn-1)
    where, h = (b-a)/n
    and n is the number of data points.
    and y0, y1, y2, y3, ... yn are the data points.

    Example:
    Enter the number of data points: 6
    Enter the lower limit: 0
    Enter the upper limit: 1
    Enter the data points:
    0 0
    0.2 0.064
    0.4 0.128
    0.6 0.192
    0.8 0.256
    1 0.32
    The integral is: 0.213333
*/