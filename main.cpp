#include <iostream>

//Tic Tac Toe. X plays first.
//Add checks for occupied spaces.

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
void drawBoard();
int gameLoop();
int winCheck();

int main(){
    drawBoard();
    gameLoop();
    return 0;
}


void drawBoard() {
    std::cout << " " << board[0] << " | " << board[1] << " | " << board[2];
    std::cout << "\n---|---|---\n";
    std::cout << " " << board[3] << " | " << board[4] << " | " << board[5];
    std::cout << "\n---|---|---\n";
    std::cout << " " << board[6] << " | " << board[7] << " | " << board[8];
}

int gameLoop() {
    int square, turn = 0;
    while (true){
        int gameOver = winCheck();
        if (gameOver == 1) {
            std::cout << "\nGame Over.\n";
            if (turn % 2 != 0) {
                std::cout << "X wins.\n";
            }
            else if (turn % 2 == 0) {
                std::cout << "O wins.\n";
            }
            break;
        }
        else if (gameOver == -1){
            std::cout << "\nGame Over.\n";
            std::cout << "Draw.\n";
            break;
        }
        else {
            if (turn % 2 == 0) { //x to play
            std::cout << "\nTurn: " << turn + 1;
            std::cout << "\nPick a square: (0-9): ";
            std::cin >> square;
            switch (square){
                case 1:
                    board[0] = 'x';
                    break;
                case 2:
                    board[1] = 'x';
                    break;
                case 3:
                    board[2] = 'x';
                    break;
                case 4:
                    board[3] = 'x';
                    break;
                case 5:
                    board[4] = 'x';
                    break;
                case 6:
                    board[5] = 'x';
                    break;
                case 7:
                    board[6] = 'x';
                    break;
                case 8:
                    board[7] = 'x';
                    break;
                case 9:
                    board[8] = 'x';
                    break;
                default:
                    std::cout << "Pick another square.\n\n";
                    turn--;
                    break;
            }
            system("cls");
            turn++;
            drawBoard();   
        }
        else if (turn % 2 != 0) { //o to play
            std::cout << "\nTurn: " << turn + 1;
            std::cout << "\nPick a square: (0-9): ";
            std::cin >> square;
            switch (square){
                case 1:
                    board[0] = 'o';
                    break;
                case 2:
                    board[1] = 'o';
                    break;
                case 3:
                    board[2] = 'o';
                    break;
                case 4:
                    board[3] = 'o';
                    break;
                case 5:
                    board[4] = 'o';
                    break;
                case 6:
                    board[5] = 'o';
                    break;
                case 7:
                    board[6] = 'o';
                    break;
                case 8:
                    board[7] = 'o';
                    break;
                case 9:
                    board[8] = 'o';
                    break;
                default:
                    std::cout << "Pick another square.\n\n";
                    turn--;
                    break;
            }
            system("cls");
            turn++;
            drawBoard();   
        }
        }
    }
    system("pause");
}

int winCheck(){
    /*
        0|1|2
        3|4|5
        6|7|8
    */

    //Diagonal win
    if (board[0] == board[4] && board[0] == board[8]){
        return 1;
    }
    
    else if (board[2] == board[4] && board[2] == board[6]){
        return 1;
    }

    //Vertical win
    else if (board[0] == board[3] && board[0] == board[6]){
        return 1;
    }
    else if (board[1] == board[4] && board[1] == board[7]){
        return 1;
    }
    else if (board[2] == board[5] && board[2] == board[8]){
        return 1;
    }

    //Horizontal win
    else if (board[0] == board[1] && board[0] == board[2]){
        return 1;
    }
    else if (board[3] == board[4] && board[3] == board[5]){
        return 1;
    }
    else if (board[6] == board[7] && board[6] == board[8]){
        return 1;
    }

    //Draw
    else if (board[0] != '1' && board[1] != '2' && board[2] != '3' && board[3] != '4' && board[4] != '5' && board[5] != '6' && board[6] != '7' && board[7] != '8' && board[8] != '9'){
        return -1;
    }
    else return 0;
}