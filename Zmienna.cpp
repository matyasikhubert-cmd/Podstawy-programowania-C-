#include <iostream>

int main() {
   
    int liczba1 = 6;
    int liczba2 = 7;

    
    int suma = liczba1 + liczba2;
    int roznica = liczba1 - liczba2;
    int iloczyn = liczba1 * liczba2;

   
    std::cout << "Liczba 1: " << liczba1 << std::endl;
    std::cout << "Liczba 2: " << liczba2 << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Roznica: " << roznica << std::endl;
    std::cout << "Iloczyn: " << iloczyn << std::endl;

    return 0;
}
