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
			class TestComponent : public Component {
			public:
				TestComponent() {

				}
			};
			TestComponent * testComp = new TestComponent();
			Entity ent = Entity();
			ent.addComponent(testComp);
			Assert::AreEqual(ent.getComponents().size(), std::vector<int>{1}.size());
		}
	};
}
