#include <bits/stdc++.h>
using namespace std;

class GaussJordanMethod{
    public:
    int n;
    double a[100][100];
    GaussJordanMethod(){
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
        // Gauss-Jordan elimination
        for(int i = 0; i < n; i++){
            if(a[i][i] == 0){
                cout << "Invalid" << endl;
                return;
            }
            for(int j = 0; j < n; j++){
                if(i != j){
                    double ratio = a[j][i]/a[i][i];
                    for(int k = 0; k < n+1; k++){
                        a[j][k] -= (ratio*a[i][k]);
                    }
                }
            }
        }
        // Display the values of x
        for(int i = 0; i < n; i++){
            cout << "x[" << i << "] = " << a[i][n]/a[i][i] << endl;
        }
    }
};
int main(){
    GaussJordanMethod cls = GaussJordanMethod();
    cls.solve();

    return 0;
}
/*

Enter the number of equations: 3
Enter the coefficients of the equations:
2 1 -1 8
-3 -1 2 -11
-2 1 2 -3
x[0] = 2
x[1] = 3
x[2] = -1
*/