#include "pch.h"
#include "CppUnitTest.h"
#include "../GLO/Entity.h"
#include "../GLO/Component.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GLOTest
{
	TEST_CLASS(EntityTest)
	{
	public:
		
		TEST_METHOD(AddComponent)
		{
			
			
			Entity ent = Entity();
			Component * comp = new Component();
			ent.addComponent(comp);
			
			Assert::AreEqual(ent.getComponents().size(), std::vector<Component*>{comp}.size());
			delete comp;
		}
		TEST_METHOD(CreateEntity) {
			Entity* ent = new Entity();
			Assert::IsNotNull(ent);
			delete ent;

		}
	};
}
