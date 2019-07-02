#ifndef CONSOLELINE_H
#define CONSOLELINE_H

#include <qmainwindow.h>
#include <qwidget.h>

namespace Ui {
class ConsoleLine;
}

class ConsoleLine : public QMainWindow
{
    Q_OBJECT

public:
    explicit ConsoleLine(QWidget *parent = nullptr);
    ~ConsoleLine();

private:
    Ui::ConsoleLine *ui;
};

#endif // CONSOLELINE_H
