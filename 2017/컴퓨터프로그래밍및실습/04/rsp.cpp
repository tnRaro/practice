#include <iostream>
#include <string>

using namespace std;

enum class RSP {
	Rock,
	Scissors,
	Paper
};

enum class Result {
	Win,
	Loss,
	Tie
};

class Player{
	RSP state;
	string name;
public:
	Player(string name){
		this->name = name;
	}
	void draw(string rsp){
		if(rsp == "바위"){
			state = RSP::Rock;
		} else
		if(rsp == "바위"){
			state = RSP::Scissors;
		} else
		if(rsp == "바위"){
			state = RSP::Paper;
		}
	}
	string getName(){
		return name;
	}
	RSP getState(){
		return state;
	}
};

Result isWin(RSP, RSP)

int main(){
	Player satou("사또");
	Player arang("아랑");

	while(true){
		cout << "Rock Scissors Paper!!" << endl;

		string s;

		cout << satou.getName() << ">>" << endl;

		cin >> s;

		satou.draw(s);

		string t;

		cout << arang.getName() << ">>" << endl;

		cin >> t;

		arang.draw(t);

		Result result = isWin(satou.getState(), arang.getState());

		if(result == Result::Tie){
			cout << "Tied." << endl;

			return 0;
		} else {
			cout << (result == Result::Win ? satou.getName() : arang.getName() << " is WINNER!!" << endl;
		}
	}
}

Result isWin(RSP a, RSP b){
	if(a == b){
		return Result::Tie;
	} else
	if(a == RSP::Rock && b == RSP::Scissors
	|| a == RSP::Scissors && b == RSP::Paper
	|| a == RSP::Paper && b == RSP::Rock){
		return Result::Win;
	} else{
		return Result::Loss;
	}
}
