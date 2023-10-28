#include <iostream>


void insertion_sort(int in_array[], int length) {
    for (int i = 1; i < length; i++) {
        int current_value = in_array[i];
        int position = i;

        while (position > 0 && in_array[position - 1] > current_value) {
            in_array[position] = in_array[position - 1];
            position = position - 1;
        }

        in_array[position] = current_value;
    }
}

int main() {
    int dizi[5];

    std::cout << "5 adet sayı giriniz:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> dizi[i];
    }

    // Insertion Sort ile sıralama
    insertion_sort(dizi, 5);

    std::cout << "Sıralanmış Dizi:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << dizi[i] << " ";
    }

    return 0;
}
