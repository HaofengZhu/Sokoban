#ifndef MAPPAINT_H
#define MAPPAINT_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QMessageBox>
#include "define.h"
class mappaint : public QWidget
{
    Q_OBJECT

public:
    mappaint(QWidget *parent = 0);

    void paintEvent(QPaintEvent *event);
    int map_x,map_y;
    int man_x_1,man_y_1;
    int man_x_2,man_y_2;
    int levelNow;
    int stepNow_1;
    int stepNow_2;
    std::vector<std::vector<int> > mapNow_1;
    std::vector<std::vector<int> > mapNow_2;
    QPixmap *paint[6];
    int BeginOrEnd;

};

#endif // MAPPAINT_H
