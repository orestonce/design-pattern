#include <iostream>
#include <string>

#include "Observer.h"
#include "Subject.h"

class Teacher
        : public restonce::Subject
{
public :
    void teach(std::string const& something)
    {
        m_words = something;
        notifyObservers ();
    }
    std::string const& getWords() const
    {
        return m_words;
    }
private:
    std::string m_words;
};

class Student
        : public restonce::Observer
{
public :
    Student(std::string const& name)
        : m_name(name)
    {

    }

protected:
    virtual void onSubjectChanged (restonce::Subject *who) override
    {
        Teacher *teacher = dynamic_cast<Teacher *>(who);
        if ( teacher ) {
            std::cout << m_name << " 听到了 ： " <<
                         teacher->getWords () << std::endl;
        }
    }
private:
    std::string m_name;
};

int main()
{
    // 老师同学都到课堂
    Teacher zhao;
    Student zhang3("张3");
    Student li4("李4");

    // 张3准备听课
    zhao.attachObserver (&zhang3);

    // 只有张3听课，所以只有张3注意到了老师的话
    zhao.teach ("同学们好 !");

    //李4准备听课了
    zhao.attachObserver (&li4);

    //两个同学都能听到老师的话
    zhao.teach ("张3起来回答问题.");

    //李4又不听课了
    zhao.detachObserver (&li4);

    //李4听不到老师的话
    zhao.teach ("李4回答问题.");

    return 0;
}

