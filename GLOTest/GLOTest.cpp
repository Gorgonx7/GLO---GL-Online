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
			class TestComponent : Component {
			public:
				TestComponent() {

				}
			};
			TestComponent * testComp = new TestComponent();
			Entity ent = new Entity();
			ent.addComponent(testComp);
		}
	};
}
