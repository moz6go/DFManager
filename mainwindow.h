#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "general.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    Ui::MainWindow *ui;
    QFileSystemModel* fileSysModel;

    void MainTableInit(QTableWidget* tbl);
    void FileTreeInit();
    void ObjectInfoTableInit(QTableWidget* tbl);
    void BuildToolBar();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};

#endif // MAINWINDOW_H
