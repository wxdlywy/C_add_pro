/*打印9×9乘法口诀表*/

#include<iostream>

int main(){
    for (int row = 1; row <=9; row++){
        for (int col = 1; col <= row; col++){
            std:: cout << col << "×" << row << "=" << row*col << " ";
        }
        std:: cout<< "" << std::endl;
    }

    system("pause");
    return 0;
}