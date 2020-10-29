#include "pch.h"
#include "CppUnitTest.h"

#include "../GLO/ModelLoader.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GLOTest
{
	TEST_CLASS(ModelLoaderTest)
	{
	public:

		TEST_METHOD(CreateModelLoader)
		{
			ModelLoader * loader = new ModelLoader("../GLO/models/backpack/backpack.obj");
			Assert::IsNotNull(loader);
		}
		TEST_METHOD(GetModel) {
			ModelLoader* loader = new ModelLoader("../GLO/models/backpack/backpack.obj");
			std::vector<Mesh> Model = loader->GetModel();
			Assert::IsNotNull(&Model);
		}
	};
}