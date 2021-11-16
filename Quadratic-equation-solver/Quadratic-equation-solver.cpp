// Quadratic-equation-solver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//created by ErfanHephaestus


#include <iostream>
#include <cmath>
using namespace std;
void greeting();
void equationSolver(double a, double b, double c);
int main()
{
    greeting();

    return 0;
}
void greeting()
{
    
    cout << "Welcome to Quadric eequation solver\n";
    cout << "Please enter (a) coefficient:\t";
    double a;
    cin >> a;
    cout << "\nPlease enter (b) coefficient:\t";
    double b;
    cin >> b;
    cout << "\nPlease enter (c) coefficient:\t";
    double c;
    cin >>c;
    equationSolver(a, b, c);
}
void equationSolver(double a, double b, double c)
{
    if (a == 0)
    {
        cout << "the root of equation is:\t" << (-c / b) << endl;
    }
    else
    {
        double delta = 0;
        delta = pow(b, 2) - (4 * a * c);
        if (delta == 0)
        {
            cout << "The root of equation is:\t" << ((-b) / (2 * a)) << endl;
        }
        else if (delta > 0)
        {
            cout << "The first root of equation is:\t" << ((-b + sqrt(delta)) / (2 * a)) << "\t the second root of equation is:\t" << ((-b - sqrt(delta)) / (2 * a)) << endl;
        }
        else
        {
            cout << "The roots of equation are complex numbers\n";
            cout << "The first root of equation is:\t" << (-b / (2 * a)) << " + i " << (sqrt(fabs(delta)) / (2 * a)) << "\t the second root of equation is:\t" << (-b / (2 * a)) << " - i " << (sqrt(fabs(delta)) / (2 * a)) << endl;
        }
    }
}