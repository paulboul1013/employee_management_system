#pragma once
#include<iostream>
using namespace std;

#include "worker.h"

class Boss :public Worker {

public:


	Boss(int id, string name, int did);

	//��ܭӤH�T��
	virtual void showInfo();

	//��o�^��W��
	virtual string getDeptName();

};

