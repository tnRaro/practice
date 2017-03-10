#include "Health.h"

Health::Health(int _health) {
	health = _health;
}

Health::State Health::getState() {
	return health <= 0 ? Health::State::Alive : Health::State::Dead;
}