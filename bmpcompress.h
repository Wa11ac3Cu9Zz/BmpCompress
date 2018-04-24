#ifndef BMPCOMPRESS_H
#define BMPCOMPRESS_H

#include <QMainWindow>

namespace Ui {
class BmpCompress;
}

class BmpCompress : public QMainWindow
{
    Q_OBJECT

public:
    explicit BmpCompress(QWidget *parent = 0);
    ~BmpCompress();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::BmpCompress *ui;
};

#endif // BMPCOMPRESS_H
