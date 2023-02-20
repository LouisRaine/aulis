#pragma once

#ifdef AU_PLATFORM_WINDOWS

extern Aulis::Application* Aulis::CreateApplication();

int main(int argc, char** argv) {

	auto app = Aulis::CreateApplication();
	app->Run();
	delete app;
}
#endif // AU_PLATFORM_WINDOWS
