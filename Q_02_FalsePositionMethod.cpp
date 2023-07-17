#include <bits/stdc++.h>
using namespace std;

// F(x) = x^3 - 4x - 9
double f(double x){
    return pow(x, 3) - 4*x - 9;
}
class FalsePosition{
    public:
    void solve(){
        double a, b;
        cin >> a >> b;
        double precision = 0.001;
        double root = (a*f(b) - b*f(a))/f(b) - f(a);
        double x = root;
        while(1){
            if(f(a) * f(b)== 0) break;
            else if(f(a) * f(b) > 0) a = root;
            else b = root;
            root = (a*f(b) - b*f(a))/f(b) - f(a);
            if(abs((root - x)/root) < precision) break;
            x = root;
        }
        cout << "Root : " << root << endl;
    }
};
int main(){
    FalsePosition cls = FalsePosition();
    cls.solve();

    return 0;
}