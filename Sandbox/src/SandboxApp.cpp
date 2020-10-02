#include <Sky.h>

class ExampleLayer : public Sky::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		SKY_INFO("ExampleLayer::Update");
	}

	void OnEvent(Sky::Event& event) override
	{
		SKY_TRACE("{0}", event);
	}

};

class Sandbox : public Sky::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{
	}
};

Sky::Application* Sky::CreateApplication()
{
	return new Sandbox();
}