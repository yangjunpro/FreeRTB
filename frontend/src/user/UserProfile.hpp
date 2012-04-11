#ifndef __USER_PROFILE_H__
#define __USER_PROFILE_H__

#include <boost/scoped_ptr.hpp>

class CookieData;
class SegmentInfo;
class GeoInfo;
class UserReqInfo;
class UserProfileImpl;

class UserProfile {
    public:
        UserProfile();
        bool retrieveProfile( const UserReqInfo& reqInfo );
        const CookieData& getCookieData() const;
        const SegmentInfo& getSegmentInfo() const;
        const GeoInfo& getGeoInfo() const;
    private:
        scoped_ptr< UserProfileImpl > impl_;
};

#endif //__USER_PROFILE_H__
