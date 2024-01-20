#include <Game.h>

class Sandbox : public Gamr::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Gamr::Application* Gamr::CreateApplication()
{
	return new Sandbox();
}