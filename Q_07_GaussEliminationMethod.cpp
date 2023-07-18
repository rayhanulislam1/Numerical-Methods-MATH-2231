#include <bits/stdc++.h>
using namespace std;

class gaussElimination{
    public:
    int n;
    double a[100][101];
    gaussElimination(){
        cout << "Enter the number of equations: ";
        cin >> n;
        cout << "Enter the coefficients of the equations: " << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n+1; j++){
                cin >> a[i][j];
            }
        }
    }
    void solve(){
        // Gauss elimination
        for(int i = 0; i < n-1; i++){
            if(a[i][i] == 0){
                cout << "Invalid" << endl;
                return;
            }
            for(int j = i+1; j < n; j++){
                double ratio = a[j][i]/a[i][i];
                for(int k = 0; k < n+1; k++){
                    a[j][k] -= (ratio*a[i][k]);
                }
            }
        }
        // Back substitution
        double x[100];
        x[n-1] = a[n-1][n]/a[n-1][n-1];
        for(int i = n-2; i >= 0; i--){
            x[i] = a[i][n];
            for(int j = i+1; j < n; j++){
                x[i] -= (a[i][j]*x[j]);
            }
            x[i] = x[i]/a[i][i];
        }
        // Display the values of x
        for(int i = 0; i < n; i++){
            cout << "x[" << i << "] = " << x[i] << endl;
        }
    }
};
int main(){
    gaussElimination cls = gaussElimination();
    cls.solve();
    
    return 0;
}
/*
Question: Implement Gauss elimination method.
We know that,
x1 = (a11x1 + a12x2 + a13x3 + ... + a1nxn + b1)/a11
x2 = (a21x1 + a22x2 + a23x3 + ... + a2nxn + b2)/a22
x3 = (a31x1 + a32x2 + a33x3 + ... + a3nxn + b3)/a33
...
xn = (an1x1 + an2x2 + an3x3 + ... + annxn + bn)/ann
where, a11, a12, a13, a14, ... a1n, b1 are the coefficients of the equations.
and a21, a22, a23, a24, ... a2n, b2 are the coefficients of the equations.
and a31, a32, a33, a34, ... a3n, b3 are the coefficients of the equations.
...
and an1, an2, an3, an4, ... ann, bn are the coefficients of the equations.
and x1, x2, x3, x4, ... xn are the values of the variables.

Example:
2x + y - z = 8
-3x - y + 2z = -11
-2x + y + 2z = -3
Enter the number of equations: 3
Enter the coefficients of the equations:
2 1 -1 8
-3 -1 2 -11
-2 1 2 -3
Solution:
x[1] = 2.00
x[2] = 3.00
x[3] = -1.00
*/