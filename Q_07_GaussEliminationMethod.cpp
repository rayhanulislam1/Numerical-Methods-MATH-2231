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