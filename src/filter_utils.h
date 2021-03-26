#pragma once
#ifndef CATA_SRC_FILTER_UTILITY_H
#define CATA_SRC_FILTER_UTILITY_H

/** Used as a default filter in various functions */
template<typename T>
bool return_true( const T & )
{
    return true;
}

#endif // CATA_SRC_FILTER_UTILITY_H
