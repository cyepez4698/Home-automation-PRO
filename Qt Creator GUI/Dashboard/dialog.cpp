#include "dialog.h"
#include "ui_dialog.h"
#include <QColorDialog>
#include <QProgressBar>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    miTemporizador = new QTimer(this);
    miTemporizador->setInterval(100);
    connect(miTemporizador, SIGNAL(timeout()), this, SLOT(manejarTimeOut()));
    ui->setupUi(this);
    miTemporizador->start();
    ui->LuzLevel->setMinimum(0);
    ui->LuzLevel->setMaximum(100);
    ui->VolumeMusic->setMinimum(0);
    ui->VolumeMusic->setMaximum(100);
    connect(ui->LuzLevel, &QSlider::sliderReleased, this, &Dialog::on_LuzLevel);
    connect(ui->VolumeMusic, &QSlider::sliderReleased, this, &Dialog::on_VolumeMusic);
    ui->Automatic->setChecked(true);
    this->on_checkBox_stateChanged(2);
    connect(ui->Automatic, &QCheckBox::stateChanged, this, &Dialog::on_checkBox_stateChanged);
    ui->ComboMusic->addItems(Canciones);
    ui->PauseMusic->setEnabled(false);
    ui->LuzLevel->setPageStep(0);
    ui->VolumeMusic->setPageStep(0);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_closeSession_clicked()
{
    this->close();
}

void Dialog::manejarTimeOut()
{
    if(this->isActiveWindow()){
        Information = Puerto.GetDato();

        QString dato = Information.Param;
        QString value = Information.Info;
        //    qDebug() << dato << " " << value;
        if(dato != nullptr && value != nullptr ){
            bool ok;
            int valor = value.toInt(&ok);
            if(ok){
                if(dato == "luz"){
                    ui->LuzLevel->setValue(valor);
                }else if(dato == "song" && value.length() == 4){
                    ui->ComboMusic->setCurrentIndex(valor - 1);
                }else if(dato == "volume" && value.length() != 4){
                    ui->VolumeMusic->setValue(valor);
                }
            }else{
                if(dato == "automatic" && value == "on"){
                    ui->Automatic->setChecked(true);
                }else if(dato == "automatic" && value == "off"){
                    ui->Automatic->setChecked(false);
                }else if(dato == "song" && value == "pause"){
                    ui->PlayMusic->setEnabled(true);
                    ui->PauseMusic->setEnabled(false);
                }else if(dato == "song" && value == "play"){
                    ui->PlayMusic->setEnabled(false);
                    ui->PauseMusic->setEnabled(true);
                }
            }
            //Database.PushDato(Information.Param, Information.Info.toInt());
        }
    }
}


void Dialog::on_ToggleLuz_clicked()
{
    if(ui->ToggleLuz->text() == "Prender Luz"){
        Puerto.SendData("$luz:100%");
        ui->ToggleLuz->setText("Apagar Luz");
        ui->LuzLevel->setValue(10);
    }else{
        ui->ToggleLuz->setText("Prender Luz");
        Puerto.SendData("$luz:0%");
        ui->LuzLevel->setValue(0);
    }
}


void Dialog::on_LuzLevel()
{
    if(ui->LuzLevel->value() == 0){
        ui->ToggleLuz->setText("Prender Luz");
    }else{
        ui->ToggleLuz->setText("Apagar Luz");
    }
    if(ui->LuzLevel->value()!= 7){
        Puerto.SendData(QString("$luz:%1%").arg(ui->LuzLevel->value()));
    }
}


void Dialog::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == 2){
        ui->LuzLevel->setEnabled(false);
        ui->Red->setEnabled(false);
        ui->Green->setEnabled(false);
        ui->White->setEnabled(false);
        ui->Blue->setEnabled(false);
        ui->ToggleLuz->setEnabled(false);
        Puerto.SendData(QString("$automatic:on%"));
    }else{
        ui->LuzLevel->setEnabled(true);
        ui->Red->setEnabled(true);
        ui->Green->setEnabled(true);
        ui->White->setEnabled(true);
        ui->Blue->setEnabled(true);
        ui->ToggleLuz->setEnabled(true);
        Puerto.SendData(QString("$automatic:off%"));
    }

}

void Dialog::on_PauseMusic_clicked()
{
    ui->PauseMusic->setEnabled(false);
    ui->PlayMusic->setEnabled(true);
    Puerto.SendData(QString("$song:pause%"));
}




void Dialog::on_VolumeMusic()
{
    Puerto.SendData(QString("$volume:%1%").arg(ui->VolumeMusic->value()));
}


void Dialog::on_PlayMusic_clicked()
{
    ui->PauseMusic->setEnabled(true);
    ui->PlayMusic->setEnabled(false);
    Puerto.SendData(QString("$song:play%"));
}


void Dialog::on_ComboMusic_currentIndexChanged(int index)
{

    if(ui->ComboMusic->currentIndex() != 6){
    	Puerto.SendData(QString("$song:000%1%").arg(ui->ComboMusic->currentIndex() + 1));
    }else{
        Puerto.SendData(QString("$song:0009%"));
    }
}


void Dialog::on_Red_clicked()
{
    Puerto.SendData(QString("$luz:red%"));
}


void Dialog::on_White_clicked()
{
    Puerto.SendData(QString("$luz:white%"));

}


void Dialog::on_Blue_clicked()
{
    Puerto.SendData(QString("$luz:blue%"));

}


void Dialog::on_Green_clicked()
{
    Puerto.SendData(QString("$luz:green%"));
}

