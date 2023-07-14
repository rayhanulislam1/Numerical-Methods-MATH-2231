#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100;

/*
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

void gauss_elimination(double a[][MAX_SIZE], double b[], int n) {
    // forward elimination
    for(int i=1; i<=n; i++) {
        // pivoting
        int max_row = i;
        for(int j=i+1; j<=n; j++) {
            if(fabs(a[j][i]) > fabs(a[max_row][i])) {
                max_row = j;
            }
        }
        if(max_row != i) {
            swap(a[i], a[max_row]);
            swap(b[i], b[max_row]);
        }
        // elimination
        for(int j=i+1; j<=n; j++) {
            double factor = a[j][i] / a[i][i];
            for(int k=i+1; k<=n; k++) {
                a[j][k] -= factor * a[i][k];
            }
            b[j] -= factor * b[i];
        }
    }
    // backward substitution
    for(int i=n; i>=1; i--) {
        for(int j=i+1; j<=n; j++) {
            b[i] -= a[i][j] * b[j];
        }
        b[i] /= a[i][i];
    }
}

int main() {
    int n;
    double a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE];
    cout << "Enter the number of equations: ";
    cin >> n;
    cout << "Enter the coefficients of the equations:" << endl;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin >> a[i][j];
        }
        cin >> b[i];
    }
    gauss_elimination(a, b, n);
    cout << "Solution:" << endl;
    for(int i=1; i<=n; i++) {
        cout << "x[" << i << "] = " << fixed << setprecision(2) << b[i] << endl;
    }
    return 0;
}


/*
#include <bits/stdc++.h>

using namespace std;

class GaussElimination {
    public:
    void solve() {

        int n;
        cin >> n;

        double a[100][101];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n+1; j++) {
                cin >> a[i][j];
            } 
        }

        // Gauss elimination

        for(int i = 0; i < n-1; i++) {

            if(a[i][i] == 0) {
                cout << "Invalid" << endl;
                return;
            }

            for(int j = i+1; j < n; j++) {
                double ratio = a[j][i] / a[i][i];

                for(int k = 0; k < n+1; k++) {
                    a[j][k] -= (ratio*a[i][k]);
                }
            }
        }

        // Back substitution
        double x[100];

        x[n-1] = a[n-1][n] / a[n-1][n-1];

        for(int i = n-2; i >= 0; i--) {
            x[i] = a[i][n];
            for(int j = i+1; j < n; j++) {
                x[i] -= (a[i][j] * x[j]);
            }
            x[i] = x[i] / a[i][i];
        }

        // Display the values of x
        for(int i = 0; i < n; i++) {
            cout << "x[" << i << "] = " << x[i] << endl;
        }
    }

};

int main() {

    GaussElimination ge;
    ge.solve();

    return 0;
}
*/