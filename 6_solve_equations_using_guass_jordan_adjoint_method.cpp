#include <bits/stdc++.h>
#define ld long double
using namespace std;

int main(){
    ld a11, a12, a13, a21, a22, a23, a31, a32, a33, d1, d2, d3;
    cout << "Name: Archit Jain" << endl;
    cout << "Class: Btech-CSEB" << endl;
    cout << "RollNo : 72-CSEB-21" << endl;
    cout << "enter coefficents of equations below: \n";
    cout << "enter a1: "; cin >> a11; cout << "enter b1: "; cin >> a12; cout << "enter c1: "; cin >> a13;
    cout << "enter d1: "; cin >> d1;
    cout << "enter a2: "; cin >> a21; cout << "enter b2: "; cin >> a22; cout << "enter c2: "; cin >> a23;
    cout << "enter d2: "; cin >> d2;
    cout << "enter a3: "; cin >> a31; cout << "enter b3: "; cin >> a32; cout << "enter c3: "; cin >> a33;
    cout << "enter d3: "; cin >> d3;

    // find cofactors
    ld A11, A12, A13, A21, A22, A23, A31, A32, A33;
    A11 =  (a22*a33 - a32*a23); A12 = -(a21*a33 - a23*a31); A13 =  (a21*a32 - a31*a22);
    A21 = -(a12*a33 - a32*a13); A22 =  (a11*a33 - a13*a31); A23 = -(a11*a32 - a12*a31);
    A31 =  (a12*a23 - a22*a13); A32 = -(a11*a23 - a13*a21); A33 =  (a11*a22 - a21*a12);

    // find determinant
    ld det =  A11*a11 + A12*a12  +A13* a13;

    // create a matrix that stores adjoint of A
    ld adjA[3][3];
    adjA[0][0] = A11; adjA[0][1] = A21; adjA[0][2] = A31;
    adjA[1][0] = A12; adjA[1][1] = A22; adjA[1][2] = A32;
    adjA[2][0] = A13; adjA[2][1] = A23; adjA[2][2] = A33;

    // create a matrix B 
    ld B[3][1];
    B[0][0] = d1; B[1][0] = d2; B[2][0] = d3;

    // multiply adjA and B
    ld mul[3][1];
    for (int i =0 ; i < 3 ;i++){
        for (int j = 0 ; j< 1 ; j++){
            mul[i][j] = 0;
            for (int k = 0 ; k < 3 ; k++){
                mul[i][j]+= adjA[i][k] * B[k][j];
            }
        }
    }

    if (det == 0) cout << "unique solution doesn't exist" << endl;
    else{
        cout << "value of x , y, and z is \n";
        cout << "x: " << mul[0][0]/det << endl;
        cout << "y: " << mul[1][0]/det << endl;  
        cout << "z: " << mul[2][0]/det << endl;
    }
    return 0;
}