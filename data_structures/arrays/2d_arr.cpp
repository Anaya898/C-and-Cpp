#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int A[3][4]={{1,3,5,7},{4,5,7,8},{1,2,3,4}};
    for(int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }
// row major formula
    // Addr(A[i][j])=L0+[i*n+j]*w

 // w= word size or data type size;
 // L0=sizeof array m x n;

// column major formula
    // Addr(A[i][j])=L0+[j*m+i]*w


    // horner's rule: i4+d4*[i3+d3*[i2+i1*d2]] ----> works by taking commons out, faster than column and row majors ;
    return 0;
}