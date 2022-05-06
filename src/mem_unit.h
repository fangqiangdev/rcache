//
// Created by fang on 2022/5/6.
//

#ifndef RCACHE_MEM_UNIT_H
#define RCACHE_MEM_UNIT_H

#include "const.h"
#include "cell.h"

extern const int UNIT_MEM;

class mem_unit {
private:
    char d[UNIT_MEM] ={0};
    int unit_size;

public:
    mem_unit()=delete;
    mem_unit(mem_unit& mu)=delete;
    mem_unit& operator=(mem_unit& mu)=delete;

    mem_unit(int unit_size): unit_size(unit_size){

    }
    /*
     *
     * */
    void append(){

    }

    cell get(){}





};


#endif //RCACHE_MEM_UNIT_H
