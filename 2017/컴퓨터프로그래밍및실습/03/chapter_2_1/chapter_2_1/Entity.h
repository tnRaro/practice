#include <vector>
#include "Component.h"

class Entity {
	std::vector<Component> components;
public:
	Component getComponent(int id) {
		return components[id];
	}
};