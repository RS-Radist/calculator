#ifndef CALCULATROR_FRAME_TWO_H
#define CALCULATROR_FRAME_TWO_H
#include <QFrame>
class QTextEdit;
class QPushButton;
class TextEditFrame:public QFrame
{
    Q_OBJECT
protected:
    QTextEdit *m_textEdit;
    QString strTextEdit;
    int sizeLineTextEdit,sizeLineListString;
    QString generalStr;
    QString znak;
    QPushButton *m_but_Save_TextEdit;
    QStringList strList;
public:
    TextEditFrame(QWidget *parent=0);
    virtual ~TextEditFrame(){}
public slots:
    void slot_Text_Edit(const QString&);
    void save_File();
};
#endif // CALCULATROR_FRAME_TWO_H
