#include "items.h"


ChromaItem::ChromaItem(): QGraphicsItem(){
    QPainter *paints = new QPainter();
    chroma =(int *) malloc(12*sizeof(int));
    for(int i=0;i<12;i++)
        chroma[i]=i*2;
    ChromaItem::paint(paints,new QStyleOptionGraphicsItem(),NULL);
}

QRectF ChromaItem::boundingRect() const
{
        return QRectF(0,0,130,30);
}

void ChromaItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPen pen(Qt::black);
    painter->setPen(pen);
    painter->fillRect(boundingRect(),Qt::black);
    for(int i=0;i<12;i++)
        painter->fillRect(13*i,30-chroma[i],13,chroma[i],Qt::white);
}

mfccItem::mfccItem() : QGraphicsItem(){
    QPainter *paints = new QPainter();
    MFCC =(int *) malloc(12*sizeof(int));
    for(int i=0;i<12;i++)
        MFCC[i]=i*2;
    mfccItem::paint(paints,new QStyleOptionGraphicsItem(),NULL);
}

QRectF mfccItem::boundingRect() const{
    return QRectF(0,0,130,30);
}

void mfccItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    QPen pen(Qt::black);
    painter->setPen(pen);
    painter->fillRect(boundingRect(),Qt::black);
    for(int i=0;i<12;i++)
        painter->fillRect(5*i,30-MFCC[i],13,MFCC[i],Qt::white);
}

Pitch::Pitch() : QGraphicsItem(){
    QPainter *paints = new QPainter();
    pitch =(int *) malloc(12*sizeof(int));
    for(int i=0;i<12;i++)
        pitch[i]=i*2;
    Pitch::paint(paints,new QStyleOptionGraphicsItem(),NULL);
}

QRectF Pitch::boundingRect() const{
    return QRectF(0,0,130,30);
}

void Pitch::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    QPen pen(Qt::black);
    painter->setPen(pen);
    painter->fillRect(boundingRect(),Qt::black);
    for(int i=0;i<24;i++)
        painter->fillRect(5*i,30-pitch[i/2],2,2,Qt::white);
}

Centroid::Centroid() : QGraphicsItem(){
    QPainter *paints = new QPainter();
    Centr =(int *) malloc(12*sizeof(int));
    for(int i=0;i<12;i++)
        Centr[i]=i*2;
    Centroid::paint(paints,new QStyleOptionGraphicsItem(),NULL);
}

QRectF Centroid::boundingRect() const{
    return QRectF(0,0,130,30);
}

void Centroid::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    QPen pen(Qt::black);
    painter->setPen(pen);
    painter->fillRect(boundingRect(),Qt::black);
    for(int i=0;i<24;i++)
        painter->fillRect(3*i,30-Centr[i/2],2,2,Qt::white);
}

Amplitude::Amplitude() : QGraphicsItem(){
    QPainter *paints = new QPainter();
    Ampl =(int *) malloc(1000*sizeof(int));
    for(int i=0;i<1000;i++)
        Ampl[i]=-1;
    Amplitude::paint(paints,new QStyleOptionGraphicsItem(),NULL);
}

QRectF Amplitude::boundingRect() const{
    return QRectF(0,0,130,30);
}

void Amplitude::update(){
    QPainter *paints = new QPainter();
    Amplitude::paint(paints,new QStyleOptionGraphicsItem(),NULL);
}

void Amplitude::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    QPen pen(Qt::black);
    painter->setPen(pen);
    painter->fillRect(boundingRect(),Qt::black);
    int i=0;
    while(Ampl[i]!=-1){
        painter->fillRect(i*3,Ampl[i]*30/255,2,2,Qt::white);
        i+=1;
        usleep(1000);
    }
}

ZCR::ZCR() : QGraphicsItem(){
    QPainter *paints = new QPainter();
    Zcr =(int *) malloc(12*sizeof(int));
    for(int i=0;i<12;i++)
        Zcr[i]=i*2;
    ZCR::paint(paints,new QStyleOptionGraphicsItem(),NULL);
}

QRectF ZCR::boundingRect() const{
    return QRectF(0,0,130,30);
}

void ZCR::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    QPen pen(Qt::black);
    painter->setPen(pen);
    painter->fillRect(boundingRect(),Qt::black);
    for(int i=0;i<24;i++)
        painter->fillRect(3*i,Zcr[i/2],2,2,Qt::white);
}

