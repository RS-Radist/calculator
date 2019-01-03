#include "dialog_calculator.h"
#include "calculator_frame_one.h"
#include "calculatror_frame_two.h"
#include <QHBoxLayout>
DialogCalculator::DialogCalculator(QWidget *parent)
    :QDialog (parent)
{
    setWindowFlag(Qt::Dialog);
    FirstFrame=new FirstFrameCalculator(this);
    TwoFrame=new TextEditFrame(this);
//    FirstFrame->setStyleSheet("background: red");
//    TwoFrame->setStyleSheet("background: green");
    layout=new QHBoxLayout(this);
    layout->addWidget(FirstFrame);
    layout->addWidget(TwoFrame);
    QObject::connect(FirstFrame,SIGNAL(signal_to_textEdit(const QString&)),TwoFrame,SLOT(slot_Text_Edit(const QString&)));
}
