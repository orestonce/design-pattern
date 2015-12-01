#include "Fan.h"
#include "TurnOffFan.h"
#include "TurnOnFan.h"
#include "Invoker.h"

int main()
{
    using namespace restonce;

    Fan fan;
    Invoker invoker;

    invoker.submit (std::make_shared<TurnOnFan>(fan, 3));
    invoker.submit (std::make_shared<TurnOnFan>(fan, 5));
    invoker.submit (std::make_shared<TurnOnFan>(fan, 5));
    invoker.submit (std::make_shared<TurnOffFan>(fan));

    return 0;
}

