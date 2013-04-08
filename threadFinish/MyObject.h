#ifndef MYOBJECT_H
#define MYOBJECT_H

#include "MyThread.h"

class MyObject : public QObject
{
    Q_OBJECT
public:
    explicit MyObject(QObject *parent = 0);

    void start();

protected slots:
    void DoSomething();

    void onFinished();
};

#endif // MYOBJECT_H
