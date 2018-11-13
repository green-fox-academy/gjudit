
#ifndef POSTIT_POSTIT_H
#define POSTIT_POSTIT_H

#include <iostream>

class PostIt {
public:
    PostIt();
    PostIt(std::string backgroundColor, std::string text, std::string textColor);
    std::string getbackgroundColor();
    std::string gettext();
    std::string gettextcolor();

private:
    std::string mbackgroundColor;
    std::string mtext;
    std::string mtextColor;

};


#endif //POSTIT_POSTIT_H
