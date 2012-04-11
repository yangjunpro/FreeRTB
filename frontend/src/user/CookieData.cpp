#include "CookieData.hpp"
using std::string;
bool CookieData::addCookie( const string& key, string& val)
{
    if ( !( this->insert( key, val ).second ) ) {
        // YangJun 2do:
        //  Loggin Message Here.
        return false;
    }
    return true;
}
string CookieData::getCookie( const string& key )  const
{
    map<string, string>::iterator it = this->find( key );
    if ( it != this->end() ) {
        return it->second;
    } else {
        return string( "" );
    }
}
