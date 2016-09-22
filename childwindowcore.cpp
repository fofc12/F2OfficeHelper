#include "childwindowcore.h"

ChildWindowCore::ChildWindowCore()
{

}



void ChildWindowCore::newFile()
{
	//document order
	static int seqId = 0;

	isUntitled = true;
	curFile = tr("Document %1").arg(++seqId);

	setWindowTitle(curFile + "[*]" + tr(" - Free2ing Office"));
	//document in QTextEdit
	connect(document(), SIGNAL(contentsChanged()), this
		, SLOT(documentWasModified()));
}

void ChildWindowCore::documentWasModified()
{
	setWindowModified(document()->isModified());
}

