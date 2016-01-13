#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QListWidgetItem>
#include <vector>

#include "carblock.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QVBoxLayout *scrollLayout;
    QWidget *scrollWidget;
    std::vector<CarBlock*> carBlockVector;
};

#endif // MAINWINDOW_H