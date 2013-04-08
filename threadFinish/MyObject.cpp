#include "MyObject.h"

MyObject::MyObject(QObject *parent) :
    QObject(parent)
{
}

void MyObject::start()
{
    QTimer *timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, SIGNAL(timeout()), SLOT(DoSomething()));
    MyThread *t = new MyThread(this);
    connect(t, SIGNAL(finished()), SLOT(onFinished()));
    connect(t, SIGNAL(finished()), timer, SLOT(start()));
    t->start();
}

void MyObject::DoSomething()
{
    qDebug() << "DoSomething()";
}

void MyObject::onFinished()
{
    qDebug() << "onFinished()";
}
