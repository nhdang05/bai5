// bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "CHUONG TRINH giai phuong trinh bac 2\n";
    double a, b, c, delta, x1, x2;
    cout << "nhap a:"; cin >> a;
    cout << "nhap b"; cin >> b;
    cout << " nhap c"; cin >> c;
    if (a == 0) {
        // giai phuong trinh bac 1 bx + c =0 
        if (b != 0)
        {
            cout << "phuong trinh co nghiem duy nhat x=" << -c / b << endl;
        }
        else {
            if (c != 0)
            {
                cout << "phuong trinh vo nghiem\n";
            }
        }
    }
    else {
        //giai pt bac 2 
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "phuong trinh vo nghiem/n";
        }
        else if (delta == 0) {
            cout << "phuong trinh co nghiem kep x1=x2=" << -b / (2 * a) << endl;
        }
        else {
            //delta lon hon 0
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "x1 =" << x1 << endl;
            cout << "x2 =" << x2 << endl;
        }
    }
    return 0;
