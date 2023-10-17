//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXSimpleAssetTaskTrigger, NSString;
@protocol OS_os_transaction;

@interface AXSimpleAssetTaskBase : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    AXSimpleAssetTaskTrigger *_trigger;	// 16 = 0x10
    unsigned long long _completionStatus;	// 24 = 0x18
}

+ (void)invokeWithArguments:(id)arg1;	// IMP=0x0020000000014650
+ (_Bool)synchronous;	// IMP=0x0010000000014500
+ (id)triggers;	// IMP=0x00100000000144e0
+ (id)taskIdentifier;	// IMP=0x00100000000144b0
+ (id)taskGroupIdentifier;	// IMP=0x00100000000144a0
- (void).cxx_destruct;	// IMP=0x00200000000147e0
@property(nonatomic) unsigned long long completionStatus; // @synthesize completionStatus=_completionStatus;
@property(retain, nonatomic) AXSimpleAssetTaskTrigger *trigger; // @synthesize trigger=_trigger;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, copy) NSString *description;
- (void)run:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014460
- (void)dealloc;	// IMP=0x0010000000014340
- (id)initWithTrigger:(id)arg1;	// IMP=0x0010000000014260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
