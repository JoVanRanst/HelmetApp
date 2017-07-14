#include "mainmenu.h"
#include "animationmenu.h"
#include "textmenu.h"
#include "soundmenu.h"
#include "optionsmenu.h"
#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    /// Set main style
    QFile styleFile(":/styleBase.qss");
    styleFile.open(QFile::ReadOnly);
    QString styleMain = QLatin1String(styleFile.readAll());
    app.setStyleSheet(styleMain);

    ///Create main window
    MainMenu mainWindow;
    mainWindow.show();

    return app.exec();
}
