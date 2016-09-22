#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QMdiArea;
class QAction;
class QMenu;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
	void initActions();
	void initMenus();
private:
    Ui::MainWindow *ui;
    QMdiArea *mdiArea;
	QMenu *fileMenu;
	QAction *newAct;
};

#endif // MAINWINDOW_H
