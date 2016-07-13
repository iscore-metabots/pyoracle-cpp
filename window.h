#ifndef WINDOW_H
#define WINDOW_H

#include <QtWidgets>
#include <QtGlobal>
#include <QWidget>
#include <QApplication>
#include <QString>
#include <QStringList>
#include <QtQuickWidgets/QQuickWidget>
#include <QFile>
#include <QtMultimedia/QMediaPlayer>
#include "items.h"
#include <libxtract.h>



class Window : public QWidget
{
    Q_OBJECT

public:
    Window();
    int readSong(int *tab,int fSize,int *pos);
    int moyenne(int * t,int frsize);
    int currFrameSize;
    QComboBox *audioDriver,*mike,*speaker,*frameSize;
    QSlider *input,*output;
    QCheckBox *audioProcess,*selfListen,*drawOracle,*liveInput,*recordInput,*play,*toggleLearn,*toggleImprov,*toggleRegions,*toggleTaboo;
    QPushButton *dumpOracle,*reloadQuery,*load,*save,*initOracle,*clearBuffer,*openAudio,*learnThresholds;
    QRadioButton *mfcc,*centroid,*ampl,*zcr,*pitch,*chroma;
    QLabel *txt,*labFrameSize,*distanceThresholds,*inChan,*labOracleLength,*labElapsedTime,*labNextState,*labContinuity,*labLRS,*labTabooLength;
    QString *folderLoad,*loadFileMusic,*loadFileOracle;
    QLineEdit *inputChan,*oracleLength,*elapsedTime,*nextState,*continuity,*lrs,*tabooLength,*mfccl,*centroidl,*ampll,*zcrl,*pitchl,*chromal;
    QQuickWidget *doubleHandleSlider;
    QMediaPlayer *player;
    Amplitude *ampli;

public slots:

    void levelOutput(int level);
    void audioProcessing();
    void loadFolder();
    void saveFolder();
    void openAudioFileMusic();
    void playChecked();
    void recordInputChecked();
    void indexChanged();


signals:

private:




};

#endif // WINDOW_H
