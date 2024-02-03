#include <iostream>

void show(int mass[], int n) {
    std::cout << "Generated array: ";

    for (int i = 0; i < n; i++) {
        std::cout << mass[i] << " ";
    }
    std::cout << std::endl;

}

void sravn(int mass[], int n, int x) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mass[i] - mass[j] == x) {
                std::cout << mass[i] << " " << mass[j] << std::endl;
            }
        }
    }
}


int main()
{
    std::srand(time(0));
    int n;
    std::cout << "Size: ";
    std::cin >> n;
    int *mass = new int[n];
    
    for (int i = 0; i < n; i++) {
        mass[i] = rand() % 51 + 1;
    }

    show(mass, n);
    
    int x;
    std::cout << "Number: ";
    std::cin >> x;

    sravn(mass, n, x);

    delete[] mass;
    retrun 0;

}
