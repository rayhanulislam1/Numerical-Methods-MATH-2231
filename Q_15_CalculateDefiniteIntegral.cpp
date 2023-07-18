#include <bits/stdc++.h>
using namespace std;

class CalculateDefiniteIntegral{
    public:
    int n;
    double a, b, h, sum = 0.0, x[100], y[100];
    CalculateDefiniteIntegral(){
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
            sum += y[i];
        }
        sum = (h/2)*(y[0] + y[n]) + h*sum;
        cout << "The integral is: " << sum << endl;
    }
};
int main(){
    CalculateDefiniteIntegral cls = CalculateDefiniteIntegral();
    cls.solve();

    return 0;

}
/*
Question: Calculaton of definite integral using trapezoidal rule.
We know that,
I = (h/2)*(y0 + yn) + h*(y1 + y2 + y3 + ... + yn-1)
where, h = (b-a)/n
and n is the number of data points.
and y0, y1, y2, y3, ... yn are the data points.
Example: 
Enter the number of data points: 4
Enter the lower limit: 0
Enter the upper limit: 1
Enter the data points:
0 0
0.25 0.7071
0.5 1
0.75 0.7071
1 0
The integral is: 0.7071
*/