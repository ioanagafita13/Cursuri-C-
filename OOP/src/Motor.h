#ifndef MOTOR_H
#define MOTOR_H

#pragma once
#include<iostream>


class Motor
{
public:
    Motor(int caiPutere);
    ~Motor();
    void Start();
    int getHP()
    {
        return caiPutere;
    }
    
private:
    int caiPutere;
};

#endif