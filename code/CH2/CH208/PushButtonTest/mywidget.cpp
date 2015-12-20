#include "mywidget.h"
#include <qapplication.h>
#include <qpushbutton.h>
#include <qfont.h>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize( 1200, 1200 );
    setMaximumSize( 2000, 1200 );

    QPushButton *quit = new QPushButton( "Quit", this);
    quit->setGeometry( 162, 140, 175, 130 );
    quit->setFont( QFont( "Times", 18, QFont::Bold ) );

    connect( quit, SIGNAL(clicked()), qApp, SLOT(quit()) );
}

MyWidget::~MyWidget()
{
    
}
