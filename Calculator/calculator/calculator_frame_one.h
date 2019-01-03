#ifndef CALCULATOR_FRAME_ONE_H
#define CALCULATOR_FRAME_ONE_H
#include <QFrame>
class QLineEdit;
class QPushButton;
class FirstFrameCalculator:public QFrame
{
    Q_OBJECT
protected:
    double summa,dinSumma;
    int tempSizeZero,tempSizeZeroSecond;
    QString znak_chek_equality;
    QString pointTempSecondNumber;
    QString pointTempMainNumber;
    QString znak,znakEqual;
    QString mainLineText;
    QString secondNumber;


    QLineEdit *m_lineEdit;
    QPushButton *m_but1;
    QPushButton *m_but2;
    QPushButton *m_but3;
    QPushButton *m_but4;
    QPushButton *m_but5;
    QPushButton *m_but6;
    QPushButton *m_but7;
    QPushButton *m_but8;
    QPushButton *m_but9;
    QPushButton *m_but0;


    QPushButton *m_butAC;
    QPushButton *m_butPlus;
    QPushButton *m_butMinus;
    QPushButton *m_butMult;
    QPushButton *m_butDiv;
    QPushButton *m_butEquality;
    QPushButton *m_butProzent;
    QPushButton *m_butPoint;

    QPushButton *m_butPlusMinus;
public:
    FirstFrameCalculator(QWidget *parent=0);
    virtual ~FirstFrameCalculator(){}

public slots:
    void SetTextLine1();
    void SetTextLine2();
    void SetTextLine3();
    void SetTextLine4();
    void SetTextLine5();
    void SetTextLine6();
    void SetTextLine7();
    void SetTextLine8();
    void SetTextLine9();
    void SetTextLine0();
    void SetClearLine();

    void SlotPlusLine();
    void SlotMinusLine();
    void SlotDivLine();
    void SlotMultLine();
    void SlotEqLine();
    void SlotPointForDouble();
signals:
    void signal_to_textEdit(const QString&);
};
#endif // CALCULATOR_FRAME_ONE_H
