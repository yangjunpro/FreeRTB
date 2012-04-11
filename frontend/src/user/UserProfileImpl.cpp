#include "UserProfileImpl.hpp"

bool UserProfileImpl::retrieveUserProfileFromUDB( const UserReqInfo& reqInfo )
{
    // YangJun 2do:
}
const UserProfileImpl::CookieData& getCookieData() const
{
    return cookieData_;
}
const UserProfileImpl::SegmentInfo& getSegmentInfo() const
{
    return segmntInfo_;
}
const UserProfileImpl::GeoInfo& getGeoInfo() const
{
    return geoInfo_;
}

