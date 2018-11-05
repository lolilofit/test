#ifndef GAME_H
#define GAME_H
#include<vector>
#include<map>
#include <stdlib.h>

class Gamer;

class Create {
public:
	virtual Gamer* make() = 0 {}
};

class random_gamerCreate : public Create {
	Gamer* make() {
		return new random_stragegyGamer();
	}
};


class factory {
	std::map<std::string, Create*> gamers;
public:
	static factory& get_instance() {
		static factory _factory;
		return _factory;
	}

	Create* read(std::string name) {
		return gamers.at(name);
	}
};

class Game {
protected: 
	std::vector<int> win = {0, 0};

private:
	void game(std::string name_one, std::string name_two, int raunds) {
		Gamer* gamer_one = factory::get_instance().read(name_one)->make();
		Gamer* gamer_two = factory::get_instance().read(name_two)->make();

		for (int i = 1; i <= raunds; i++) {
		  //while()
		}
	}

public:
	
};

class Gamer : public Game {
public:

	std::vector<std::vector<bool>> my_field;
	std::vector<std::vector<bool>> my_turns;

	virtual void attack(Gamer& _gamer) {};
	virtual void init_field() {}
};

class random_stragegyGamer : public Gamer {
	bool can_set(int x, int y, int num_palubs, int orientatation) {
		int left, right, up, down, shift_x = 0, shift_y = 0;
		if (x == 9) {
			right = x;
		}
		else right = x + 1;
		if (y == 0) {
			up = y;
		}
		else up = y - 1;
	    
		if (orientatation == 1)
			shift_x = x - num_palubs + 1;
		else shift_y = y + num_palubs - 1;

		if (x - shift_x < 0)
			return 1;
		if (y + shift_y > 9)
			return 1;

		if (x-shift_x == 0) {
			left = shift_x;
		}
		else left = shift_x - 1;;

		if (y+shift_y == 9) {
			down = shift_y;
		}
		else
			down = shift_y+1;
		for (int i = left; i <= right; i++) {
			for (int j = up; j <= down; j++) {
				if (my_field[i][j] == 1)
					return 1;
			}
		}
		return 0;
	}

public:
	void attack(Gamer& _gamer) override {
		int res = 1, x, y;
		while (res) {
			x = rand() % 10;
			y = rand() % 10;
			res = my_turns[x][y];
		}
		my_turns[x][y] = 1;
		_gamer.my_field[x][y] = 0;
	}

	void init_field() override {
		int res = 1, x, y, orientation, shift_x = 1, shift_y = 1, j, k, m;

		for (k = 1; k <= 4; k++) {
			for (int i = 0; i < 5 - k; i++) {
				while (res) {
					x = rand() % 10;
					y = rand() % 10;
					orientation = rand() % 2;
					res = can_set(x, y, k, orientation);
				}
				if (orientation) {
					shift_x = x - k + 1;
					shift_y = y;
				}
				else {
					shift_y = y + k - 1;
					shift_x = x;
				}
				for (m = shift_x; m <= x; m++) {
					for (j = y; j <= shift_y; j++)
						my_field[m][j] = 1;
				}

			}
		}
	}
};


#endif