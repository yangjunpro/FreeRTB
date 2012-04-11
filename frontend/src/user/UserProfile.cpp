
#include "UserProfileImpl.hpp"
#include "UserProfile.hpp"

UserProfile::UserProfile()
{
    impl_ = new UserPriofileImpl();
}

bool UserProfile::retrieveProfile( const UserReqInfo& reqInfo ) 
{
    return impl_->retrieveUserProfileFromUDB();
}

const CookieData& UserProfile::getCookieData() const
{
    return impl_->getCookieData();
}

const SegmentInfo& UserProfile::getSegmentInfo() const
{
    return impl_->getSegmentInfo();
}

const GeoInfo& UserProfile::getGeoInfo() const
{
    return impl_->getGeoInfo();
}
