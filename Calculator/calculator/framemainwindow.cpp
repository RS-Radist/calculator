#include "framemainwindow.h"
#include "dialog_calculator.h"
#include <QVBoxLayout>
#include <QPushButton>


MainFrame::MainFrame(QWidget *parent):QFrame(parent)
{
    QHBoxLayout *layout=new QHBoxLayout(this);
    m_butStart=new QPushButton("Start",this);
    m_butStart->setMaximumSize(200,100);
    m_butStart->setStyleSheet("background: green");
    layout->addWidget(m_butStart);
    layout->addSpacing(10);
    layout->setMargin(0);
    connect(m_butStart,SIGNAL(clicked())
                      ,this,SLOT(OpenCalculator()));

    connect(this,SIGNAL(signal_Frame_open()),
            this,SLOT(OpenCalculator()));
}

void MainFrame::OpenCalculator()
{
    DialogCalculator dia;
    dia.exec();
}
