//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;

@interface UABluetoothStatus : NSObject
{
    struct BTSessionImpl *_session;	// 8 = 0x8
    struct BTLocalDeviceImpl *_localDevice;	// 16 = 0x10
    _Bool _attached;	// 24 = 0x18
    MISSING_TYPE *_attachInProcess;	// 25 = 0x19
    _Bool _terminated;	// 26 = 0x1a
    _Bool _poweredOn;	// 27 = 0x1b
    _Bool _poweredOnValid;	// 28 = 0x1c
    NSMutableDictionary *_callbacks;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0040000000052dff
- (void).cxx_destruct;	// IMP=0x00200000000540f3
- (void)handleLocalDeviceCallback:(struct BTLocalDeviceImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x0010000000053fbb
- (void)terminateSession:(struct BTSessionImpl *)arg1;	// IMP=0x0010000000053ece
- (void)detachSession:(struct BTSessionImpl *)arg1;	// IMP=0x0010000000053d14
- (void)attachSession:(struct BTSessionImpl *)arg1;	// IMP=0x0010000000053a2e
- (void)handleSessionEvent:(struct BTSessionImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x0010000000053a0b
- (void)processCallbacks;	// IMP=0x0010000000053812
- (void)unregisterCallback:(id)arg1;	// IMP=0x00100000000536e2
- (id)registerCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000000534ec
- (void)detachFromBluetoothSession;	// IMP=0x0010000000053375
- (void)attachToBluetoothSession;	// IMP=0x0010000000053104
- (_Bool)poweredOn;	// IMP=0x0010000000052e54
- (void)dealloc;	// IMP=0x0010000000052dc1
- (id)init;	// IMP=0x0010000000052d75
- (struct BTLocalDeviceImpl *)localDevice;	// IMP=0x0010000000052d6b
- (struct BTSessionImpl *)session;	// IMP=0x0010000000052d61

@end

