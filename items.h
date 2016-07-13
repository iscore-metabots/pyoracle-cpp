#ifndef CHROMAITEM_H
#define CHROMAITEM_H

#include <QtWidgets>
#include <unistd.h>



class ChromaItem : public QGraphicsItem
{

public:
    int * chroma;
    ChromaItem();
    QRectF boundingRect() const;
    void paint(QPainter * painter,
               const QStyleOptionGraphicsItem * option,
               QWidget * widget);
    void free();

};

class mfccItem : public QGraphicsItem
{

public:
    int * MFCC;
    mfccItem();
    void paint(QPainter *painter,
          const QStyleOptionGraphicsItem *option,
          QWidget *widget);
    QRectF boundingRect() const;
};

class Pitch : public QGraphicsItem
{

public:
    int * pitch;
    Pitch();
    void paint(QPainter *painter,
          const QStyleOptionGraphicsItem *option,
          QWidget *widget);
    QRectF boundingRect() const;
};

class Centroid : public QGraphicsItem
{

public:
    int * Centr;
    Centroid();
    void paint(QPainter *painter,
          const QStyleOptionGraphicsItem *option,
          QWidget *widget);
    QRectF boundingRect() const;
};

class Amplitude : public QGraphicsItem
{

public:
    int * Ampl;
    Amplitude();
    void paint(QPainter *painter,
          const QStyleOptionGraphicsItem *option,
          QWidget *widget);
    void update();
    QRectF boundingRect() const;
};

class ZCR : public QGraphicsItem
{

public:
    int * Zcr;
    ZCR();
    void paint(QPainter *painter,
          const QStyleOptionGraphicsItem *option,
          QWidget *widget);
    QRectF boundingRect() const;
};
#endif // CHROMAITEM_H

