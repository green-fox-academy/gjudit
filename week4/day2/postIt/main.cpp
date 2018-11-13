#include <iostream>
#include <vector>

#include "PostIt.h"

int main() {

    PostIt postit();
    std::vector<PostIt> postits;
    postits.push_back(PostIt("orange", "Idea 1", "blue"));
    postits.push_back(PostIt("pink", "awesome", "black"));
    postits.push_back(PostIt("yellow", "Superb!", "green"));

    for (int i = 0; i < postits.size(); i++) {
        std::cout << "backgroind color: " << postits[i].getbackgroundColor() << ", text: " << postits[i].gettext()
                  << ", textcolor: " << postits[i].gettextcolor() << std::endl;
    }

    return 0;
}