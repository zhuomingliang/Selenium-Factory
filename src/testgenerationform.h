#ifndef TESTGENERATIONFORM_H
#define TESTGENERATIONFORM_H

#include <QMainWindow>
#include <iostream>

namespace Ui {
class testGenerationForm;
}

class testGenerationForm : public QMainWindow
{
    Q_OBJECT

public:

    explicit testGenerationForm(QWidget *parent = 0);
    ~testGenerationForm();



private slots:

    void on_acceptButton_clicked();
    void on_cencelButton_clicked();

    void on_chromeSlider_valueChanged(int value);

    void on_firefoxSlider_valueChanged(int value);

    std::string selectedOptions();

private:

    Ui::testGenerationForm *ui;
};

#endif // TESTGENERATIONFORM_H
