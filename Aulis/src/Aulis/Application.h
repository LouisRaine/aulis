#pragma once

#include "Core.h"

namespace Aulis {

	class AULIS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	
	// To be defined in client
	Application* CreateApplication();
}