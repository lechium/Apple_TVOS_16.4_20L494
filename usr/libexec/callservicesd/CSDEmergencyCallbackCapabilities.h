//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDEmergencyCallbackCapabilities : NSObject
{
    MISSING_TYPE *_emergencyCallbackPossible;	// 8 = 0x8
    MISSING_TYPE *emergencyCallbackCapabilitiesDidChange;	// 16 = 0x10
    MISSING_TYPE *preventDetachAfterEmergencyCallTimeoutDeterminationHandler;	// 32 = 0x20
    MISSING_TYPE *dispatchAfterHandler;	// 48 = 0x30
    MISSING_TYPE *dispatchCancelHandler;	// 64 = 0x40
    MISSING_TYPE *queue;	// 80 = 0x50
    MISSING_TYPE *callCenterObserver;	// 88 = 0x58
    MISSING_TYPE *preventDetachAfterEmergencyCallTimeoutWorkItem;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00400000001d9f70
- (id)init;	// IMP=0x00100000001d9f10
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001d94d0
@property(nonatomic, copy) CDUnknownBlockType emergencyCallbackCapabilitiesDidChange;
@property(nonatomic, readonly) _Bool emergencyCallbackPossible;

@end

