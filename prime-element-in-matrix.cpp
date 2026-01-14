#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    int matrix[rows][cols];
    cout << "Enter matrix elements:\n";
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            cin >> matrix[i][j];
        }
    }
    int primeCount=0;
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            if (isPrime(matrix[i][j])) {
                primeCount++;
            }
        }
    }
    cout << "Number of prime elements in the matrix: "
         << primeCount << endl;
    return 0;
}
