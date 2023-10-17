//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPRestrictionsMonitor;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPRestrictionsMonitor : NSObject
{
    MPRestrictionsMonitor *_underlyingRestrictionsMonitor;	// 8 = 0x8
}

+ (id)allowsExplicitContentDidChangeNotification;	// IMP=0x0040000000002243
+ (id)sharedRestrictionsMonitor;	// IMP=0x0040000000001ecb
- (void).cxx_destruct;	// IMP=0x00000000000022f3
- (void)_handleAllowsExplicitContentDidChangeNotification:(id)arg1;	// IMP=0x0000000000002250
@property(readonly, nonatomic) _Bool allowsExplicitContent;
@property(readonly, nonatomic) _Bool allowsDeletion;
- (void)dealloc;	// IMP=0x000000000000217d
- (id)_initWithUnderlyingRestrictionsMonitor:(id)arg1;	// IMP=0x0000000000002002

@end
