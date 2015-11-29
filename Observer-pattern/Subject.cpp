#include "Subject.h"
#include "Observer.h"

namespace restonce {

void Subject::attachObserver (Observer *o)
{
    m_observers.insert (o);
}

void Subject::detachObserver (Observer *o)
{
    m_observers.erase (o);
}

void Subject::notifyObservers ()
{
    for( Observer *o : m_observers )
    {
        o->onSubjectChanged (this);
    }
}

} // namespace restonce
