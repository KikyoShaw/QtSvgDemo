#include <QApplication>
#include "QtWidgetsApplication.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // �����Զ��� QWidget
    QtWidgetsApplication w;
    w.show();

    return app.exec();
}