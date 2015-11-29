#ifndef RESTONCE_SUBJECT_H
#define RESTONCE_SUBJECT_H

#include <set>

namespace restonce {

class Observer;

class Subject
{
public :
    // 增加观察者
    void attachObserver(Observer *o);
    // 删除观察者
    void detachObserver(Observer *o);
protected:
    Subject() = default;
    virtual ~Subject() = default;
    // 用于子类提醒观察者自身已经发生改变
    void notifyObservers();
private:
    std::set<Observer *> m_observers;
};

} // namespace restonce

#endif // RESTONCE_SUBJECT_H
