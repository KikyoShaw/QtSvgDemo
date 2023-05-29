#include "QtWidgetsApplication.h"
#include <QSvgWidget>
#include <QVBoxLayout>

QtWidgetsApplication::QtWidgetsApplication(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    // ���� QSvgWidget������ SVG �ļ�
    QSvgWidget* svg_widget = new QSvgWidget(":/pfx/qrc/setting-svgrepo-com.svg");
    // ��������
    QVBoxLayout* layout = new QVBoxLayout();

    // �� svg_widget ��ӵ�������
    layout->addWidget(svg_widget);

    // ���ô��ڵĲ���
    setLayout(layout);

}

QtWidgetsApplication::~QtWidgetsApplication()
{
}
