#include "mainwindow.hpp"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    QApplication a(argc, argv);
    QFile styleFile("/home/robox/gui/server/gui_node/styles/Darkeum.qss");
    styleFile.open(QFile::ReadOnly);
    QString style(styleFile.readAll());
    a.setStyleSheet(style);
    MainWindow w;
    w.show();
    a.exec();
    rclcpp::shutdown();
    return 0;
}
