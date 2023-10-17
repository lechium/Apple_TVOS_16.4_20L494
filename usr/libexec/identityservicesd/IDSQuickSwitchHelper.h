//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSQuickSwitchHelper : NSObject
{
    _Bool _isQuickSwitchingToAnotherDevice;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _isQuickSwitchingMutex;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000171480
- (void)_resetCommunicationStateBeforeQuickSwitchDeactivatePairedDevices:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000172690
- (void)resetCommunicationStateBeforeQuickSwitchWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000172630
- (void)initiateQuickSwitchToDeviceWithCBUUID:(id)arg1 force:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001717b0
- (void);	// IMP=0x0010000000171680
- (_Bool)isQuickSwitchingToAnotherDevice;	// IMP=0x0010000000171630
- (void)dealloc;	// IMP=0x00100000001715e0
- (id)init;	// IMP=0x0010000000171540

@end

