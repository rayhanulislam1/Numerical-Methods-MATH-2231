Newmerical Method:
====================================================================================
1. To Find The Roots of Non Linear Equation
    Q1. Bisection Method
    Q2. False Position Method
    Q3. Newton Raphson Method
    Q4. Secant Method

Q5. To implement Least Square Method for Curve Fitting
Q6. To implement Polynomial Method for Curve Fitting

2. To Find The Roots of Linear Equation
    Q7. Gauss Elimination Method
    Q8. Gauss Jordan Method

3. To Find The Roots of Polynomial Equation
    Q9. Newton's Forward Interpolation Formula
    Q10. Lagrange's Interpolation Formula
    Q11. Newton's Divided Difference Formula

Q12. To implement Trapezoidal Method for Integration
Q13. To implement Simpson's 1/3 Method for Integration
Q14. Differential Equation by Euler's Method
Q15. Implement appropriate numericals method to calculate a definite integral.
====================================================================================

Q1) Bisection Method Formula:
    x2 = (a + b)/2
    where, x2 is the next approximation, a and b are the current approximations.

Q2) False Position Method Formula:
    x2 = (a*f(b) - b*f(a))/(f(b) - f(a))

    where, x2 is the next approximation, a and b are the current approximations, f(a) and f(b) are the values of the function at a and b respectively.

Q3) Newton Raphson Method Formula:
    x2 = x1 - f(x1)/f'(x1)

    where, x2 is the next approximation, x1 is the current approximation, 
    f(x1) is the value of the function at x1 and f'(x1) is the derivative of the function at x1.

Q4) Secant Method Formula:
    x2 = x1 - (f(x1)*(x1 - x0))/(f(x1) - f(x0))

    where, x2 is the next approximation, x1 and x0 are the current approximations, 
    f(x1) and f(x0) are the values of the function at x1 and x0 respectively.

Q5) Least Square Method Formula:
    y = a0 + a1*x + a2*x^2 + ... + an*x^n

    where, y is the dependent variable, x is the independent variable, 
    a0, a1, a2, ..., an are the coefficients of the equation and n is the degree of the equation.

Q6) Polynomial Method Formula:
    y = a0 + a1*x + a2*x^2 + ... + an*x^n

    where, y is the dependent variable, x is the independent variable, 
    a0, a1, a2, ..., an are the coefficients of the equation and n is the degree of the equation.

Q7) Gauss Elimination Method Formula:
    x1 = (c1 - a12*x2 - a13*x3 - ... - a1n*xn)/a11
    x2 = (c2 - a21*x1 - a23*x3 - ... - a2n*xn)/a22
    x3 = (c3 - a31*x1 - a32*x2 - ... - a3n*xn)/a33
    .
    .
    .
    xn = (cn - a1n*x1 - a2n*x2 - ... - a(n-1)n*x(n-1))/ann

    where, x1, x2, x3, ..., xn are the roots of the linear equation,
    a11, a12, a13, ..., a1n, a21, a22, a23, ..., a2n, a31, a32, a33, ..., a3n, ..., ann are the coefficients of the linear equation,
    c1, c2, c3, ..., cn are the constants of the linear equation.
    
Q8) Gauss Jordan Method Formula:
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

Q9) Newtons Forward Interpolation Formula:
    y = y0 + u*deltay + u*(u-1)*deltay*deltay/2! + u*(u-1)*(u-2)*deltay*deltay*deltay/3! + ...

    where, y is the value of the function at x, y0 is the value of the function at x0, 
    u = (x - x0)/deltax, deltax = x1 - x0, deltax = x2 - x1, deltax = x3 - x2, ... and so on.
    and deltax is the common difference.

Q10) Lagranges Interpolation Formula:
    y = y0*(x - x1)*(x - x2)*(x - x3)*...*(x - xn)/(x0 - x1)*(x0 - x2)*(x0 - x3)*...*(x0 - xn) + 
        y1*(x - x0)*(x - x2)*(x - x3)*...*(x - xn)/(x1 - x0)*(x1 - x2)*(x1 - x3)*...*(x1 - xn) + 
        y2*(x - x0)*(x - x1)*(x - x3)*...*(x - xn)/(x2 - x0)*(x2 - x1)*(x2 - x3)*...*(x2 - xn) + 
        y3*(x - x0)*(x - x1)*(x - x2)*...*(x - xn)/(x3 - x0)*(x3 - x1)*(x3 - x2)*...*(x3 - xn) + 
        ...
        yn*(x - x0)*(x - x1)*(x - x2)*...*(x - xn)/(xn - x0)*(xn - x1)*(xn - x2)*...*(xn - xn-1)
    where, y is the value of the function at x, y0, y1, y2, ..., yn are the values of the function at x0, x1, x2, ..., xn respectively.

Q11) Newtons Divided Difference Formula:
    y = y0 + u*y1 + u*(u-1)*y2/2! + u*(u-1)*(u-2)*y3/3! + ...
    where, y is the value of the function at x, y0 is the value of the function at x0, 
    u = (x - x0)/deltax, deltax = x1 - x0, deltax = x2 - x1, deltax = x3 - x2, ... and so on.
    and deltax is the common difference.

Q12) Trapezoidal Method Formula:
    I = (h/2)*(y0 + yn + 2*(y1 + y2 + y3 + ... + yn-1))
    where, h = (b-a)/n
    and n is the number of data points.

Q13) Simpsons 1/3 Method Formula:
    I = (h/3)*{y0 + yn + 4*(y1 + y3 + y5 + ... + yn-1) + 2*(y2 + y4 + y6 + ... + yn-2)}
    where, h = (b-a)/n
    and n is the number of data points.

Q14) Eulers Method Formula:
    y = y0 + h*f(x0, y0)
    where, y is the value of the function at x, y0 is the value of the function at x0, 
    h = x - x0, f(x0, y0) is the value of the derivative of the function at x0.

Q15) Definite Integral Formula:
    I = (h/2)*(y0 + yn) + h*(y1 + y2 + y3 + ... + yn-1)
    where, h = (b-a)/n
    and n is the number of data points.
    and y0, y1, y2, y3, ... yn are the data points.
