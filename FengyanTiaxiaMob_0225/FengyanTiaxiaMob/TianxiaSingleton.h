#pragma once
#include <iostream>
#include <QtWidgets/QTableWidget>
#include "CommonUtil.h"
#include <QLineEdit>

//#define MAX_ALLOWED 15

class TianxiaSingleton
{
public:
	
	~TianxiaSingleton();
	static TianxiaSingleton* getInstance();
	QTableWidget* table;
	QLineEdit *forceIdField;

	QHash<int, DWORD> threadMap;
	QHash<int, DWORD> scriptThreadIdMap;

	QHash<int, string> scriptIDMap;
	QString config;
	bool isAutoRestart;
	int MAX_ALLOWED;

	int windowCount;
private:
	TianxiaSingleton();
	static TianxiaSingleton* instance;

};

