#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QPushButton;
class QVBoxLayout;
class QHBoxLayout;
class MainFrame;
class Application;
class QFile;
class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QMenu   *m_MainMenuFile;
    QMenu   *m_MainMenuAbout;

    QAction *m_ActionNewFile;
    QAction *m_ActionAboutQt;
    QAction *m_ActionQuit;

    QVBoxLayout *m_layout;
    MainFrame *m_Frame;
    QPalette *m_pal;

    QFile *file;
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void slot_about_Qt();
};

#endif // MAINWINDOW_H
