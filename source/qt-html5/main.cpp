#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtWebEngine/QtWebEngine>
#include "commandlinemanager.h"
#include "websocketmanager.h"
#include "serialportmanager.h"

const QString APPLICATION_NAME = "qt-html5";
const QString APPLICATION_VERSION = "0.1";

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QGuiApplication::setApplicationName(APPLICATION_NAME);
    QGuiApplication::setApplicationVersion(APPLICATION_VERSION);

    QtWebEngine::initialize();

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("applicationPath", QGuiApplication::applicationDirPath());
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
