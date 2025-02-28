#include<iostream>

#include<ctime>

#include<cstdlib>

/*随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，
直到猜对恭喜玩家胜利，并且退出游戏。
*/

// Judge if the guessNumber is equal to randomNumber
void MatchNumber(int randomNumber, int guessNumber){

    while (randomNumber != guessNumber){
        if (guessNumber > randomNumber){
            std:: cout << "Your number is larger than the right answer, please enter the number again: " << std:: endl;
            std:: cin >> guessNumber;
        }
        else{
            std:: cout << "Your number is smaller than the right answer, please enter the number again: " << std:: endl;
            std:: cin >> guessNumber;
        }
    }

    std:: cout << "Congratulations! Your answer is right!" << std:: endl;
    return;
}

int main(){
    // Set random seed, otherwise the randomNumber is unchanged while in the one process
    srand(time(0));

    // Generate the randomNumber 1 to 100
    int randomNumber = rand() % 100 +1;

    // std:: cout << "The randomNumber is : " << randomNumber << std:: endl;
    std:: cout <<"Please guess the number between 1 and 100。" << std:: endl;
    std:: cout <<"Enter your number: " << std:: endl;

    int guessNumber;

    std:: cin >> guessNumber; 

    MatchNumber(randomNumber, guessNumber);

    system("pause");

}
