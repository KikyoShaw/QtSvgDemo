#include <QApplication>
#include "QtWidgetsApplication.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // 创建自定义 QWidget
    QtWidgetsApplication w;
    w.show();

    return app.exec();
}