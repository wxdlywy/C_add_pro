/* 水仙花数是指一个三位数，他的每个位上的数字的3次幂之和等于它本身
例如：1^3 + 5^3 + 3^3 = 153 
利用do while语句，求出所有3位数中的水仙花数*/

#include<iostream>
#include<cmath> //The function of pow() is included in this headfile

int main (){

    int number = 100;

    do {
        int a = (number / 100);          // BaiWei
        int b = ((number / 10) % 10);    // ShiWei
        int c = (number % 10);           // GeWei
        
        if(pow(a, 3) + pow(b, 3) + pow(c, 3) == number){
            std:: cout << number << std:: endl;
            number += 1;
            continue;
        }
        number += 1;
    }
    while (number<1000);

    system("pause");
}