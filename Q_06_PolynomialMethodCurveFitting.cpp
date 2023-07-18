#include <bits/stdc++.h>
using namespace std;

class polynomialCurveFitting{
    public:
    int n;
    double x[100], y[100];
    double a0, a1, a2;
    polynomialCurveFitting(){
        cout << "Enter the number of data points : ";
        cin >> n;
        cout << "Enter the data points : " << endl;
        for(int i = 0; i < n; i++){
            cin >> x[i] >> y[i];
        }
    }
    void solve(){
        double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumX3 = 0, sumX4 = 0, sumX2Y = 0;
        for(int i = 0; i < n; i++){
            sumX += x[i];
            sumY += y[i];
            sumXY += x[i]*y[i];
            sumX2 += x[i]*x[i];
            sumX3 += x[i]*x[i]*x[i];
            sumX4 += x[i]*x[i]*x[i]*x[i];
            sumX2Y += x[i]*x[i]*y[i];
        }
        double A[3][3] = {{n, sumX, sumX2}, {sumX, sumX2, sumX3}, {sumX2, sumX3, sumX4}};
        double B[3][1] = {{sumY}, {sumXY}, {sumX2Y}};
        double C[3][1] = {{0}, {0}, {0}};
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 1; j++){
                for(int k = 0; k < 3; k++){
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        a0 = C[0][0];
        a1 = C[1][0];
        a2 = C[2][0];
        cout << "a0 : " << a0 << ", a1 : " << a1 << ", a2 : " << a2 << endl;
    }
};
int main(){
    polynomialCurveFitting cls = polynomialCurveFitting();
    cls.solve();

    return 0;
}
/*
Question: Implement polynomial curve fitting method.
We know that,
y = a0 + a1*x + a2*x^2 + ...
where, a0, a1, a2, ... are the coefficients of the polynomial.

Example:
Enter the number of data points : 5
Enter the data points :
0 1
1 2
2 3
3 4
4 5
a0 : 1, a1 : 1, a2 : 1
*/