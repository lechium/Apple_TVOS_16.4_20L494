//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AKProximityEngine, OS_dispatch_queue, OS_dispatch_source;

@interface AKProximityController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_engineQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_engineTimeoutSource;	// 24 = 0x18
    id <AKProximityEngine> _engine;	// 32 = 0x20
    double _timeout;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000002d12d
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) id <AKProximityEngine> engine; // @synthesize engine=_engine;
- (void)proximityEngineDidInvalidate:(id)arg1;	// IMP=0x001000000002cfdc
- (void)proximityEngineDidActivate:(id)arg1;	// IMP=0x001000000002cf74
- (void)proximityEngine:(id)arg1 managerDidUpdateState:(id)arg2;	// IMP=0x001000000002cd61
- (void)_unsafe_cancelEngineTimeoutSource;	// IMP=0x001000000002ccef
- (void)_unsafe_resumeEngineTimeoutSource;	// IMP=0x001000000002c977
- (void)_unsafe_InvalidateEngine;	// IMP=0x001000000002c8d0
- (_Bool)_isEngineActivated;	// IMP=0x001000000002c7c6
- (void)_invalidateEngine;	// IMP=0x001000000002c75a
- (void)_activateEngine;	// IMP=0x001000000002c66a
- (void)_prepareEngine;	// IMP=0x001000000002c551
@property(readonly, nonatomic, getter=isActivated) _Bool activated;
- (void)invalidate;	// IMP=0x001000000002c52d
- (void)activate;	// IMP=0x001000000002c4ff
- (void)dealloc;	// IMP=0x001000000002c486
- (id)initWithEngine:(id)arg1;	// IMP=0x001000000002c3d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

