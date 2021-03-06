#ifndef %{SvcGuard}
#define %{SvcGuard}

#include <QtService/Service>

class %{SvcCn} : public QtService::Service
{
	Q_OBJECT

public:
	explicit %{SvcCn}(int &argc, char **argv);

protected:
	CommandResult onStart() override;
	CommandResult onStop(int &exitCode) override;
};

#undef qService
#define qService static_cast<%{SvcCn}*>(QtService::Service::instance())

#endif // %{SvcGuard}
