#ifndef GENERAL_H
#define GENERAL_H

#include <QApplication>
#include <QMainWindow>
#include <QDialog>
#include <QtDebug>
#include <QDebug>
#include <QObject>
#include <QMainWindow>
#include <QToolBar>
#include <QLabel>
#include <QLineEdit>
#include <QHeaderView>
#include <QTableView>
#include <QTableWidget>
#include <QTreeView>
#include <QFileSystemModel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QTextEdit>
#include <QLineEdit>
#include <QComboBox>
#include <QFileDialog>
#include <QDate>
#include <QBuffer>
#include <QMessageBox>
#include <QStyleFactory>
#include <QStandardPaths>

const QStringList MAIN_TABLE_HEADERS = {
    "Назва",
    "Тип",
    "Останні зміни",
    "Шлях"
};

const QStringList OBJ_INFO_TABLE_HEADERS = {
    "Властивість",
    "Значення"
};

#endif // GENERAL_H
