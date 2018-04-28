//
// Created by lwd on 2018/4/24.
//

#ifndef CURRENCY_HELLOCOPY_H
#define CURRENCY_HELLOCOPY_H

#include <vector>
#include <eosiolib/print.hpp>
#include <eosiolib/contract.hpp>
#include <eosiolib/dispatcher.hpp>

using namespace eosio;

class hellocopy:public contract
{
public:
    hellocopy(account_name accout):contract(accout){

    }
    // @abi action
    void hi(account_name user );
    // @abi action
    void abinum (uint64_t num);
};


#endif //CURRENCY_HELLOCOPY_H
