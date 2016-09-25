#ifndef COMMANDLINEMANAGER_H
#define COMMANDLINEMANAGER_H

#include <QObject>

class CommandLineManager : public QObject
{
    Q_OBJECT
public:
    explicit CommandLineManager(QObject *parent = 0);

signals:

public slots:
};

#endif // COMMANDLINEMANAGER_H