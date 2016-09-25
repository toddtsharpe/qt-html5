#ifndef WEBSOCKETMANAGER_H
#define WEBSOCKETMANAGER_H

#include <QObject>
#include <QtWebChannel/QtWebChannel>
#include <QtWebSockets/QWebSocketServer>
#include "./websocket/websocketclientwrapper.h"
#include "./websocket/websockettransport.h"

class WebSocketManager : public QObject
{
    Q_OBJECT
public:
    explicit WebSocketManager(QObject *parent = 0);

signals:

public slots:
};

#endif // WEBSOCKETMANAGER_H
