#ifndef ACCOUNTEVENT_H
#define ACCOUNTEVENT_H

#include <vector>
#include "Huobi/Enums.h"
#include "Huobi/AccountChange.h"

namespace Huobi {

    /**
     * The account change information received by subscription of account.
     */
    struct AccountEvent {
        /**
         * The UNIX formatted timestamp generated by server in UTC.
         */
        long timestamp = 0;
        
        /**
         * The event that asset change notification related.
         */
        AccountChangeType changeType;
        
        /**
         * The list of account change, the content is AccountChange class.
         */
        std::vector<AccountChange> accountChangeList;
    };
}

#endif /* ACCOUNTEVENT_H */
