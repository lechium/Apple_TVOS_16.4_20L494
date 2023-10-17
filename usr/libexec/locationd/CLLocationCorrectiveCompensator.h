//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class GEOCoarseLocationProvider, NSString;

@interface CLLocationCorrectiveCompensator : CLIntersiloService
{
    GEOCoarseLocationProvider *_coarseLocationProvider;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x0020000000365f04
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000365eeb
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000365e8e
- (void)snapLocation:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0020000000365fec
- (void)endService;	// IMP=0x0010000000365fc4
- (void)beginService;	// IMP=0x0010000000365f9d
- (id)init;	// IMP=0x0010000000365f60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

