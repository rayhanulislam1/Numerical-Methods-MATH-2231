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