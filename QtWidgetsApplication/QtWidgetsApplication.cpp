#include "QtWidgetsApplication.h"
#include <QSvgWidget>
#include <QVBoxLayout>

QtWidgetsApplication::QtWidgetsApplication(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    // 创建 QSvgWidget，加载 SVG 文件
    QSvgWidget* svg_widget = new QSvgWidget(":/pfx/qrc/setting-svgrepo-com.svg");
    // 创建布局
    QVBoxLayout* layout = new QVBoxLayout();

    // 将 svg_widget 添加到布局中
    layout->addWidget(svg_widget);

    // 设置窗口的布局
    setLayout(layout);

}

QtWidgetsApplication::~QtWidgetsApplication()
{
}
