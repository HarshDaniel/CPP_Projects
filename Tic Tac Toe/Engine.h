#pragma once
class Engine {

private:
	char board[3][3] = { '1','2','3','4','5','6','7','8','9' };
	char player = 'X';
	
public:
	int moves;
	void draw_board();
	void user_input();
	void toggle_player();
	char win_check();
};


