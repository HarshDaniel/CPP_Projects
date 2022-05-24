#include "Engine.h"
#include <iostream>

using namespace std;

void Engine::draw_board() {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";

        }
        cout << endl;

    }
}
void Engine::user_input() {

    int input;
    

    cout << "Enter your choice: ";
    cin >> input;

    if (input == 1) {
        board[0][0] = player;
        

    }
    else if (input == 2) {
        board[0][1] = player;
        

    }
    else if (input == 3) {
        board[0][2] = player;
        

    }
    else if (input == 4) {
        board[1][0] = player;
        

    }
    else if (input == 5) {
        board[1][1] = player;
        

    }
    else if (input == 6) {
        board[1][2] = player;
        

    }
    else if (input == 7) {
        board[2][0] = player;
        

    }
    else if (input == 8) {
        board[2][1] = player;
        

    }
    else if (input == 9) {
        board[2][2] = player;
        

    }
}
void Engine::toggle_player() {

    if (player == 'X') {
        player = 'O';
    }
    else {
        player = 'X';
    }
}
char Engine::win_check() {

    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
        return 'X';
    }
    else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
        return 'X';
    }
    else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
        return 'X';
    }
    else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
        return 'X';
    }
    else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
        return 'X';
    }
    else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
        return 'X';
    }
    else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
        return 'X';
    }
    else if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') {
        return 'X';
    }



    else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
        return 'O';
    }
    else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
        return 'O';
    }
    else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
        return 'O';
    }
    else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
        return 'O';
    }
    else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
        return 'O';
    }
    else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
        return 'O';
    }
    else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
        return 'O';
    }
    else if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
        return 'O';
    }
    
    return '/';

    
}
