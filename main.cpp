#include <iostream>
#include "main.h"
#include<cmath>


int main(){
    //Sample code                                       //Expected output

    std::cout << check_triangle(13,0.4,5.6)<<"\n";      //The triangle is a scalene triangle

    std::cout << check_triangle(12,12,15)<<"\n";           //The triangle is an isosceles triangle

    std::cout << check_triangle(8,8,8)<<"\n";           //The triangle is an equilateral triangle

    std::cout << check_triangle(20,101,99)<<"\n";       //The triangle is a right-angled triangle

    std::cout << check_triangle(5,4,3)<<"\n";           //The triangle is a right-angled triangle

}

