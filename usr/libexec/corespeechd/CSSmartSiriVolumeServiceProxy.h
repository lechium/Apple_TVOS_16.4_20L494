//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSmartSiriVolumeManager;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSSmartSiriVolumeServiceProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcConnection;	// 16 = 0x10
    CSSmartSiriVolumeManager *_ssvManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000086bae
@property(retain, nonatomic) CSSmartSiriVolumeManager *ssvManager; // @synthesize ssvManager=_ssvManager;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)setPermanentVolumeOffsetWithDirection:(_Bool)arg1;	// IMP=0x0010000000086ab9
- (void)setSmartSiriVolumeDirection:(_Bool)arg1;	// IMP=0x001000000008694f
- (void)setSmartSiriVolumePercentage:(float)arg1;	// IMP=0x00100000000867e2
- (void)getVolumeForTTSType:(unsigned long long)arg1 withContext:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086526
- (void)setListenerDelegate:(id)arg1;	// IMP=0x0010000000086510
- (id)init;	// IMP=0x0010000000086460

@end

