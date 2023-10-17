//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNetService, NSString;
@protocol AVBonjourServiceDelegate;

__attribute__((visibility("hidden")))
@interface AVBonjourService : NSObject
{
    NSNetService *_networkService;	// 8 = 0x8
    _Bool _started;	// 16 = 0x10
    id _deviceInfoChangedObserver;	// 24 = 0x18
    id _playerItemChangedObserver;	// 32 = 0x20
    NSString *_netServiceType;	// 40 = 0x28
    id <AVBonjourServiceDelegate> _delegate;	// 48 = 0x30
}

+ (id)_defaultTXTRecordWithDeviceInfo:(void **)arg1;	// IMP=0x00100000000ec742
- (void).cxx_destruct;	// IMP=0x00000000000ec2e2
@property(nonatomic) __weak id <AVBonjourServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *netServiceType; // @synthesize netServiceType=_netServiceType;
- (void)_initializeBonjourServiceWithDeviceInfo:(void *)arg1;	// IMP=0x00000000000ec0e1
- (id)txtRecordDataForDevice:(void *)arg1;	// IMP=0x00000000000ebd3b
- (void)netMethodService:(id)arg1 didNotPublish:(id)arg2;	// IMP=0x00000000000ebb54
- (void)netServiceDidPublish:(id)arg1;	// IMP=0x00000000000ebab0
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x00000000000eb921
- (void)_restartService;	// IMP=0x00000000000eb7cc
- (void)stop;	// IMP=0x00000000000eb7a1
- (void)start;	// IMP=0x00000000000eb677
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000eb4c6
- (id)initWithNetServiceType:(id)arg1;	// IMP=0x00000000000eb1d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
