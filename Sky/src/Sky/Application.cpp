#include "skypch.h"
#include "Application.h"

#include "Sky/Events/ApplicationEvent.h"
#include "Sky/Log.h"

#include <GLFW/glfw3.h>

namespace Sky {

	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		while (m_Running)
		{
			glClearColor(1, 0, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}
	}
}