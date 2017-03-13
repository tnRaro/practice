class Health {
	int health;
public:
	Health(int);
	enum class State {
		Alive,
		Dead
	};
	State getState();
};