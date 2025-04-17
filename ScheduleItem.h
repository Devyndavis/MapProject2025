#ifndef SCHEDULEITEM_H
#define SCHEDULEITEM_H

#include <string>
#include <iostream>
#include <iomanip> // For std::setw

class ScheduleItem {
public:
    std::string subject;
    std::string catalog;
    std::string section;
    std::string component;
    std::string session;
    int units;
    int enrolled;
    int capacity;
    std::string instructor;

    // Constructor
    ScheduleItem(std::string sub, std::string cat, std::string sec, std::string comp, 
                 std::string sess, int u, int enrl, int cap, std::string instr)
        : subject(sub), catalog(cat), section(sec), component(comp),
          session(sess), units(u), enrolled(enrl), capacity(cap), instructor(instr) {}

    // Member function to display a single ScheduleItem
    void display() const {
        std::cout << std::setw(8) << subject 
                  << std::setw(8) << catalog 
                  << std::setw(8) << section 
                  << std::setw(12) << component 
                  << std::setw(8) << session 
                  << std::setw(6) << units 
                  << std::setw(10) << enrolled 
                  << std::setw(10) << capacity 
                  << std::setw(20) << instructor << std::endl;
    }
};

#endif // SCHEDULEITEM_H