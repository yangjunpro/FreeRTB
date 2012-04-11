#ifndef __COOKIE_DATA_H__
#define __COOKIE_DATA_H__
#include <map>
#include <string>

class CookieData : private map< std::string, std::string >{
public:
    bool addCookie( const std::string& key, const std::string& val );
    std::string getCookie( const std::string& key ) const;
};
#endif //__COOKIE_DATA_H__
