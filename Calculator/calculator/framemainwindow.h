#ifndef FRAMEMAINWINDOW_H
#define FRAMEMAINWINDOW_H
#include <QFrame>
class QPushButton;
class MainFrame:public QFrame
{
    Q_OBJECT
public:
    MainFrame(QWidget *parent=0);
    virtual ~MainFrame(){}

private:
    QPushButton *m_butStart;
public slots:
    void OpenCalculator();
signals:
    void signal_Frame_open();
};
#endif // FRAMEMAINWINDOW_H
