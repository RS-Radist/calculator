#include "calculatror_frame_two.h"
#include <QTextEdit>
#include <QVBoxLayout>
#include <QDebug>
#include <QFileDialog>
#include <QPushButton>
TextEditFrame::TextEditFrame(QWidget *parent):QFrame(parent),sizeLineTextEdit(0)
{
    m_textEdit=new QTextEdit(this);
    m_textEdit->setReadOnly(true);
    m_but_Save_TextEdit=new QPushButton(this);
    m_but_Save_TextEdit->setText("Save File");
    m_but_Save_TextEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    m_but_Save_TextEdit->setToolTip("Save File");
    QVBoxLayout *layout=new QVBoxLayout(this);
    layout->addWidget(m_textEdit);
    layout->addWidget(m_but_Save_TextEdit);
    layout->setMargin(0);
    layout->setContentsMargins(5,5,5,5);
    layout->setSpacing(15);
    m_textEdit->setFont(QFont("Times New Roman",30,30,true));
    connect(m_but_Save_TextEdit,SIGNAL(clicked()),this,SLOT(save_File()));
}

void TextEditFrame::slot_Text_Edit(const QString& tempText)
{
    strList=generalStr.split("\n");
    strTextEdit+=tempText;
    ++sizeLineTextEdit;
    m_textEdit->setText(strTextEdit);

    //Знак
    if(strTextEdit[sizeLineTextEdit]=="+"
    ||strTextEdit[sizeLineTextEdit]=="-"
    ||strTextEdit[sizeLineTextEdit]=="*"
    ||strTextEdit[sizeLineTextEdit]=="/"
    ||strTextEdit[sizeLineTextEdit]=="=")
    {
        znak=strTextEdit[sizeLineTextEdit];
        m_textEdit->setText(znak);
    }

    //первый ноль потом другое число / замена нуля
    if(strTextEdit[0]=="0")
    {
        if (strTextEdit[1]=="1"
          ||strTextEdit[1]=="2"
          ||strTextEdit[1]=="3"
          ||strTextEdit[1]=="4"
          ||strTextEdit[1]=="5"
          ||strTextEdit[1]=="6"
          ||strTextEdit[1]=="7"
          ||strTextEdit[1]=="8"
          ||strTextEdit[1]=="9")
        {
            strTextEdit.clear();
            m_textEdit->clear();
            m_textEdit->setText(tempText);
        }
    }
    if(tempText=="\n")
    {
         generalStr+=strTextEdit;
         ++sizeLineListString;
         strList.push_back(generalStr);
         for(int i = 0;i<strList.size();++i)
         {
             m_textEdit->setText(strList.at(i));
         }
         strTextEdit.clear();
    }
}

void TextEditFrame::save_File()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Text File"), "calculator", tr("Text Files (*.txt)"));
    if (fileName != "")
        {
            QFile file(QFileInfo(fileName).absoluteFilePath());
            if (file.open(QIODevice::WriteOnly))
            {
                QString text = m_textEdit->toPlainText();
                QTextStream out(&file);
                out << text;
                file.close();
            }
            else
            {
                //TODO: Error message
            }
        }
}
// Добавить изменение знака в Текст Едите ! // если вводим два знака
