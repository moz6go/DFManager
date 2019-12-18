#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :   QMainWindow(parent),    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    fileSysModel = new QFileSystemModel;
    MainTableInit (ui->mainTbl);
    FileTreeInit ();
}

void MainWindow::MainTableInit(QTableWidget* tbl) {
    tbl->clear ();
    tbl->setRowCount (0);
    tbl->setColumnCount(MAIN_TABLE_HEADERS.size ());
    tbl->setHorizontalHeaderLabels (MAIN_TABLE_HEADERS);
    tbl->verticalHeader ()->setSectionResizeMode (QHeaderView::Fixed);
    tbl->verticalHeader ()->setDefaultSectionSize (20);
    tbl->verticalHeader()->setVisible(false);
    tbl->setShowGrid(false);
    tbl->setWordWrap(false);
    tbl->setEditTriggers (QAbstractItemView::NoEditTriggers);
    tbl->setSelectionBehavior(QAbstractItemView::SelectRows);
    tbl->resizeColumnsToContents();
    tbl->horizontalHeader()->setStretchLastSection(true);
    tbl->horizontalHeader ()->setStyleSheet ("QHeaderView { font-size: 10pt; }");
    tbl->setStyleSheet ("QTableWidget { font-size: 10pt; }");
}

void MainWindow::FileTreeInit() {
    fileSysModel->setRootPath(QDir::rootPath());
    ui->fileSystemTree->setModel(fileSysModel);
    ui->fileSystemTree->header ()->setStyleSheet ("QHeaderView { font-size: 10pt; }");
    for(int i = 1; i < 4; ++i) {
        ui->fileSystemTree->hideColumn (i);
    }
}

void MainWindow::ObjectInfoTableInit(QTableWidget* tbl) {

}

void MainWindow::BuildToolBar() {

}

MainWindow::~MainWindow() {
    delete ui;
}
