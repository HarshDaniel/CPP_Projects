#include <iostream>
#include "Engine.h"

using namespace std;

int main() {

	Engine tic_tac_toe;

	tic_tac_toe.moves = 0;
	while (1) {
		
		tic_tac_toe.draw_board();
		tic_tac_toe.user_input();
		tic_tac_toe.moves++;
		if (tic_tac_toe.win_check() == 'X') {
			cout << "X wins" << endl;
			break;
		}
		else if(tic_tac_toe.win_check() == 'O') {
			cout << "O wins" << endl;
			break;
		}
		else if (tic_tac_toe.win_check() == '/' && tic_tac_toe.moves == 9) {
			cout << "Draw" << endl;
		}
		tic_tac_toe.toggle_player();
	}

	return 0;
}