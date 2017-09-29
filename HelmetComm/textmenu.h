#ifndef TEXTMENU_H
#define TEXTMENU_H

#include <QWidget>

#include "ledmatrix_main.h"

namespace Ui {
class TextMenu;
}

class TextMenu : public QWidget
{
    Q_OBJECT

public:
    /// Singleton acceser function
    static TextMenu* inst(){
        static TextMenu* s_TextMenu = NULL;

        if(!s_TextMenu)
            s_TextMenu = new TextMenu();
        return s_TextMenu;
    }

private:
    TextMenu();
    //~TextMenu();
    void UpdatePageCounter();

signals:
    void exitMenu(void);

public slots:
    void exit(void);

private slots:
    /// Navigation
    void NextPressed();
    void PrevPressed();
    void NavSliderMoved(int newValue);
    /// Animation
    void RunPressed();
    void UpdatePressed();
    void scrollORsequence(bool Status);

    void uploadTextPressed(void);

private:
    Ui::TextMenu                *ui;
    LedMatrix::LedMatrix_main   *ui_display;

};

#endif // TEXTMENU_H
