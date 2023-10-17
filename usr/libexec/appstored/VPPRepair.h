//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDRepairOptions, ApplicationProxy, NSArray, NSString, TaskQueue, _TtC9appstored6LogKey;
@protocol ApplicationRepairDelegate;

@interface VPPRepair : NSObject
{
    ApplicationProxy *_application;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    _TtC9appstored6LogKey *_logKey;	// 24 = 0x18
    ASDRepairOptions *_options;	// 32 = 0x20
    TaskQueue *_taskQueue;	// 40 = 0x28
    id <ApplicationRepairDelegate> _delegate;	// 48 = 0x30
    NSArray *_repairedBundleIDs;	// 56 = 0x38
}

+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logKey:(id)arg3;	// IMP=0x002000000007fd28
- (void).cxx_destruct;	// IMP=0x0020000000080404
@property(retain, nonatomic) _TtC9appstored6LogKey *logKey; // @synthesize logKey=_logKey;
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007fed5
@property(readonly, nonatomic) NSString *repairType;
@property(readonly, nonatomic) NSArray *repairedBundleIDs; // @synthesize repairedBundleIDs=_repairedBundleIDs;
@property(readonly, nonatomic) int fairPlayStatus;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;	// IMP=0x001000000007faa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

