#pragma once
#include <vector>
#include "Component.h"
class Entity
{
public:
	inline void addComponent(Component * comp) {
		components.push_back(comp);
	};
	inline std::vector<Component*> getComponents() {  
		return components;
	};
private:
	std::vector<Component*> components = std::vector<Component*>();
};

