//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSExternalControlSystem;
@protocol BSInvalidatable, OS_dispatch_queue, OS_dispatch_source, PBSEARCConfigurating;

@interface PBEventFilterController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _lock_token;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_lock_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_lock_reloadSource;	// 24 = 0x18
    long long _lock_mode;	// 32 = 0x20
    id <PBSEARCConfigurating> _lock_eARCConfigurator;	// 40 = 0x28
    PBSExternalControlSystem *_lock_externalControlSystem;	// 48 = 0x30
    NSString *_notificationName;	// 56 = 0x38
    id <BSInvalidatable> _stateCaptureHandle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001796b8
@property(readonly, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
@property(readonly, copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly, nonatomic) __weak PBSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_lock_externalControlSystem;
@property(readonly, nonatomic) __weak id <PBSEARCConfigurating> eARCConfigurator; // @synthesize eARCConfigurator=_lock_eARCConfigurator;
- (void)_queue_recalculateStateAndNotifyForced:(_Bool)arg1;	// IMP=0x00100000001794a5
- (void)_mainQueue_recalculateStateAndNotify;	// IMP=0x00100000001793b9
- (unsigned long long)_queue_calculatedOptions;	// IMP=0x000000000017922e
- (void)_setNeedsUpdate;	// IMP=0x00100000001791de
- (void)_unsafe_externalControlPolicyDidUpdate:(id)arg1;	// IMP=0x00100000001791cb
- (id)stateDumpBuilder;	// IMP=0x0010000000178fc3
- (void)eARCStatusChanged:(long long)arg1;	// IMP=0x0010000000178eb4
- (void)invalidate;	// IMP=0x0010000000178d91
@property long long mode; // @synthesize mode=_lock_mode;
- (void)dealloc;	// IMP=0x0010000000178c42
- (id)initWithExternalControlSystem:(id)arg1 eARCConfigurator:(id)arg2;	// IMP=0x0010000000178ba4
- (id)initWithExternalControlSystem:(id)arg1 eARCConfigurator:(id)arg2 notificationName:(id)arg3;	// IMP=0x00100000001786c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
