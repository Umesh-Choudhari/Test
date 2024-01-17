#pragma once
#include<vector>
#include <QtWidgets/QMainWindow>
#include "ui_Test.h"

class Test : public QMainWindow
{
    Q_OBJECT

public:
    Test(QWidget *parent = nullptr);
    ~Test();

private:
    Ui::TestClass ui;
    std::vector<int> vec;
    std::vector<std::string> vec1;
    std::vector<int> vec1;
    std::vector<float> vec1;
};
