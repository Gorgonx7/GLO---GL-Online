#include "pch.h"
#include "CppUnitTest.h"

#include "../GLO/Component.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GLOTest
{
	TEST_CLASS(ComponentTest)
	{
	public:

		TEST_METHOD(CreateComponent)
		{
			class TestComponent : public Component {
			public:
				TestComponent() : Component() {

				}
			};
			TestComponent* comp = new TestComponent();
			Assert::IsNotNull(comp);
			delete comp;
		}
	};
}
