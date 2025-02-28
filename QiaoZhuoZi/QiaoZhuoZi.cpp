/*敲桌子：从1开始到数字100，
如果数字个位含有7，或者数字十位含有7，
或者该数字是7的倍数，打印敲桌子，其余数字直接打印输出*/


#include<iostream>
#include<cmath>

int main(){

    for (int num = 1;; num <= 100; num++){
        if (num % 10 == 7 || num / 10 == 7 || num % 7 ==0){
            std:: cout << num << " 敲桌子！" << std:: endl;
        }
        else {
            std:: cout << num << std:: endl;
        }
    }

    system("pause");
    return 0;
}