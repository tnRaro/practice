class Health {
public:
	Health(int);
	enum class State {
		Alive,
		Dead
	};
	State getState();
private:
	int health;
};