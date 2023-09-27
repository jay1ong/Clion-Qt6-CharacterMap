//
// Created by GXZC on 2023/9/27.
//

#ifndef CHARACTERMAP_MAINWINDOW_H
#define CHARACTERMAP_MAINWINDOW_H


#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
class QClipboard;
class QComboBox;
class QFontComboBox;
class QLineEdit;
class QScrollArea;
class QCheckBox;
QT_END_NAMESPACE
class CharacterWidget;

//! [0]
class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

public slots:
    void filterChanged(int);
    void findStyles(const QFont &font);
    void findSizes(const QFont &font);
    void insertCharacter(const QString &character);
#ifndef QT_NO_CLIPBOARD
    void updateClipboard();
#endif
    void showInfo();

private:
    CharacterWidget *characterWidget;
    QComboBox *filterCombo;
    QComboBox *styleCombo;
    QComboBox *sizeCombo;
    QFontComboBox *fontCombo;
    QLineEdit *lineEdit;
    QScrollArea *scrollArea;
    QCheckBox *fontMerging;
};
//! [0]


#endif //CHARACTERMAP_MAINWINDOW_H
