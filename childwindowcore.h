//类化子窗口的中心部件(中心部件是QTextEdit，则继承它)
#ifndef CHILDWINDOWCORE_H
#define CHILDWINDOWCORE_H
#include<QTextEdit>

class ChildWindowCore : public QTextEdit
{
	Q_OBJECT		
	QString curFile;
    bool isUntitled;

private slots:
    void documentWasModified();

public:
    ChildWindowCore();
	void newFile();
	
};

#endif // CHILDWINDOWCORE_H
