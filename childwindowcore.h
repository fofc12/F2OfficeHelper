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