//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOFlyoverRegionVersions;

__attribute__((visibility("hidden")))
@interface _GEOFlyoverRegionVersionMap : NSObject
{
    GEOFlyoverRegionVersions *_versions;	// 8 = 0x8
    struct unordered_map<unsigned int, unsigned long, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> _regionToIndex;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000009e60dc
- (void).cxx_destruct;	// IMP=0x00000000009e6091
- (void)enumerateFlyoverRegions:(CDUnknownBlockType)arg1;	// IMP=0x00000000009e6008
- (struct GEOFlyoverRegion *)regionForID:(unsigned int)arg1;	// IMP=0x00000000009e5ee5
- (id)initWithFlyoverRegions:(id)arg1;	// IMP=0x00000000009e5893
- (id)initWithData:(id)arg1;	// IMP=0x00000000009e57df
- (id)init;	// IMP=0x00000000009e579b

@end

