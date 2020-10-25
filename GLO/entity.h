#pragma once
#include <vector>
#include "Component.h"
class entity
{
public:
	inline void addComponent(Component * comp) {
		components.push_back(comp);
	};
private:
	std::vector<Component*> components;
};

