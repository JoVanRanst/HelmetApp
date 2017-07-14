#ifndef OPTIONSMENU_H
#define OPTIONSMENU_H

#include <QWidget>

namespace Ui {
class OptionsMenu;
}

class OptionsMenu : public QWidget
{
    Q_OBJECT

public:
    /// Singleton acceser function
    static OptionsMenu* inst(){
        static OptionsMenu* s_OptionsMenu = NULL;

        if(!s_OptionsMenu)
            s_OptionsMenu = new OptionsMenu();
        return s_OptionsMenu;
    }

    ///void refresh();

/// private methodes
private:
    OptionsMenu();
    //~AnimationMenu();

private:
    Ui::OptionsMenu *ui;

signals:
    void exitMenu();

public slots:
    void exit();
};

#endif // OPTIONSMENU_H
