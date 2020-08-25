#include <QCoreApplication>

/*

  What
  Make a C++11 Magic Statics - Singleton pattern replacement

  Description
  Only one instance of the class

  Why
  Sometimes you want to limit the code to once intance

  Example
  Timer
  Logger

  Note singletons are considered bad practice and can have issues with threads!
  A much better way of creating a singleton is to rely on C++11 Magic Statics  And simply do this:
  https://codereview.stackexchange.com/questions/173929/modern-c-singleton-template
  http://www.nuonsoft.com/blog/2017/08/10/implementing-a-thread-safe-singleton-with-c11-using-magic-statics/
 */

#include "singleton.h"
#include "cat.h"

void test()
{
    Singleton<Cat>::GetInstance().setObjectName("Kittenator");
    Singleton<Cat>::GetInstance().meow();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();

    Singleton<Cat>::GetInstance().meow();

    return a.exec();
}
