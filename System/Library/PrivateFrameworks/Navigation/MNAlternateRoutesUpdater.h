//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNActiveRouteInfo, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNAlternateRoutesUpdater : NSObject
{
    MNActiveRouteInfo *_mainRoute;	// 8 = 0x8
    NSArray *_alternateRoutes;	// 16 = 0x10
    NSMutableArray *_trackedAlternateRoutes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b6ff8
- (_Bool)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2;	// IMP=0x00000000000b6f16
- (_Bool)updateForLocation:(id)arg1;	// IMP=0x00000000000b6b42
- (_Bool)setAlternateRoutes:(id)arg1 forMainRoute:(id)arg2;	// IMP=0x00000000000b66e2
@property(readonly, nonatomic) NSArray *alternateRoutes;

@end

