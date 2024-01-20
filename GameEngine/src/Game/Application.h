#pragma once

#include "Core.h"

namespace Gamr {
	
	class GAMR_API Application
	{
	public:

		Application();
		virtual ~Application();

		void run();

	};

	// Defined in client
	Application* CreateApplication();


}

