#include <QApplication>

#include "mainwindow.h"
#include <QTranslator>
#include <QTime>


int main(int argc, char *argv[])
{  
    QApplication app(argc, argv);

    QTranslator translator;
    translator.load(":/qm/spreadsheet.qm");
    app.installTranslator(&translator);


    MainWindow mainWin;
    mainWin.show();
    return app.exec();
}
