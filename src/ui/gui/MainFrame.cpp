#include <QtWidgets>

#include "MainFrame.hpp"

using namespace pathfinder::ui::gui;

MainFrame::MainFrame()
{
    QWidget *widget = new QWidget;
    setCentralWidget( widget );

    QWidget *top_filler = new QWidget;
    top_filler->setSizePolicy( QSizePolicy::Expanding, QSizePolicy::Expanding );

    info_label = new QLabel( tr( "<i>Choose a menu option, or right-click to "
                                 "invoke a context menu</i>" ) );
    info_label->setFrameStyle( QFrame::StyledPanel | QFrame::Sunken );
    info_label->setAlignment( Qt::AlignCenter );

    QWidget *bottom_filler = new QWidget;
    bottom_filler->setSizePolicy( QSizePolicy::Expanding, QSizePolicy::Expanding );

    QVBoxLayout *layout = new QVBoxLayout;
    layout->setContentsMargins( 5, 5, 5, 5 );
    layout->addWidget( top_filler );
    layout->addWidget( info_label );
    layout->addWidget( bottom_filler );
    widget->setLayout( layout );

    create_actions();
    create_menus();

    QString message = tr( "A context menu is available by right-clicking" );
    statusBar()->showMessage( message );

    setWindowTitle( tr( "PathFinder" ) );
    setMinimumSize( 800, 600 );
    resize( 1024, 768 );
    setWindowFlags( Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint );
}

void MainFrame::new_file()
{
    info_label->setText( tr( "Invoked <b>File|New</b>" ) );
}

void MainFrame::open()
{
    info_label->setText( tr( "Invoked <b>File|Open</b>" ) );
}

void MainFrame::save()
{
    info_label->setText( tr( "Invoked <b>File|Save</b>" ) );
}

void MainFrame::print()
{
    info_label->setText( tr( "Invoked <b>File|Print</b>" ) );
}

void MainFrame::about()
{
    info_label->setText( tr( "Invoked <b>Help|About</b>" ) );
    QMessageBox::about( this, tr( "About Menu" ),
            tr( "This <b>Menu</b> exameple shows how to create "
                "menu-bar menus and context menus." ) );
}

void MainFrame::about_qt()
{
    info_label->setText( tr( "Invoked <b>Help|About Qt</b>" ) );
}

void MainFrame::create_actions()
{
    new_act = new QAction( tr( "&New" ), this );
    new_act->setShortcut( QKeySequence::New );
    new_act->setStatusTip( tr( "Create a new Character" ) );
    connect( new_act, &QAction::triggered, this, &MainFrame::new_file );

    open_act = new QAction( tr( "&Open" ), this );
    open_act->setShortcut( QKeySequence::Open );
    open_act->setStatusTip( tr( "Load an existing character sheet" ) );
    connect( open_act, &QAction::triggered, this, &MainFrame::open );

    save_act = new QAction( tr( "&Save" ), this );
    save_act->setShortcut( QKeySequence::Save );
    save_act->setStatusTip( tr( "Save the character sheet" ) );
    connect( save_act, &QAction::triggered, this, &MainFrame::save );

    print_act = new QAction( tr( "&Print" ), this );
    print_act->setShortcut( QKeySequence::Print );
    print_act->setStatusTip( tr( "Print the character sheet" ) );
    connect( print_act, &QAction::triggered, this, &MainFrame::print );

    exit_act = new QAction( tr( "&Exit" ), this );
    exit_act->setShortcut( QKeySequence::Quit );
    exit_act->setStatusTip( tr( "Exit the application" ) );
    connect( exit_act, &QAction::triggered, this, &QWidget::close );

    about_act = new QAction( tr( "&About" ) );
    about_act->setStatusTip( tr( "Show the application's About box" ) );
    connect( about_act, &QAction::triggered, this, &MainFrame::about );

    about_qt_act = new QAction( tr( "About &Qt" ) );
    about_qt_act->setStatusTip( tr( "Show the Qt library's About box" ) );
    connect( about_qt_act, &QAction::triggered, qApp, &QApplication::aboutQt );
    connect( about_qt_act, &QAction::triggered, this, &MainFrame::about_qt );
}

void MainFrame::create_menus()
{
    file_menu = menuBar()->addMenu( tr( "&File" ) );
    file_menu->addAction( new_act );
    file_menu->addAction( open_act );
    file_menu->addAction( save_act );
    file_menu->addAction( print_act );
    file_menu->addSeparator();
    file_menu->addAction( exit_act );

    edit_menu = menuBar()->addMenu( tr( "&Edit" ) );

    help_menu = menuBar()->addMenu( tr( "&Help" ) );
    help_menu->addAction( about_act );
    help_menu->addAction( about_qt_act );
}
