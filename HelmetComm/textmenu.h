#ifndef TEXTMENU_H
#define TEXTMENU_H

#include <QWidget>
#include <QTimer>

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

private:
    Ui::TextMenu                *ui;
    LedMatrix::LedMatrix_main   *ui_display;

signals:
    void exitMenu(void);

public slots:
    void exit(void);

private slots:
    void RunPressed();
    void UpdatePressed();
    void uploadTextPressed(void);
    void scrollORsequence(bool Status);

};

#endif // TEXTMENU_H
