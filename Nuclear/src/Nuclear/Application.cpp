#include "Application.h"

#include "Nuclear/Events/ApplicationEvent.h"
#include "Nuclear/Events/MouseEvent.h"
#include "Nuclear/Log.h"

namespace Nuclear
{
	Application::Application()
	{
	}

	Application::~Application()
	{
	}
	void Application::Run()
	{
		MouseMovedEvent e(120, 12);
		NC_TRACE(e);

		while (true);
	}
}
