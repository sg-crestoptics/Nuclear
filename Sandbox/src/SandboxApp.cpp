#include <Nuclear.h>

class Sandbox : public Nuclear::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Nuclear::Application* Nuclear::CreateApplication()
{
	return new Sandbox();
}