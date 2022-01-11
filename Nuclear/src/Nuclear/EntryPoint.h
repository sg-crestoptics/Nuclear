#pragma once

#ifdef NC_PLATFORM_WINDOWS

extern Nuclear::Application* Nuclear::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Nuclear::CreateApplication();
	app->Run();
	delete app;
}
#else
#error Nuclear only supports Windows!
#endif // NC_PLATFORM_WINDOWS

