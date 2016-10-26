#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMdiArea>
#include<QDebug>
#include<QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //mdi
    mdiArea=new QMdiArea;
	mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
	mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    setCentralWidget(mdiArea);

	//window arrangement
	move(200, 150);
	resize(800, 500);

	//init
	initActions();
	initMenus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initActions()
{
	newAct = new QAction("New");
	connect(newAct, SIGNAL(triggered()), this, SLOT(fileNew()));

	
}

void MainWindow::initMenus()
{
	fileMenu = menuBar()->addMenu(tr("File"));
	fileMenu->addAction(newAct);
}

void MainWindow ::fileNew()
{

    auto child=createChildWindow();
    child->show();
}

ChildWindowCore *MainWindow::createChildWindow()
{
    auto w=new ChildWindowCore;
    mdiArea->addSubWindow(w);
    return w;
}
