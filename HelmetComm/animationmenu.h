#ifndef ANIMATIONMENU_H
#define ANIMATIONMENU_H

#include <QWidget>
#include "animationcreation.h"

namespace Ui {
class AnimationMenu;
}

class AnimationMenu : public QWidget
{
    Q_OBJECT

public:
    /// Singleton acceser function
    static AnimationMenu* inst(){
        static AnimationMenu* s_AnimationMenu = NULL;

        if(!s_AnimationMenu)
            s_AnimationMenu = new AnimationMenu();
        return s_AnimationMenu;
    }

    ///void refresh();

/// private methodes
private:
    AnimationMenu();
    //~AnimationMenu();
/// Private members
private:
    Ui::AnimationMenu *ui;
    AnimationCreation *ui_creation;

signals:
    void openCreate();
    void exitMenu();

public slots:
    void openAnim();
    void saveAnim();
    void uploadAnim();
    void exit();
};

#endif // ANIMATIONMENU_H
