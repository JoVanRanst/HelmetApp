#ifndef SOUNDMENU_H
#define SOUNDMENU_H

#include <QWidget>

namespace Ui {
class SoundMenu;
}

class SoundMenu : public QWidget
{
    Q_OBJECT

public:
    /// Singleton acceser function
    static SoundMenu* inst(){
        static SoundMenu* s_SoundMenu = NULL;

        if(!s_SoundMenu)
            s_SoundMenu = new SoundMenu();
        return s_SoundMenu;
    }

private:
    SoundMenu();
    //~SoundMenu();

private:
    Ui::SoundMenu *ui;

signals:
    void exitMenu(void);

public slots:
    void exit(void);
};

#endif // SOUNDMENU_H
