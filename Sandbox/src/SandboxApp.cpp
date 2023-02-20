#include <Aulis.h>

class SandBox : public Aulis::Application
{
public:
	SandBox() {}
	~SandBox(){}

};

Aulis::Application* Aulis::CreateApplication() {
	return new SandBox();
}