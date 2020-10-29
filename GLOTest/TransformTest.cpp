#include "pch.h"
#include "CppUnitTest.h"

#include "../GLO/Transform.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GLOTest
{
	TEST_CLASS(TransformTest)
	{
	public:

		TEST_METHOD(CreateTransform)
		{
			
			Transform * trans = new Transform();
			Assert::IsNotNull(trans);
			delete trans;
		}
	};
}