#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QtCore>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);

protected:
    void run();
};

#endif // MYTHREAD_H
