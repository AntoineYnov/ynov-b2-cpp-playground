/*
 * main.cpp
 *
 *  Created on: 14 mars 2018
 *      Author: Antoi
 */

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton bouton("Salut les Zéros, la forme ?");
    bouton.show();

    return app.exec();
}
