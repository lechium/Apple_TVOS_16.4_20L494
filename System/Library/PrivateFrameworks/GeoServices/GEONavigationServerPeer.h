//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEONavdPeer.h"

@class GEONavigationServer, NSString;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer : GEONavdPeer
{
    GEONavigationServer *_delegate;	// 40 = 0x28
    _Bool _hasEntitlement;	// 48 = 0x30
    _Bool _wantsRoutes;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x00000000013e535f
@property(readonly, nonatomic) _Bool wantsRoutes; // @synthesize wantsRoutes=_wantsRoutes;
@property(nonatomic) _Bool hasEntitlement; // @synthesize hasEntitlement=_hasEntitlement;
@property(nonatomic) __weak GEONavigationServer *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00000000013e5219
- (void)setWantsRoutes:(_Bool)arg1;	// IMP=0x00000000013e5209
- (void)requestUpdates;	// IMP=0x00000000013e514c
- (void)requestNavigationVoiceVolume;	// IMP=0x00000000013e504a
- (void)requestPositionFromDestination;	// IMP=0x00000000013e4f48
- (void)requestPositionFromManeuver;	// IMP=0x00000000013e4e46
- (void)requestPositionFromSign;	// IMP=0x00000000013e4d44
- (void)requestRideSelections;	// IMP=0x00000000013e4c42
- (void)requestStepNameInfo;	// IMP=0x00000000013e4b40
- (void)requestStepIndex;	// IMP=0x00000000013e4a3e
- (void)requestActiveRouteDetailsData;	// IMP=0x00000000013e493c
- (void)requestGuidanceState;	// IMP=0x00000000013e483a
- (void)requestTransitSummary;	// IMP=0x00000000013e4738
- (void)requestRouteSummary;	// IMP=0x00000000013e4636
- (void)requestETAUpdate;	// IMP=0x00000000013e453f
- (void)requestRoute;	// IMP=0x00000000013e4448

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

