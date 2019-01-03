#include "calculator_frame_one.h"
#include "calculatror_frame_two.h"
#include <QLineEdit>
#include <QHBoxLayout>
#include <QValidator>
#include <QString>
#include <QPushButton>
#include <QDebug>


FirstFrameCalculator::FirstFrameCalculator(QWidget *parent)
    :QFrame (parent),znak(""),
      mainLineText("0"),
      tempSizeZero(0),
      tempSizeZeroSecond(0)
{
    QVBoxLayout *layout_vertical=new QVBoxLayout(this);


    QHBoxLayout *layout_horizontal = new QHBoxLayout(this);
    m_lineEdit=new QLineEdit(this);
    m_lineEdit->setText(mainLineText);
    mainLineText.clear();
    secondNumber.clear();
    m_lineEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    m_lineEdit->setFont(QFont("z",30,30,true));
    m_lineEdit->setMaxLength(15);

    m_lineEdit->setReadOnly(true);
    layout_horizontal->addWidget(m_lineEdit);



    QGridLayout *layout_grid=new QGridLayout(this);

    m_butAC=new QPushButton(this);
    m_butAC->setText("AC");
    m_butAC->setToolTip("AC");
    m_butAC->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_butPlusMinus=new QPushButton(this);
    m_butPlusMinus->setText("+/-");
    m_butPlusMinus->setToolTip("+/-");
    m_butPlusMinus->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_butProzent=new QPushButton(this);
    m_butProzent->setText("%");
    m_butProzent->setToolTip("%");
    m_butProzent->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_butDiv=new QPushButton(this);
    m_butDiv->setText("/");
    m_butDiv->setToolTip("/");
    m_butDiv->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_butMult=new QPushButton(this);
    m_butMult->setText("*");
    m_butMult->setToolTip("*");
    m_butMult->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_butMinus=new QPushButton(this);
    m_butMinus->setText("-");
    m_butMinus->setToolTip("-");
    m_butMinus->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_butPlus=new QPushButton(this);
    m_butPlus->setText("+");
    m_butPlus->setToolTip("+");
    m_butPlus->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_butEquality=new QPushButton(this);
    m_butEquality->setText("=");
    m_butEquality->setToolTip("=");
    m_butEquality->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_butPoint=new QPushButton(this);
    m_butPoint->setText(",");
    m_butPoint->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_but7=new QPushButton(this);
    m_but7->setText("7");
    m_but7->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_but8=new QPushButton(this);
    m_but8->setText("8");
    m_but8->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_but9=new QPushButton(this);
    m_but9->setText("9");
    m_but9->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_but6=new QPushButton(this);
    m_but6->setText("6");
    m_but6->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_but5=new QPushButton(this);
    m_but5->setText("5");
    m_but5->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_but4=new QPushButton(this);
    m_but4->setText("4");
    m_but4->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_but3=new QPushButton(this);
    m_but3->setText("3");
    m_but3->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_but2=new QPushButton(this);
    m_but2->setText("2");
    m_but2->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_but1=new QPushButton(this);
    m_but1->setText("1");
    m_but1->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    m_but0=new QPushButton(this);
    m_but0->setText("0");
    m_but0->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);



    layout_grid->addWidget(m_butAC,0,0);
    layout_grid->addWidget(m_butPlusMinus,0,1);
    layout_grid->addWidget(m_butProzent,0,2);
    layout_grid->addWidget(m_butDiv,0,3);

    layout_grid->addWidget(m_but7,1,0);
    layout_grid->addWidget(m_but8,1,1);
    layout_grid->addWidget(m_but9,1,2);
    layout_grid->addWidget(m_butMult,1,3);

    layout_grid->addWidget(m_but4,2,0);
    layout_grid->addWidget(m_but5,2,1);
    layout_grid->addWidget(m_but6,2,2);
    layout_grid->addWidget(m_butMinus,2,3);

    layout_grid->addWidget(m_but1,3,0);
    layout_grid->addWidget(m_but2,3,1);
    layout_grid->addWidget(m_but3,3,2);
    layout_grid->addWidget(m_butPlus,3,3);

    layout_grid->addWidget(m_but0,4,0,1,2);
    layout_grid->addWidget(m_butPoint,4,2);
    layout_grid->addWidget(m_butEquality,4,3);



    layout_grid->setMargin(0);
    layout_grid->setContentsMargins(5,5,5,5);
    layout_grid->setSpacing(15);
    layout_vertical->addLayout(layout_horizontal);
    layout_vertical->addLayout(layout_grid);


    connect(m_but1,SIGNAL(clicked()),this,SLOT(SetTextLine1()));
    connect(m_but2,SIGNAL(clicked()),this,SLOT(SetTextLine2()));
    connect(m_but3,SIGNAL(clicked()),this,SLOT(SetTextLine3()));
    connect(m_but4,SIGNAL(clicked()),this,SLOT(SetTextLine4()));
    connect(m_but5,SIGNAL(clicked()),this,SLOT(SetTextLine5()));
    connect(m_but6,SIGNAL(clicked()),this,SLOT(SetTextLine6()));
    connect(m_but7,SIGNAL(clicked()),this,SLOT(SetTextLine7()));
    connect(m_but8,SIGNAL(clicked()),this,SLOT(SetTextLine8()));
    connect(m_but9,SIGNAL(clicked()),this,SLOT(SetTextLine9()));
    connect(m_but0,SIGNAL(clicked()),this,SLOT(SetTextLine0()));
    connect(m_butAC,SIGNAL(clicked()),this,SLOT(SetClearLine()));

    connect(m_butPlus,SIGNAL(clicked()),this,SLOT(SlotPlusLine()));
    connect(m_butMinus,SIGNAL(clicked()),this,SLOT(SlotMinusLine()));
    connect(m_butDiv,SIGNAL(clicked()),this,SLOT(SlotDivLine()));
    connect(m_butMult,SIGNAL(clicked()),this,SLOT(SlotMultLine()));
    connect(m_butEquality,SIGNAL(clicked()),this,SLOT(SlotEqLine()));
    connect(m_butPoint,SIGNAL(clicked()),this,SLOT(SlotPointForDouble()));
}

void FirstFrameCalculator::SetTextLine1()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
        secondNumber+="1";
        m_lineEdit->setText(secondNumber);
    }
    else if (secondNumber[0]=="0")
    {
        if(mainLineText[1]==".")
        {
            secondNumber+="1";
            m_lineEdit->setText(secondNumber);
        }
        else
        {
            secondNumber.clear();
            secondNumber+="1";
            m_lineEdit->setText(secondNumber);
        }
    }
    else if (znak=="=")
    {
        mainLineText.clear();
        secondNumber.clear();
        pointTempMainNumber="";
        pointTempSecondNumber="";
        mainLineText+="1";
        m_lineEdit->setText(mainLineText);
    }
    else
    {
        if(mainLineText.isEmpty())
        {
            mainLineText.clear();
            mainLineText+="1";
            m_lineEdit->setText(mainLineText);
        }
        else if (mainLineText[0]=="0")
        {
            if(mainLineText[1]==".")
            {
                mainLineText+="1";
                m_lineEdit->setText(mainLineText);
            }
            else
            {
                mainLineText.clear();
                mainLineText+="1";
                m_lineEdit->setText(mainLineText);
            }
        }
        else
        {
            mainLineText+="1";
            m_lineEdit->setText(mainLineText);
        }
    }
    emit signal_to_textEdit("1");
}
void FirstFrameCalculator::SetTextLine2()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
        secondNumber+="2";
        m_lineEdit->setText(secondNumber);
    }
    else if (secondNumber[0]=="0")
    {
        if(mainLineText[1]==".")
        {
            secondNumber+="2";
            m_lineEdit->setText(secondNumber);
        }
        else
        {
            secondNumber.clear();
            secondNumber+="2";
            m_lineEdit->setText(secondNumber);
        }
    }
    else if (znak=="=")
    {
        mainLineText.clear();
        secondNumber.clear();
        pointTempMainNumber="";
        pointTempSecondNumber="";
        mainLineText+="2";
        m_lineEdit->setText(mainLineText);
    }
    else
    {
        if(mainLineText.isEmpty())
        {
            mainLineText.clear();
            mainLineText+="2";
            m_lineEdit->setText(mainLineText);
        }
        else if (mainLineText[0]=="0")
        {
            if(mainLineText[1]==".")
            {
                mainLineText+="2";
                m_lineEdit->setText(mainLineText);
            }
            else
            {
                mainLineText.clear();
                mainLineText+="2";
                m_lineEdit->setText(mainLineText);
            }
        }
        else
        {
            mainLineText+="2";
            m_lineEdit->setText(mainLineText);
        }
    }
    emit signal_to_textEdit("2");
}

void FirstFrameCalculator::SetTextLine3()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
        secondNumber+="3";
        m_lineEdit->setText(secondNumber);
    }
    else if (secondNumber[0]=="0")
    {
        if(mainLineText[1]==".")
        {
            secondNumber+="3";
            m_lineEdit->setText(secondNumber);
        }
        else
        {
            secondNumber.clear();
            secondNumber+="3";
            m_lineEdit->setText(secondNumber);
        }
    }
    else if (znak=="=")
    {
        mainLineText.clear();
        secondNumber.clear();
        pointTempMainNumber="";
        pointTempSecondNumber="";
        mainLineText+="3";
        m_lineEdit->setText(mainLineText);
    }
    else
    {
        if(mainLineText.isEmpty())
        {
            mainLineText.clear();
            mainLineText+="3";
            m_lineEdit->setText(mainLineText);
        }
        else if (mainLineText[0]=="0")
        {
            if(mainLineText[1]==".")
            {
                mainLineText+="3";
                m_lineEdit->setText(mainLineText);
            }
            else
            {
                mainLineText.clear();
                mainLineText+="3";
                m_lineEdit->setText(mainLineText);
            }
        }
        else
        {
            mainLineText+="3";
            m_lineEdit->setText(mainLineText);
        }
    }
    emit signal_to_textEdit("3");
}

void FirstFrameCalculator::SetTextLine4()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
        secondNumber+="4";
        m_lineEdit->setText(secondNumber);
    }
    else if (secondNumber[0]=="0")
    {
        if(mainLineText[1]==".")
        {
            secondNumber+="4";
            m_lineEdit->setText(secondNumber);
        }
        else
        {
            secondNumber.clear();
            secondNumber+="4";
            m_lineEdit->setText(secondNumber);
        }
    }
    else if (znak=="=")
    {
        mainLineText.clear();
        secondNumber.clear();
        pointTempMainNumber="";
        pointTempSecondNumber="";
        mainLineText+="4";
        m_lineEdit->setText(mainLineText);
    }
    else
    {
        if(mainLineText.isEmpty())
        {
            mainLineText.clear();
            mainLineText+="4";
            m_lineEdit->setText(mainLineText);
        }
        else if (mainLineText[0]=="0")
        {
            if(mainLineText[1]==".")
            {
                mainLineText+="4";
                m_lineEdit->setText(mainLineText);
            }
            else
            {
                mainLineText.clear();
                mainLineText+="4";
                m_lineEdit->setText(mainLineText);
            }
        }
        else
        {
            mainLineText+="4";
            m_lineEdit->setText(mainLineText);
        }
    }
    emit signal_to_textEdit("4");
}

void FirstFrameCalculator::SetTextLine5()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
        secondNumber+="5";
        m_lineEdit->setText(secondNumber);
    }
    else if (secondNumber[0]=="0")
    {
        if(mainLineText[1]==".")
        {
            secondNumber+="5";
            m_lineEdit->setText(secondNumber);
        }
        else
        {
            secondNumber.clear();
            secondNumber+="5";
            m_lineEdit->setText(secondNumber);
        }
    }
    else if (znak=="=")
    {
        mainLineText.clear();
        secondNumber.clear();
        pointTempMainNumber="";
        pointTempSecondNumber="";
        mainLineText+="5";
        m_lineEdit->setText(mainLineText);
    }
    else
    {
        if(mainLineText.isEmpty())
        {
            mainLineText.clear();
            mainLineText+="5";
            m_lineEdit->setText(mainLineText);
        }
        else if (mainLineText[0]=="0")
        {
            if(mainLineText[1]==".")
            {
                mainLineText+="5";
                m_lineEdit->setText(mainLineText);
            }
            else
            {
                mainLineText.clear();
                mainLineText+="5";
                m_lineEdit->setText(mainLineText);
            }
        }
        else
        {
            mainLineText+="5";
            m_lineEdit->setText(mainLineText);
        }
    }
    emit signal_to_textEdit("5");
}

void FirstFrameCalculator::SetTextLine6()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
        secondNumber+="6";
        m_lineEdit->setText(secondNumber);
    }
    else if (secondNumber[0]=="0")
    {
        if(mainLineText[1]==".")
        {
            secondNumber+="6";
            m_lineEdit->setText(secondNumber);
        }
        else
        {
            secondNumber.clear();
            secondNumber+="6";
            m_lineEdit->setText(secondNumber);
        }
    }
    else if (znak=="=")
    {
        mainLineText.clear();
        secondNumber.clear();
        pointTempMainNumber="";
        pointTempSecondNumber="";
        mainLineText+="6";
        m_lineEdit->setText(mainLineText);
    }
    else
    {
        if(mainLineText.isEmpty())
        {
            mainLineText.clear();
            mainLineText+="6";
            m_lineEdit->setText(mainLineText);
        }
        else if (mainLineText[0]=="0")
        {
            if(mainLineText[1]==".")
            {
                mainLineText+="6";
                m_lineEdit->setText(mainLineText);
            }
            else
            {
                mainLineText.clear();
                mainLineText+="6";
                m_lineEdit->setText(mainLineText);
            }
        }
        else
        {
            mainLineText+="6";
            m_lineEdit->setText(mainLineText);
        }
    }
    emit signal_to_textEdit("6");
}
void FirstFrameCalculator::SetTextLine7()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
        secondNumber+="7";
        m_lineEdit->setText(secondNumber);
    }
    else if (secondNumber[0]=="0")
    {
        if(mainLineText[1]==".")
        {
            secondNumber+="7";
            m_lineEdit->setText(secondNumber);
        }
        else
        {
            secondNumber.clear();
            secondNumber+="7";
            m_lineEdit->setText(secondNumber);
        }
    }
    else if (znak=="=")
    {
        mainLineText.clear();
        secondNumber.clear();
        pointTempMainNumber="";
        pointTempSecondNumber="";
        mainLineText+="7";
        m_lineEdit->setText(mainLineText);
    }
    else
    {
        if(mainLineText.isEmpty())
        {
            mainLineText.clear();
            mainLineText+="7";
            m_lineEdit->setText(mainLineText);
        }
        else if (mainLineText[0]=="0")
        {
            if(mainLineText[1]==".")
            {
                mainLineText+="7";
                m_lineEdit->setText(mainLineText);
            }
            else
            {
                mainLineText.clear();
                mainLineText+="7";
                m_lineEdit->setText(mainLineText);
            }
        }
        else
        {
            mainLineText+="7";
            m_lineEdit->setText(mainLineText);
        }
    }
    emit signal_to_textEdit("7");
}
void FirstFrameCalculator::SetTextLine8()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
        secondNumber+="8";
        m_lineEdit->setText(secondNumber);
    }
    else if (secondNumber[0]=="0")
    {
        if(mainLineText[1]==".")
        {
            secondNumber+="8";
            m_lineEdit->setText(secondNumber);
        }
        else
        {
            secondNumber.clear();
            secondNumber+="8";
            m_lineEdit->setText(secondNumber);
        }
    }
    else if (znak=="=")
    {
        mainLineText.clear();
        secondNumber.clear();
        pointTempMainNumber="";
        pointTempSecondNumber="";
        mainLineText+="8";
        m_lineEdit->setText(mainLineText);
    }
    else
    {
        if(mainLineText.isEmpty())
        {
            mainLineText.clear();
            mainLineText+="8";
            m_lineEdit->setText(mainLineText);
        }
        else if (mainLineText[0]=="0")
        {
            if(mainLineText[1]==".")
            {
                mainLineText+="8";
                m_lineEdit->setText(mainLineText);
            }
            else
            {
                mainLineText.clear();
                mainLineText+="8";
                m_lineEdit->setText(mainLineText);
            }
        }
        else
        {
            mainLineText+="8";
            m_lineEdit->setText(mainLineText);
        }
    }
    emit signal_to_textEdit("8");
}

void FirstFrameCalculator::SetTextLine9()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
        secondNumber+="9";
        m_lineEdit->setText(secondNumber);
    }
    else if (secondNumber[0]=="0")
    {
        if(mainLineText[1]==".")
        {
            secondNumber+="9";
            m_lineEdit->setText(secondNumber);
        }
        else
        {
            secondNumber.clear();
            secondNumber+="9";
            m_lineEdit->setText(secondNumber);
        }
    }
    else if (znak=="=")
    {
        mainLineText.clear();
        secondNumber.clear();
        pointTempMainNumber="";
        pointTempSecondNumber="";
        mainLineText+="9";
        m_lineEdit->setText(mainLineText);
    }
    else
    {
        if(mainLineText.isEmpty())
        {
            mainLineText.clear();
            mainLineText+="9";
            m_lineEdit->setText(mainLineText);
        }
        else if (mainLineText[0]=="0")
        {
            if(mainLineText[1]==".")
            {
                mainLineText+="9";
                m_lineEdit->setText(mainLineText);
            }
            else
            {
                mainLineText.clear();
                mainLineText+="9";
                m_lineEdit->setText(mainLineText);
            }
        }
        else
        {
            mainLineText+="9";
            m_lineEdit->setText(mainLineText);
        }
    }
    emit signal_to_textEdit("9");
}

void FirstFrameCalculator::SetTextLine0()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
        if(secondNumber.isEmpty()&&tempSizeZeroSecond==0)
        {
            ++tempSizeZeroSecond;
            secondNumber+="0";
            emit signal_to_textEdit("0");
        }
        else if(tempSizeZeroSecond==1&&secondNumber[1]==".")
        {
            ++tempSizeZeroSecond;
            secondNumber+="0";
            m_lineEdit->setText(secondNumber);
            emit signal_to_textEdit("0");
        }
        else if (tempSizeZeroSecond==2)
        {
            secondNumber+="0";
            m_lineEdit->setText(secondNumber);
            emit signal_to_textEdit("0");
        }
        else if (secondNumber[0]=="9"
                 ||secondNumber[0]=="8"
                 ||secondNumber[0]=="7"
                 ||secondNumber[0]=="6"
                 ||secondNumber[0]=="5"
                 ||secondNumber[0]=="4"
                 ||secondNumber[0]=="3"
                 ||secondNumber[0]=="2"
                 ||secondNumber[0]=="1")
        {
            secondNumber+="0";
            m_lineEdit->setText(secondNumber);
            emit signal_to_textEdit("0");
        }
    }
    else if (znak=="=")
    {
        mainLineText.clear();
        secondNumber.clear();
        pointTempMainNumber="";
        pointTempSecondNumber="";
        mainLineText+="0";
        m_lineEdit->setText(mainLineText);
        emit signal_to_textEdit("0");
    }
    else
    {
        if(mainLineText.isEmpty()&&tempSizeZero==0)
        {
            ++tempSizeZero;
            mainLineText+="0";
            emit signal_to_textEdit("0");
        }
        else if(tempSizeZero==1&&mainLineText[1]==".")
        {
            ++tempSizeZero;
            mainLineText+="0";
            m_lineEdit->setText(mainLineText);
            emit signal_to_textEdit("0");
        }
        else if (tempSizeZero==2)
        {
            mainLineText+="0";
            m_lineEdit->setText(mainLineText);
            emit signal_to_textEdit("0");
        }
        else if (mainLineText[0]=="9"
                 ||mainLineText[0]=="8"
                 ||mainLineText[0]=="7"
                 ||mainLineText[0]=="6"
                 ||mainLineText[0]=="5"
                 ||mainLineText[0]=="4"
                 ||mainLineText[0]=="3"
                 ||mainLineText[0]=="2"
                 ||mainLineText[0]=="1")
        {
            mainLineText+="0";
            m_lineEdit->setText(mainLineText);
            emit signal_to_textEdit("0");
        }
    }
}
void FirstFrameCalculator::SetClearLine()
{
    mainLineText.clear();
    secondNumber.clear();
    tempSizeZero=0;
    tempSizeZeroSecond=0;
    m_lineEdit->setText("0");
    znak.clear();
    dinSumma=0;
    pointTempSecondNumber.clear();
    pointTempMainNumber.clear();
    emit signal_to_textEdit("\n");
}

void FirstFrameCalculator::SlotPlusLine()
{
    if (znak!="-"&&znak!="+"&&znak!="/"&&znak!="*"&&znak!="=")
    {
        m_lineEdit->setText("0");
        znak="+";// первый ввод
        emit signal_to_textEdit(znak);
        secondNumber.clear();

    }
    else if (znak=="+")
    {
       znak="+";
       emit signal_to_textEdit(znak);
       summa=mainLineText.toDouble() + secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//

    }
    else if (znak=="/")
    {
       znak="+";
       summa=mainLineText.toDouble() / secondNumber.toDouble();
       emit signal_to_textEdit(znak);
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//

    }
    else if (znak=="*")
    {
       znak="+";
       summa=mainLineText.toDouble() * secondNumber.toDouble();
       emit signal_to_textEdit(znak);
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//

    }
    else if (znak=="-")
    {
       znak="+";
       summa=mainLineText.toDouble() - secondNumber.toDouble();
       emit signal_to_textEdit(znak);
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//

    }
    else if (znak=="=")
    {
        znak="+";
        emit signal_to_textEdit(znak);
        m_lineEdit->setText(mainLineText);
        secondNumber.clear();
    }
    tempSizeZero=0;
    tempSizeZeroSecond=0;
    pointTempSecondNumber.clear();
    pointTempMainNumber.clear();
}
void FirstFrameCalculator::SlotMinusLine()
{
    if (znak!="-"&&znak!="+"&&znak!="/"&&znak!="*"&&znak!="=")
    {
        m_lineEdit->setText("0");
        znak="-";// первый ввод
        secondNumber.clear();
    }
    else if (znak=="+")
    {
       znak="-";
       summa=mainLineText.toDouble() + secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="/")
    {
       znak="-";
       summa=mainLineText.toDouble() / secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//  
    }
    else if (znak=="*")
    {
       znak="-";
       summa=mainLineText.toDouble() * secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="-")
    {
       znak="-";
       summa=mainLineText.toDouble() - secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="=")
    {
        znak="-";
        m_lineEdit->setText(mainLineText);
        secondNumber.clear();
    }
    emit signal_to_textEdit(znak);
    pointTempSecondNumber.clear();
    pointTempMainNumber.clear();
}
void FirstFrameCalculator::SlotDivLine()
{
    if (znak!="-"&&znak!="+"&&znak!="/"&&znak!="*"&&znak!="=")
    {
        m_lineEdit->setText("0");
        znak="/";// первый ввод
        secondNumber.clear();
    }
    else if (znak=="+")
    {
       znak="/";
       summa=mainLineText.toDouble() + secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="/")
    {
       znak="/";
       summa=mainLineText.toDouble() / secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="*")
    {
       znak="/";
       summa=mainLineText.toDouble() * secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="-")
    {
       znak="/";
       summa=mainLineText.toDouble() - secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="=")
    {
        znak="/";
        m_lineEdit->setText(mainLineText);
        secondNumber.clear();
    }
    emit signal_to_textEdit(znak);
    pointTempSecondNumber.clear();
    pointTempMainNumber.clear();
}
void FirstFrameCalculator::SlotMultLine()
{
    if (znak!="-"&&znak!="+"&&znak!="/"&&znak!="*"&&znak!="=")
    {
        m_lineEdit->setText("0");
        znak="*";// первый ввод
        secondNumber.clear();
    }
    else if (znak=="+")
    {
       znak="*";
       summa=mainLineText.toDouble() + secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="/")
    {
       znak="*";
       summa=mainLineText.toDouble() / secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="*")
    {
       znak="*";
       summa=mainLineText.toDouble() * secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="-")
    {
       znak="*";
       summa=mainLineText.toDouble() - secondNumber.toDouble();
       m_lineEdit->setText(QString::number(summa));
       mainLineText=QString::number(summa);
       secondNumber.clear();//
    }
    else if (znak=="=")
    {
        znak="*";
        m_lineEdit->setText(mainLineText);
        secondNumber.clear();
    }
    emit signal_to_textEdit(znak);
    pointTempSecondNumber.clear();
    pointTempMainNumber.clear();
}
void FirstFrameCalculator::SlotEqLine()
{   
    if (znak=="+")
    {
        if(secondNumber.isEmpty())
        {
            znak_chek_equality="=";
            znakEqual="+";
            dinSumma=mainLineText.toDouble();
            summa=mainLineText.toDouble() + dinSumma;
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
        else
        {
            znak_chek_equality="+";
            summa=mainLineText.toDouble() + secondNumber.toDouble();
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
    }
    if (znak=="-")
    {
        if(secondNumber.isEmpty())
        {
            znak_chek_equality="=";
            znakEqual="-";
            dinSumma=mainLineText.toDouble();
            summa=mainLineText.toDouble() - dinSumma;
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
        else
        {
            znak_chek_equality="-";
            summa=mainLineText.toDouble() - secondNumber.toDouble();
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
    }
    if (znak=="/")
    {
        znak_chek_equality="/";
        if (secondNumber.toDouble()==0)
        {
            m_lineEdit->setText("Ошибка!");
            mainLineText.clear();
            secondNumber.clear();
        }
        else if(secondNumber.isEmpty())
        {
            znak_chek_equality="=";
            znakEqual="/";
            dinSumma=mainLineText.toDouble();
            summa=mainLineText.toDouble() / dinSumma;
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
        else
        {
            summa=mainLineText.toDouble() / secondNumber.toDouble();
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
    }
    if (znak=="*")
    {
        if(secondNumber.isEmpty())
        {
            znak_chek_equality="=";
            znakEqual="*";
            dinSumma=mainLineText.toDouble();
            summa=mainLineText.toDouble() * dinSumma;
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
        else
        {
            znak_chek_equality="*";
            summa=mainLineText.toDouble() * secondNumber.toDouble();
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
    }
    if (znak=="=")
    {
        if(znak_chek_equality=="+")
        {
            summa=mainLineText.toDouble() + secondNumber.toDouble();
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
        else if(znak_chek_equality=="-")
        {
            summa=mainLineText.toDouble() - secondNumber.toDouble();
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
        else if(znak_chek_equality=="*")
        {
            summa=mainLineText.toDouble() * secondNumber.toDouble();
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
        else if(znak_chek_equality=="/")
        {
            summa=mainLineText.toDouble() / secondNumber.toDouble();
            m_lineEdit->setText(QString::number(summa));
            mainLineText=QString::number(summa);
        }
        else if(znak_chek_equality=="=")
        {
            if(znakEqual=="+")
            {
                summa=mainLineText.toDouble() + dinSumma;
                m_lineEdit->setText(QString::number(summa));
                mainLineText=QString::number(summa);
            }
            else if(znakEqual=="-")
            {
                summa=mainLineText.toDouble() - dinSumma;
                m_lineEdit->setText(QString::number(summa));
                mainLineText=QString::number(summa);
            }
            else if(znakEqual=="*")
            {
                summa=mainLineText.toDouble() * dinSumma;
                m_lineEdit->setText(QString::number(summa));
                mainLineText=QString::number(summa);
            }
            else if(znakEqual=="/")
            {
                summa=mainLineText.toDouble() / dinSumma;
                m_lineEdit->setText(QString::number(summa));
                mainLineText=QString::number(summa);
            }

        }
    }
    znak="="; 
    tempSizeZero=0;
    tempSizeZeroSecond=0;
    pointTempSecondNumber.clear();
    pointTempMainNumber.clear();
    emit signal_to_textEdit(znak);
    emit signal_to_textEdit(QString::number(summa));
}

void FirstFrameCalculator::SlotPointForDouble()
{
    if (znak=="+"||znak=="-"||znak=="*"||znak=="/")
    {
            for (int i=0;i<secondNumber.size();++i)
            {
                if(pointTempSecondNumber==".")
                {
                    qDebug()<<"Second Point";
                    break;
                }
                if (secondNumber[i]!=".")
                {
                    secondNumber+=".";
                    pointTempSecondNumber=".";
                    m_lineEdit->setText(secondNumber);
                }
            }
    }
    else
    {
        for (int i=0;i<mainLineText.size();++i)
        {
            if(pointTempMainNumber==".")
            {
                qDebug()<<"Main Point";
                break;
            }
            if (mainLineText[i]!=".")
            {
                mainLineText+=".";
                pointTempMainNumber=".";
                m_lineEdit->setText(mainLineText);
            }
        }
    }

    emit signal_to_textEdit(".");
}
