#pragma once

#ifdef GR_PLATFORM_WINDOWS

extern Gamr::Application* Gamr::CreateApplication();

int main(int argc, char *argv[])
{
	printf("GamR\n");
	auto app = Gamr::CreateApplication();
	app->run();
	delete app;
}

#endif
