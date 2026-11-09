

#include <iostream>
#include <string>


int calculatedDamage(int x, int y) {
	return x - y;
}

int getValues() {
	int input{};
	std::cin >> input;
	return input;
}

int main() {
	int playerhealth{ 100 };
	int enemyhealth{ 100 };

	std::cout << "Enter your attack power: ";
	int attackpower{ getValues() };

	std::cout << "Enter your defense: ";
	int defensestat{ getValues() };

	std::cout << "Enter enemy attack power: ";
	int enemyattackpower{ getValues() };

	int playerdamaged = calculatedDamage(enemyattackpower, defensestat);
	if (playerdamaged < 0) {
		playerdamaged = 0;
	}

	std::cout << "BATTLE RESULTS\n";
	std::cout << "\n";
	std::cout << "You dealt " << attackpower << " damage! \n";
	std::cout << "Enemy dealt " << playerdamaged << " damage! \n";
	std::cout << "\n";
	std::cout << "Your remaining HP: " << playerhealth - playerdamaged << "\n";
	std::cout << "Enemy remaining HP: " << enemyhealth - attackpower << "\n";
	std::cout << "\n";

	if (attackpower > playerdamaged) {
		std::cout << "YOU WIN!";
	}
	else if (attackpower < playerdamaged) {
		std::cout << "YOU LOSE :(";
	}
	else {
		std::cout << "TIE";
	}
}