#include <iostream>
#include "src/cache_manager.h"

int main() {
    cache_manager cm(nullptr);

    cm.append("1","1");
    cm.get("1");

    return 0;
}
