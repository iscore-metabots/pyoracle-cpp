#include "window.h"


Window::Window() : QWidget(){
    setFixedSize(1400,500);
    setWindowTitle("PyOracle");

    //Initialisation des widgets
    audioDriver = new QComboBox(this);
    mike = new QComboBox(this);
    speaker = new QComboBox(this);
    input = new QSlider(Qt::Vertical,this);
    output = new QSlider(Qt::Vertical,this);
    txt = new QLabel ("Audio Driver                     Input  Output",this);
    audioProcess = new QCheckBox("Audio Processing",this);
    dumpOracle = new QPushButton("Dump Oracle",this);
    reloadQuery = new QPushButton("Reload Query",this);
    load = new QPushButton("Load",this);
    save = new QPushButton("Save",this);
    selfListen = new QCheckBox("Self Listen",this);
    drawOracle = new QCheckBox("Draw Oracle",this);
    initOracle = new QPushButton("Init Oracle",this);
    clearBuffer = new QPushButton("Clear Buffer",this);
    liveInput = new QCheckBox("Live/File Input",this);
    recordInput = new QCheckBox("Record Input",this);
    openAudio = new QPushButton("Open Audio File",this);
    play = new QCheckBox("Play",this);
    toggleLearn = new QCheckBox("Toggle Learn On/Off",this);
    frameSize = new QComboBox (this);
    toggleImprov = new QCheckBox("Toggle Improv On/Off",this);
    labFrameSize = new QLabel("Frame Size (ms)",this);
    toggleRegions = new QCheckBox("Toggle Regions",this);
    toggleTaboo = new QCheckBox("Toggle Taboo",this);
    learnThresholds = new QPushButton("Learn Thresholds",this);
    distanceThresholds = new QLabel("Distance Tresholds",this);
    mfcc = new QRadioButton("MFCC",this);
    centroid = new QRadioButton("Centroid",this);
    ampl = new QRadioButton("Amplitude",this);
    zcr = new QRadioButton("ZCR",this);
    pitch = new QRadioButton("Pitch",this);
    chroma = new QRadioButton("Chroma",this);
    folderLoad = new QString("");
    loadFileOracle = new QString("");
    loadFileMusic = new QString("");
    inputChan = new QLineEdit("0",this);
    oracleLength = new QLineEdit("0",this);
    elapsedTime = new QLineEdit("0",this);
    nextState = new QLineEdit("0",this);
    continuity = new QLineEdit("0",this);
    lrs = new QLineEdit("0",this);
    tabooLength = new QLineEdit("0",this);
    mfccl = new QLineEdit("0",this);
    centroidl = new QLineEdit("0",this);
    ampll = new QLineEdit("0",this);
    zcrl = new QLineEdit("0",this);
    pitchl = new QLineEdit("0",this);
    chromal = new QLineEdit("0",this);
    inChan = new QLabel("In Ch. #",this);
    labOracleLength = new QLabel("Oracle Length",this);
    labElapsedTime = new QLabel("Elapsed Time",this);
    labNextState = new QLabel("Next State",this);
    labContinuity = new QLabel("Continuity",this);
    labLRS = new QLabel("LRS Minimum",this);
    labTabooLength = new QLabel("Taboo Length",this);
    doubleHandleSlider = new QQuickWidget(this);
    player = new QMediaPlayer(this);
    ampli=new Amplitude();




    //Placement des widgets
    audioDriver->move(900,20);
    mike->move(900,45);
    speaker->move(900,95);
    input->setGeometry(1050,20,40,200);
    output->setGeometry(1090,20,40,200);
    txt->move(900,0);
    audioProcess->move(1150,100);
    dumpOracle->move(900,140);
    reloadQuery->move(900,170);
    load->move(900,200);
    save->move(900,230);
    selfListen->move(900,300);
    drawOracle->move(1100,300);
    clearBuffer->move(0,40);
    liveInput->move(150,0);
    recordInput->move(300,0);
    openAudio->move(150,40);
    play->move(300,40);
    toggleLearn->move(0,80);
    frameSize->move(250,80);
    toggleImprov->move(0,100);
    labFrameSize->move(320,80);
    toggleRegions->move(0,280);
    toggleTaboo->move(0,300);
    learnThresholds->move(700,0);
    distanceThresholds->move(500,0);
    mfcc->move(565,40);
    centroid->move(565,70);
    ampl->move(565,100);
    zcr->move(565,130);
    pitch->move(565,160);
    chroma->move(565,190);
    oracleLength->setGeometry(0,120,100,20);
    elapsedTime->setGeometry(0,142,100,20);
    nextState->setGeometry(0,170,100,20);
    continuity->setGeometry(0,192,100,20);
    lrs->setGeometry(0,214,100,20);
    tabooLength->setGeometry(200,300,60,20);
    mfccl->setGeometry(500,40,60,20);
    centroidl->setGeometry(500,70,60,20);
    ampll->setGeometry(500,100,60,20);
    zcrl->setGeometry(500,130,60,20);
    pitchl->setGeometry(500,160,60,20);
    chromal->setGeometry(500,190,60,20);
    inputChan->setGeometry(900,70,60,20);
    inChan->move(965,70);
    labOracleLength->move(110,122);
    labElapsedTime->move(110,146);
    labNextState->move(110,172);
    labContinuity->move(110,194);
    labLRS->move(110,216);
    labTabooLength->move(270,302);
    doubleHandleSlider->move(0,240);


    //Mise en place des données
    audioDriver->setMaximumWidth(100);
    audioDriver->setMinimumWidth(100);
    mike->setMaximumWidth(100);
    mike->setMinimumWidth(100);
    speaker->setMaximumWidth(100);
    speaker->setMinimumWidth(100);
    frameSize->addItem("100");frameSize->addItem("200");frameSize->addItem("300");frameSize->addItem("400");frameSize->addItem("500");frameSize->addItem("600");frameSize->addItem("700");frameSize->addItem("800");frameSize->addItem("900");frameSize->addItem("1000");
    mfcc->setChecked(true);
    inputChan->setValidator(new QDoubleValidator(-100000,100000,5,this));
    oracleLength->setValidator(new QDoubleValidator(-100000,100000,5,this));
    elapsedTime->setValidator(new QDoubleValidator(-100000,100000,5,this));
    nextState->setValidator(new QDoubleValidator(-100000,100000,5,this));
    continuity->setValidator(new QDoubleValidator(-100000,100000,5,this));
    lrs->setValidator(new QDoubleValidator(-100000,100000,5,this));
    tabooLength->setValidator(new QDoubleValidator(-100000,100000,5,this));
    mfccl->setValidator(new QDoubleValidator(-100000,100000,5,this));
    centroidl->setValidator(new QDoubleValidator(-100000,100000,5,this));
    ampll->setValidator(new QDoubleValidator(-100000,100000,5,this));
    zcrl->setValidator(new QDoubleValidator(-100000,100000,5,this));
    pitchl->setValidator(new QDoubleValidator(-100000,100000,5,this));
    chromal->setValidator(new QDoubleValidator(-100000,100000,5,this));
    doubleHandleSlider->setSource(QUrl::fromLocalFile("MySlider.qml"));
    player->setVolume(0);
    currFrameSize=frameSize->currentText().toInt();

    //Initialisation des waveform
    auto scene = new QGraphicsScene();
    scene->addItem(new ChromaItem());
    auto view = new QGraphicsView(scene,this);
    view->move(650,190);

    auto scene2 = new QGraphicsScene();
    scene2->addItem(new mfccItem());
    auto view2 = new QGraphicsView(scene2,this);
    view2->move(650,40);

    auto scene3 = new QGraphicsScene();
    scene3->addItem(new Pitch());
    auto view3 = new QGraphicsView(scene3,this);
    view3->move(650,160);

    auto scene4 = new QGraphicsScene();
    scene4->addItem(new Centroid());
    auto view4 = new QGraphicsView(scene4,this);
    view4->move(650,70);

    auto scene5 = new QGraphicsScene();

    scene5->addItem(ampli);
    auto view5 = new QGraphicsView(scene5,this);
    view5->move(650,100);

    auto scene6 = new QGraphicsScene();
    scene6->addItem(new ZCR());
    auto view6 = new QGraphicsView(scene6,this);
    view6->move(650,130);

    //Connection des widgets
    QObject::connect(load,SIGNAL(clicked()),this,SLOT(loadFolder()));
    QObject::connect(save,SIGNAL(clicked()),this,SLOT(saveFolder()));
    QObject::connect(openAudio,SIGNAL(clicked()),this,SLOT(openAudioFileMusic()));
    QObject::connect(play,SIGNAL(stateChanged(int)),this,SLOT(playChecked()));
    QObject::connect(recordInput,SIGNAL(stateChanged(int)),this,SLOT(recordInputChecked()));
    QObject::connect(audioProcess,SIGNAL(stateChanged(int)),this,SLOT(audioProcessing()));
    QObject::connect(output,SIGNAL(valueChanged(int)),this,SLOT(levelOutput(int)));
    QObject::connect(frameSize,SIGNAL(currentIndexChanged(int)),this,SLOT(indexChanged()));
}


int Window::moyenne(int *t,int frsize){
    int res=0;
    for(int i=0;i<frsize;i++)
        res+=t[i]*t[i];
    res=(int) sqrt(res);
    res=res/frsize;
    return res;
}

void Window::levelOutput(int level){
    player->setVolume(level);
}

void Window::audioProcessing(){
    if(!audioProcess->isChecked()){
        player->stop();
    }
    else{
        if(play->isChecked())
            player->play();
    }
}

int Window::readSong(int * tab,int fSize,int* pos){
    //Fonction qui ne marche pas, pfile est toujours égal a NULL, pas trouvé de solution

    /*FILE * pfile;
    long lSize=1;
    char * buffer=(char *) malloc (sizeof(char)*lSize);
    int count=0;


    QByteArray ba =loadFileMusic->toLatin1();
    const char * c=ba.data();

    pfile = fopen(c,"r+");
    if(pfile==NULL){fputs("File error",stderr);exit(1);}

    for(int i=0;i<44+pos[0];i++)
       fread(buffer,1,lSize,pfile);

    while(count!=fSize){
        fread(buffer,1,lSize,pfile);
        tab[count]=(int) buffer;
        count++;
    }
    pos[0]+=fSize;
    int s=moyenne(tab,fSize);
    fclose(pfile);
    free(buffer);
    return s;*/
    return 0;

}


void Window::playChecked(){
    if(play->isChecked()){
        toggleLearn->setChecked(true);
        if(audioProcess->isChecked()){
            player->play();
            int *pos=(int*) malloc(sizeof(int));
            pos[0]=0;
            int j=44100/currFrameSize;
            int k=44100%currFrameSize;
            int *t= (int*) malloc(1000*sizeof(int));
            for(int i=0;i<j;i++){
                ampli->Ampl[i]=readSong(t,currFrameSize,pos);
            }
            ampli->Ampl[j]=readSong(t,k,pos);
            free(pos);
            free(t);
        }
    }
    else{
        player->stop();
    }
}

void Window::recordInputChecked(){
    toggleLearn->setChecked(true);
}

void Window::loadFolder(){
    folderLoad->clear();
    folderLoad->append(QFileDialog::getExistingDirectory(this));
    QMessageBox::information(this,"La Bite",folderLoad[0]);
}

void Window::saveFolder(){
    folderLoad->clear();
    folderLoad->append(QFileDialog::getExistingDirectory(this));
    QMessageBox::information(this,"La Bite",folderLoad[0]);
}


void Window::openAudioFileMusic(){
    loadFileMusic->clear();
    loadFileMusic->append(QFileDialog::getOpenFileName(this,"open file",QDir::home().absolutePath(),"All files (*.*);;All Documents (*.wav,*.aiff,*.aif,*.snd,*.au,*.flac,*.data,*.mp3,*.m4a,*.caf);;AIFF audio file (*.aiff,*.aif);;WAVE audio file(*.wav);;AU audio file (*.au);;audio file (*.data);;NeXT/Sun audio file(*.snd);;FLAC audio file(*.flac);;MP3 audio file(*.mp3);;Apple MPEG-4 audio file (*.m4a);;CAF audio file (*.caf)"));
    player->setMedia(QUrl::fromLocalFile(loadFileMusic[0]));
}

void Window::indexChanged(){
    currFrameSize=frameSize->currentText().toInt();
}
