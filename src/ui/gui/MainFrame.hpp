#ifndef PATHFINDER_MAINFRAME_HPP
#define PATHFINDER_MAINFRAME_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;

class QActionGroup;

class QLabel;

class QMenu;

QT_END_NAMESPACE

namespace pathfinder
{
    namespace ui
    {
        namespace gui
        {

            class MainFrame
                    : public QMainWindow
            {
            Q_OBJECT
            public:
                MainFrame();
            protected:
            private slots:
                void new_file();
                void open();
                void save();
                void print();
                void about();
                void about_qt();
            private:
                void create_actions();
                void create_menus();

                QMenu *file_menu;
                QMenu *edit_menu;
                QMenu *help_menu;
                QAction *new_act;
                QAction *open_act;
                QAction *save_act;
                QAction *print_act;
                QAction *exit_act;
                QAction *about_act;
                QAction *about_qt_act;
                QLabel *info_label;
            };
        }
    }
}

#endif //PATHFINDER_MAINFRAME_HPP
