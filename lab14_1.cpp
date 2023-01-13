#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){

    for(int i=0; i<N; i++)
        B[0]+= A[i];
    



  B[0]=B[0]/N;
    double summ = 0;
  for(int j = 0; j < N; ++j) {
    summ += pow(A[j] - B[0], 2);
  }
B[1] = sqrt(summ /N);
    
    double Geometric = 1;
   for (int k = 0; k < N; k++){
        Geometric = Geometric * A[k];
   }
   B[2] = pow(Geometric, pow(N,-1));

    double harmonic;
   for (int z = 0; z < N; z++){
    harmonic = harmonic + (double)1/A[z];
   }
   B[3] = N/harmonic;

   B[4]= A[1];
   B[5]= A[1];
   for(int d =0; d< N ;d++){
    if (B[4] < A[d]){
        B[4] = A[d];
    }if(B[5] > A[d]){
        B[5] = A[d];
    }
   }
}