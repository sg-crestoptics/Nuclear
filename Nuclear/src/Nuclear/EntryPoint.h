#pragma once

#ifdef NC_PLATFORM_WINDOWS

extern Nuclear::Application* Nuclear::CreateApplication();

int main(int argc, char** argv)
{
	Nuclear::Log::Init();
	NC_CORE_WARN("Initialized Log!");
	int a = 0;
	NC_INFO("Initialized Log! Var a = {0}", a);

	auto app = Nuclear::CreateApplication();
	app->Run();
	delete app;
}
#else
#error Nuclear only supports Windows!
#endif // NC_PLATFORM_WINDOWS

