#include <bits/stdc++.h>
using namespace std;

class leastSquareCurveFitting{
    public:
    int n;
    double x[100], y[100];
    double a0, a1;
    leastSquareCurveFitting(){
        cout << "Enter the number of data points : ";
        cin >> n;
        cout << "Enter the data points : " << endl;
        for(int i = 0; i < n; i++){
            cin >> x[i] >> y[i];
        }
    }
    void solve(){
        double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;
        for(int i = 0; i < n; i++){
            sumX += x[i];
            sumY += y[i];
            sumXY += x[i]*y[i];
            sumX2 += x[i]*x[i];
        }
        a0 = (sumX2*sumY - sumX*sumXY)/(n*sumX2 - sumX*sumX);
        a1 = (n*sumXY - sumX*sumY)/(n*sumX2 - sumX*sumX);
        cout << "a0 : " << a0 << ", a1 : " << a1 << endl;
    }
};
int main(){
   leastSquareCurveFitting cls = leastSquareCurveFitting();
    cls.solve();
    
    return 0;
}
/*
Enter the number of data points : 5
Enter the data points :
0 1
1 2
2 3
3 4
4 5
a0 : 1, a1 : 1
*/