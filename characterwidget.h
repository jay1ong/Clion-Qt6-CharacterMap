//
// Created by GXZC on 2023/9/27.
//

#ifndef CHARACTERMAP_CHARACTERWIDGET_H
#define CHARACTERMAP_CHARACTERWIDGET_H


#include <QFont>
#include <QSize>
#include <QString>
#include <QWidget>

QT_BEGIN_NAMESPACE
class QMouseEvent;
class QPaintEvent;
QT_END_NAMESPACE

//! [0]
class CharacterWidget : public QWidget
{
Q_OBJECT

public:
    CharacterWidget(QWidget *parent = nullptr);
    QSize sizeHint() const override;

public slots:
    void updateFont(const QFont &font);
    void updateSize(const QString &fontSize);
    void updateStyle(const QString &fontStyle);
    void updateFontMerging(bool enable);

signals:
    void characterSelected(const QString &character);

protected:
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

private:
    void calculateSquareSize();

    QFont displayFont;
    int columns = 16;
    int lastKey = -1;
    int squareSize = 0;
};
//! [0]


#endif //CHARACTERMAP_CHARACTERWIDGET_H
