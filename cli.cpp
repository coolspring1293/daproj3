#include <cstdlib>
#include <cstdio>
#include <vector>
#include <string>

#include "cli.h"

void 

void CLI::add_menu_entry(const std::string& entry_name, MenuCallback callback) {
    entries.push_back(Menu(entry_name, callback));
    ++menu_count;
}

void CLI::run(Environment *e) {
    while (true) {
        main();
    }
}

void CLI::main(Environment *e) {
    if (!main_menu) {
        puts("\t---- Main Menu ----");
        for (int i = 0; i < entries.size(); ++i) {
            printf("\t%d.%s", i + 1, entries[i].name.c_str());
            if (i % 2 != 0)
                printf("\n");
        }
        printf("\t%d.%s\n", entries.size(), "Quit");
    } else {
        (*main_menu)(e);
    }
    printf("Choice: ");
    int choice;
    char line[256];
    fgets(line, 256, stdio);
    sscanf()
}

