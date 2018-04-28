//
// Created by lwd on 2018/4/24.
//

#include "hellocopy.h"

void hellocopy::hi(account_name user ) {
//    require_auth( user );
    eosio::print( "hi, ", name{user});
}
// @abi action
void hellocopy::abinum (uint64_t num) {
    eosio::print( "abinum: ",num );
}

EOSIO_ABI(hellocopy, (hi)(abinum))