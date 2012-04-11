#ifndef __USER_PROFILE_IMP_H__
#define __USER_PROFILE_IMP_H__

#include "CookieData.hpp"
#include "SegmentInfo.hpp"
#include "GeoInfo.hpp"

class UserReqInfo;
class UserProfileImpl {
public:
    bool retrieveUserProfileFromUDB( const UserReqInfo& reqInfo );
    const CookieData& getCookieData() const;
    const SegmentInfo& getSegmentInfo() const;
    const GeoInfo& getGeoInfo() const;
private:
    CookieData cookieData_;
    SegmentInfo segmentInfo_;
    GeoInfo geoInfo_;
};
#endif //__USER_PROFILE_IMP_H__
