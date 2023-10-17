//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ATVHIDSystemClient : NSObject
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
}

+ (_Bool)isVolumeEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00400000000d9290
+ (_Bool)isLoopbackVolumeEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000d9086
+ (id)sharedInstance;	// IMP=0x00100000000d8de2
- (void)flashSILMorseCode:(id)arg1;	// IMP=0x00200000000d983a
- (void)setSILState_Off;	// IMP=0x00100000000d9820
- (void)setSILState_On;	// IMP=0x00100000000d9806
- (void)_setSILState_On:(id)arg1;	// IMP=0x00100000000d9800
- (void)_setSILState_Off:(id)arg1;	// IMP=0x00100000000d97fa
- (void)_processGenericDesktopEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000d94f1
- (void)_processBatterySystemEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000d94de
- (void)_processAppleVendorDebugEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000d94cb
- (void)_processAppleVendorIRRemoteEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000d94b8
- (void)_processHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000d932d
- (void)setupHIDEventRouters;	// IMP=0x00100000000d92e3
- (void)dealloc;	// IMP=0x00100000000d9003
- (int)_init;	// IMP=0x00100000000d8ea7
- (id)init;	// IMP=0x00100000000d8e39

@end

