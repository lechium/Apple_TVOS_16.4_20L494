//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOSingleTileSetMapRegionTileKeyEnumerator : NSObject
{
    GEOMapRegion *_region;	// 8 = 0x8
    int _style;	// 16 = 0x10
    int _size;	// 20 = 0x14
    int _scale;	// 24 = 0x18
    NSArray *_zoomLevels;	// 32 = 0x20
    long long _zoomMode;	// 40 = 0x28
    unsigned long long _currentZIndex;	// 48 = 0x30
    unsigned int _currentOffset;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000001242dec
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)continueEnumeratingTileKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000001242a0b
- (id)initWithMapRegion:(id)arg1 tileSet:(id)arg2 zoomMode:(long long)arg3;	// IMP=0x000000000124274d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
