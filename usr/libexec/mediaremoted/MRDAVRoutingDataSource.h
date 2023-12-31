//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDAVRoute, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRDAVRoutingDataSource : NSObject
{
    NSMutableDictionary *_authorizationCallbacks;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    unsigned int _discoveryMode;	// 24 = 0x18
    unsigned int _externalScreenType;	// 28 = 0x1c
    MRDAVRoute *_pickedRoute;	// 32 = 0x20
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0040000000012aa5
- (void).cxx_destruct;	// IMP=0x00200000000130d0
@property(readonly, nonatomic) unsigned int externalScreenType; // @synthesize externalScreenType=_externalScreenType;
@property(readonly, nonatomic) MRDAVRoute *pickedRoute; // @synthesize pickedRoute=_pickedRoute;
@property(nonatomic) unsigned int discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (CDUnknownBlockType)authorizationRequestCallbackForRouteID:(id)arg1;	// IMP=0x0010000000012f3c
- (void)removeAuthorizationCallbackForRouteID:(id)arg1;	// IMP=0x0010000000012e8f
- (void)addAuthorizationCallbackForRouteID:(id)arg1 requestCallback:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012cfd
- (_Bool)unpickAirPlayRoutes;	// IMP=0x0010000000012cf5
- (void)userCancelledPickingRoute:(id)arg1;	// IMP=0x0010000000012cef
- (_Bool)resetPickedSystemRouteForSource:(unsigned int)arg1;	// IMP=0x0010000000012ce7
- (_Bool)resetPickedRouteForSource:(unsigned int)arg1;	// IMP=0x0010000000012cdf
- (_Bool)setPickedSystemRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x0010000000012cd7
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x0010000000012ccf
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2;	// IMP=0x0010000000012cc7
- (id)pickedRouteForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x0010000000012cbf
- (id)pickedRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x0010000000012c27
- (id)pickedRouteForCategory:(id)arg1;	// IMP=0x0010000000012c1f
- (id)pickableRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x0010000000012c17
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x0010000000012c0f
@property(readonly, nonatomic) NSArray *pickedRoutes;
- (id)init;	// IMP=0x0010000000012af5

@end

