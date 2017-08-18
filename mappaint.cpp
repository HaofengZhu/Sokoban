#include "mappaint.h"
#include<QDebug>
mappaint::mappaint(QWidget *parent) :

    QWidget(parent)
{
    map_x=600;
    map_y=480;
    setFixedSize(map_x,map_y);
    paint[0]=new QPixmap(":/image/images/ground.png");
    paint[1]=new QPixmap(":/image/images/wall.png");
    paint[2]=new QPixmap(":/image/images/man.png");
    paint[3]=new QPixmap(":/image/images/box.png");
    paint[4]=new QPixmap(":/image/images/goal.png");
    paint[5]=new QPixmap(":/image/images/start.png");
}
void mappaint::paintEvent(QPaintEvent *event)
{
    QPainter p(this);

    if(BeginOrEnd==start::endGame)
    {
        setFixedSize(map_x,map_y);
        qDebug()<<"paint game for end";
        QPixmap s_1=*paint[5];
        p.drawPixmap(0,0,s_1);
    }
    if(BeginOrEnd==start::startForTwo)
    {
        qDebug()<<"paint game for two"<<BeginOrEnd;
        setFixedSize(map_x*2+30,map_y);

        for(int i=0;i<16;i++)
            for(int j=0;j<20;j++)
            {
                QPixmap l=*paint[DEFINE::GROUND];
                p.drawPixmap(j*30,i*30,l);
            }
        for(int i=0;i<16;i++)
            for(int j=0;j<20;j++)
            {
                QPixmap l=*paint[DEFINE::GROUND];
                p.drawPixmap(j*30+630,i*30,l);
            }
        for(int i=0;i<mapNow_1.size();i++)
            for(int j=0;j<mapNow_1[0].size();j++)
            {

                if(mapNow_1[i][j]!=DEFINE::MAN)
                {
                    QPixmap l=*paint[mapNow_1[i][j]];
                    p.drawPixmap((j+9-mapNow_1[i].size()/2+1)*30
                                 ,(i+9-mapNow_1.size()/2-1)*30,l);
                }
                else
                {
                    QPixmap l=*paint[DEFINE::GROUND];
                    p.drawPixmap((j+9-mapNow_1[i].size()/2+1)*30
                                 ,(i+9-mapNow_1.size()/2-1)*30,l);
                }


            }
        qDebug()<<"c";
        for(int i=0;i<mapNow_2.size();i++)
            for(int j=0;j<mapNow_2[0].size();j++)
            {

                    if(mapNow_2[i][j]!=DEFINE::MAN)
                    {
                        QPixmap l=*paint[mapNow_2[i][j]];
                        p.drawPixmap((j+9-mapNow_2[i].size()/2+1)*30+630,
                                     (i+9-mapNow_2.size()/2-1)*30,l);
                    }
                    else
                    {
                        QPixmap l=*paint[DEFINE::GROUND];
                        p.drawPixmap((j+9-mapNow_2[i].size()/2+1)*30
                                     ,(i+9-mapNow_2.size()/2-1)*30,l);
                    }


            }
        qDebug()<<"d";
        QPixmap l1=*paint[2];
        p.drawPixmap((man_y_1+9-mapNow_1[0].size()/2+1)*30
                ,(man_x_1+9-mapNow_1.size()/2-1)*30,l1);
        p.drawPixmap((man_y_2+9-mapNow_2[0].size()/2+1)*30+630
                ,(man_x_2+9-mapNow_2.size()/2-1)*30,l1);

    }
    if(BeginOrEnd==start::startForOne)
    {
        setFixedSize(map_x,map_y);
        qDebug()<<"paint game for one"<<BeginOrEnd;
        for(int i=0;i<16;i++)
            for(int j=0;j<20;j++)
            {
                QPixmap l=*paint[DEFINE::GROUND];
                p.drawPixmap(j*30,i*30,l);
            }

        for(int i=0;i<mapNow_1.size();i++)
            for(int j=0;j<mapNow_1[0].size();j++)
            {

                if(mapNow_1[i][j]!=DEFINE::MAN)
                {
                    QPixmap l=*paint[mapNow_1[i][j]];
                    p.drawPixmap((j+9-mapNow_1[i].size()/2+1)*30
                                 ,(i+9-mapNow_1.size()/2-1)*30,l);
                }
                else
                {
                    QPixmap l=*paint[DEFINE::GROUND];
                    p.drawPixmap((j+9-mapNow_1[i].size()/2+1)*30
                                 ,(i+9-mapNow_1.size()/2-1)*30,l);
                }


            }
        QPixmap l1=*paint[2];
        p.drawPixmap((man_y_1+9-mapNow_1[0].size()/2+1)*30
                ,(man_x_1+9-mapNow_1.size()/2-1)*30,l1);
    }
}
