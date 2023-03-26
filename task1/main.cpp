#include <QCoreApplication>
#include <QTcpServer>
#include <QSqlDatabase>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTcpServer tcpServer;
    QSqlDatabase sqlDatabase;

    std::cout << tcpServer.isListening() << std::endl;
    std::cout << sqlDatabase.isOpen() << std::endl;

    return a.exec();
}
