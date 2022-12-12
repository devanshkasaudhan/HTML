#include<bits/stdc++.h>
using namespace std;

int main(){
    float v_t, m, A, Cd;
    float den = 1.2041;
    float g = 9.8;
    std::cout << "Enter the value of mass in Kg" <<endl ;
    std::cin >> m ;
    std::cout << "Enter the value of Cross sectional area in square meters " <<endl ;
    std::cin >> A ;
    std::cout << "Enter the value of drag cofficient" <<endl ;
    std::cin >> Cd ;
    v_t = sqrt((2 * m * g) / (den * A * Cd));
    std::cout
        << "terminal velocity is :" << v_t << " m/s"<< endl;
    return 0;
}