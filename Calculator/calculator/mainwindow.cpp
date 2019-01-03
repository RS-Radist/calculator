#include "mainwindow.h"
#include "framemainwindow.h"
#include "application.h"
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QFrame>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Calculator");
    setFixedSize(500,500);

    QBrush brash(Qt::TexturePattern);
    brash.setTextureImage(QImage("/Users/macbook/Desktop/LearningQt5/Calculator/pictures/1.png"));
    m_pal=new QPalette(this->palette());
    m_pal->setBrush(QPalette::Background,brash);
    setPalette(*m_pal);

    // MENU
    m_MainMenuFile=new QMenu(tr("File"),this);
    m_MainMenuAbout=new QMenu(tr("About"),this);

    m_ActionNewFile=new QAction(this);
    m_ActionNewFile->setText(tr("New File"));
    m_ActionNewFile->setMenuRole(QAction::NoRole);

    m_ActionAboutQt =new QAction(this);
    m_ActionAboutQt->setText(tr("About"));
    m_ActionAboutQt->setMenuRole(QAction::NoRole);

    m_ActionQuit=new QAction(this);
    m_ActionQuit->setText(tr("Quit"));
    m_ActionQuit->setMenuRole(QAction::NoRole);

    m_MainMenuFile->addAction(m_ActionNewFile);

    m_MainMenuAbout->addAction(m_ActionAboutQt);
    m_MainMenuAbout->addAction(m_ActionQuit);

    menuBar()->addMenu(m_MainMenuFile);
    menuBar()->addMenu(m_MainMenuAbout);

    // Button
    m_layout=new QVBoxLayout (this);
    m_layout->setMargin(0);
    m_Frame=new MainFrame(this);
    m_layout->addWidget(m_Frame);
    setCentralWidget(m_Frame);
    connect(m_ActionNewFile,SIGNAL(triggered()),m_Frame,SIGNAL(signal_Frame_open()));//Open
    connect(m_ActionAboutQt,SIGNAL(triggered()),this,SLOT(slot_about_Qt()));//About Qt
    connect(m_ActionQuit,SIGNAL(triggered()),this,SLOT(close()));//close
}
MainWindow::~MainWindow()
{

}

void MainWindow::slot_about_Qt()
{
    QMessageBox::aboutQt(this,"Calculator");
}




