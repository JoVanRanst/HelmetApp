#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();

private:
    Ui::MainMenu *ui;

public slots:
    void openAnimationWindow(void);
    void returnAnimationWindow(void);
    void openTextWindow(void);
    void returnTextWindow(void);
    void openSoundWindow(void);
    void returnSoundWindow(void);
    void openOptionsWindow(void);
    void returnOptionsWindow(void);
};

#endif // MAINMENU_H
