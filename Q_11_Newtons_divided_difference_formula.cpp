#include <bits/stdc++.h>
using namespace std;

class DividedDifference{
    public:
    int n;
    double x[100], y[100], xp, yp = 0.0, p;
    DividedDifference(){
        cout << "Enter number of data: ";
        cin >> n;
        cout << "\nEnter data: " << endl;
        for(int i = 0; i < n; i++){
            cout << "x[" << i << "] = ";
            cin >> x[i];
            cout << "y[" << i << "] = ";
            cin >> y[i];
        }
        cout << "Enter interpolation point: ";
        cin >> xp;
    }
    void solve(){
        // implementing divided difference
        for(int i = 0; i < n; i++){
            p = 1;
            for(int j = 0; j < n; j++){
                if(j != i){
                    p = p * (xp - x[j]) / (x[i] - x[j]);
                }
            }
            yp +=( y[i]*p);
        }
        cout << "\n\nInterpolated Value at " << xp << " is " << yp << endl; 
    }

};
int main(){
    DividedDifference cls = DividedDifference();
    cls.solve();
    return 0;
}
/*
Question: Implement Newton's divided difference formula.
We know that,
y = y0 + p*(y1-y0) + p*(p-1)*(y2-2*y1+y0)/2! + p*(p-1)*(p-2)*(y3-3*y2+3*y1-y0)/3! + ...
where, p = (x-x0)/(x1-x0)
and y0, y1, y2, y3, ... yn are the data points.

Example:
Enter number of data: 4

Enter data:
x[0] = 0
y[0] = 1
x[1] = 1
y[1] = 2
x[2] = 2
y[2] = 5
x[3] = 3
y[3] = 10
Enter interpolation point: 1.5


Interpolated Value at 1.5 is 3.75
*/