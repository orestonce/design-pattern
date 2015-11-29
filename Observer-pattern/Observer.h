#ifndef RESTONCE_OBSERVER_H
#define RESTONCE_OBSERVER_H

namespace restonce {

class Subject;

class Observer
{
public:
    friend class Subject;
protected :
    Observer() = default;
    virtual ~Observer() = default;
    // 某个注册过的观察主题发生改变后回调该函数
    virtual void onSubjectChanged(Subject *who) = 0;
};

} // namespace restonce

#endif // RESTONCE_OBSERVER_H
