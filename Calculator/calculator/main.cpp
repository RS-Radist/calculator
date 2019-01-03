#include "mainwindow.h"
#include "application.h"
#include <QDebug>
#include <QString>
#include <QTime>
#include <QSplashScreen>
#include <QFontMetrics>
void LoadModules(QSplashScreen * imageScreen)
{
    QTime time;
    time.start();
    //QFontMetrics fm(QFont ("Courier",25,QFont::Bold));
    QString str="Loading modules:";
    for (int i = 0;i<100;++i)
    {
        if(time.elapsed()>40)
        {
            time.start();
            ++i;
        }
        imageScreen->showMessage(str + QString::number(i) + "%",
            Qt::AlignHCenter | Qt::AlignBottom,Qt::white);
         qApp->processEvents();
    }
}
int main(int argc, char *argv[])
{
    Application a (argc,argv);
    QSplashScreen splash (QPixmap("/Users/macbook/Desktop/Galaxy-NGC-3190b.jpg"));
    MainWindow w;
    splash.show();
    LoadModules(&splash);
    splash.finish(&w);
    w.show();

    return a.exec();
}
