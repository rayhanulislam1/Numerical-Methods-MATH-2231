#include <bits/stdc++.h>
using namespace std;

class NewtonForwardInterpolation{
    public:
    int n;
    double x[100], y[100][100];
    NewtonForwardInterpolation(){
        cout << "Enter the number of data points : ";
        cin >> n;
        cout << "Enter the data points : " << endl;
        for(int i = 0; i < n; i++){
            cin >> x[i] >> y[i][0];
        }
    }
    void solve(){
        // creating forward difference table
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n-1; j++){
                y[j][i] = y[j+1][i-1] - y[j][i-1];
            }
        }
        // displaying forward difference table
        cout << "\n\nFORWARD DIFFERENCE TABLE\n\n";
        for(int i = 0; i < n; i++){
            cout << x[i];
            for(int j = 0; j < n-i; j++){
                cout << "\t" << y[i][j];
            } cout << endl;
        }
        cout << "Enter the value of where find the interpolation: ";
        double xx;
        cin >> xx;
        // step size
        double h = x[1] - x[0];
        double p = (xx - x[0]) / h;

        double yy = 0.0;
        double pp = p;
        yy = y[0][0] + p*y[0][1];
        double fact = 1;
        for(int i = 2; i < n; i++){
            
            pp = pp*(p-(i-1));
            fact = fact*i;

            yy += (pp*y[0][i]) / fact;
            cout << "p = "<< pp << endl;
            cout << "fact = "<< fact << endl;

        }

        cout << "\n\nResult: " << yy << endl << endl;
    }
};
int main(){
    NewtonForwardInterpolation cls = NewtonForwardInterpolation();
    cls.solve();

    return 0;
}

/*
Question: Implement Newton's forward interpolation.
We know that,
y = y0 + p*(y1-y0) + p*(p-1)*(y2-2*y1+y0)/2! + p*(p-1)*(p-2)*(y3-3*y2+3*y1-y0)/3! + ...
where, p = (x-x0)/(x1-x0)
and y0, y1, y2, y3, ... yn are the data points.

Example:
Enter the number of data points : 4
Enter the data points :
0 1
1 2
2 5
3 10


FORWARD DIFFERENCE TABLE

0       1       1       3       6
1       2       3       6
2       5       9
3       10
Enter the value of where find the interpolation: 1.5
p = 0.5
fact = 2
p = -0.5
fact = 6


Result: 3.75
*/