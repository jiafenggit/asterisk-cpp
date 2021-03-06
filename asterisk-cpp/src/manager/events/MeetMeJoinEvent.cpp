/*
 * MeetMeJoinEvent.cpp
 *
 *  Created on: Aug 24, 2011
 *      Author: augcampos
 */

#include "asteriskcpp/manager/events/MeetMeJoinEvent.h"

namespace asteriskcpp {

    MeetMeJoinEvent::MeetMeJoinEvent(const std::string & values) :
    AbstractMeetMeEvent(values) {
    }

    MeetMeJoinEvent::~MeetMeJoinEvent() {
    }

    const std::string& MeetMeJoinEvent::getCallerIdNum() const {
        return (getProperty("CallerIdNum"));
    }

    const std::string& MeetMeJoinEvent::getCallerIdName() const {
        return (getProperty("CallerIdName"));
    }

} /* namespace asterisk_cpp */
