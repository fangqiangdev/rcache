//
// Created by fang on 2022/5/6.
//

#ifndef RCACHE_CACHE_MANAGER_H
#define RCACHE_CACHE_MANAGER_H


#include <string>
#include "cell.h"
#include "index.h"
#include "cell_manager.h"

class cache_manager {
private:
    // 为什么需要加class
    class index* idx;
    cell_manager* cm;
public:
    cache_manager(class index* idx){
        this->idx = idx;
    }

    cell& get(std::string&& k){
        long position = idx->getPosition(k);
        return cm->getCell(position);
    }

    void append(std::string&& k, std::string&& v){
        long position = idx->getPosition(k);
        cell& c = cm->getCell(position);
        c.append(v);
        long newPosition = cm->put(c);
        idx->putPosition(k, newPosition);
    }
};


#endif //RCACHE_CACHE_MANAGER_H
