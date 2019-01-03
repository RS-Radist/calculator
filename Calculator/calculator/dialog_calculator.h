#ifndef DIALOG_CALCULATOR_H
#define DIALOG_CALCULATOR_H

#include <QDialog>
class QHBoxLayout;
class FirstFrameCalculator;
class TextEditFrame;
class DialogCalculator:public QDialog
{
    Q_OBJECT
public:
    DialogCalculator(QWidget * parent=0);
    virtual ~DialogCalculator(){}

private:
    FirstFrameCalculator *FirstFrame;
    TextEditFrame *TwoFrame;
    QHBoxLayout *layout;


};
#endif // DIALOG_CALCULATOR_H
