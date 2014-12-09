#ifndef CLI_H
#define CLI_H

#include <cstdlib>
#include <vector>
#include <string>

template <typename Environment>
class CLI {
  public:
    typedef void (*MenuCallback)(Environment *e);

    CLI(MenuCallback _main = NULL) : menu_count(0), main_menu(_main) {}

    void add_menu_entry(const std::string& entry_name, MenuCallback callback);
    void run(Environment *e);

  private:
    struct MenuEntry {
        std::string name;
        MenuCallback callback;
    };

    int menu_count;
    std::vector<MenuEntry> entries;
    MenuCallback main_menu;

    void main(Environment *e);
};

#include "cli.cpp"

#endif

