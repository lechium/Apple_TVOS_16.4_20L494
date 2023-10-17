//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDRepairOptions, ApplicationProxy, NSArray, NSString, URLBag, UnfairLock, _TtC9appstored6LogKey;
@protocol ApplicationRepairDelegate;

@interface FairPlayRepair : NSObject
{
    ApplicationProxy *_application;	// 8 = 0x8
    URLBag *_bag;	// 16 = 0x10
    int _discoveredFairPlayStatus;	// 24 = 0x18
    UnfairLock *_lock;	// 32 = 0x20
    _TtC9appstored6LogKey *_logKey;	// 40 = 0x28
    ASDRepairOptions *_options;	// 48 = 0x30
    id <ApplicationRepairDelegate> _delegate;	// 56 = 0x38
    NSArray *_repairedBundleIDs;	// 64 = 0x40
    NSString *_clientIdentifierHeader;	// 72 = 0x48
}

+ (_Bool)shouldAttemptToRepairApplication:(id)arg1 options:(id)arg2 logKey:(id)arg3;	// IMP=0x002000000004058b
- (void).cxx_destruct;	// IMP=0x00200000000406aa
- (_Bool)repairApplication:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000040593
@property(readonly, nonatomic) NSString *repairType;
@property(readonly, nonatomic) NSArray *repairedBundleIDs; // @synthesize repairedBundleIDs=_repairedBundleIDs;
@property(retain, nonatomic) _TtC9appstored6LogKey *logKey; // @synthesize logKey=_logKey;
@property(readonly, nonatomic) int fairPlayStatus;
@property(nonatomic) __weak id <ApplicationRepairDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;	// IMP=0x001000000003fef2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

