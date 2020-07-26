#pragma once

#ifdef SKY_PLATFORM_WINDOWS

extern Sky::Application* Sky::CreateApplication();

int main(int argc, char** argv)
{
	printf("Using Sky engine \n");

	Sky::Log::Init();
	SKY_CORE_WARN("Initialized Core Logger!");
	SKY_CORE_INFO("Initialized Client Logger!");

	auto app = Sky::CreateApplication();
	app->Run();
	delete app;
}

#endif