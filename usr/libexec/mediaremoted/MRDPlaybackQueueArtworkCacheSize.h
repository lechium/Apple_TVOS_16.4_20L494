//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MRDPlaybackQueueArtworkCacheSize : NSObject
{
    double _w;	// 8 = 0x8
    double _h;	// 16 = 0x10
}

+ (id)defaultSize;	// IMP=0x00200000000fa269
@property(readonly, nonatomic) double h; // @synthesize h=_h;
@property(readonly, nonatomic) double w; // @synthesize w=_w;
- (long long)compare:(id)arg1;	// IMP=0x00100000000fa2d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000fa206
- (unsigned long long)hash;	// IMP=0x00100000000fa1d7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000fa194
- (id)description;	// IMP=0x00100000000fa14e
- (id)initWithW:(double)arg1 h:(double)arg2;	// IMP=0x00100000000fa0fc

@end

