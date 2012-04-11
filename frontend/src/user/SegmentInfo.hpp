#ifndef __SEGMENT_INFO_H__
#define __SEGMENT_INFO_H__

#include <map>

class BTSegment {
private:
    uint32_t id_;
    uint64_t recency_;
};
class SegmentInfo {
private:
    std::map< uint32_t, BTSegment > segmentsMap_;
};
#endif //__SEGMENT_INFO_H__
