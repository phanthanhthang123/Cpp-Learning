#include <iostream>

void modifyValue(int *ptr, int val, int &ref) {
    *ptr = 200; // Thay ð?i giá tr? c?a bi?n m?c tiêu thông qua con tr?
    val = 20;  // Thay ð?i b?n sao c?a giá tr?, không ?nh hý?ng ð?n bi?n g?c
    ref = 30;  // Thay ð?i bi?n g?c thông qua tham chi?u
}

int main() {
    int num = 5;
    int copy_num = num;
    int &ref_num = num;
	ref_num =100;
   // modifyValue(&num, copy_num, ref_num);

    std::cout << "num: " << num << std::endl;         // num: 30
    std::cout << "copy_num: " << copy_num << std::endl; // copy_num: 5
    std::cout << "ref_num: " << ref_num << std::endl;   // ref_num: 30

    return 0;
}

