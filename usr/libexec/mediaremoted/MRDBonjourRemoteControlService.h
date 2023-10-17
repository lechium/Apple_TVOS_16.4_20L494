//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUBluetoothClient, NSData, NSNetService, NSString;
@protocol MRDBonjourRemoteControlServiceDelegate;

@interface MRDBonjourRemoteControlService : NSObject
{
    CUBluetoothClient *_bluetoothClient;	// 8 = 0x8
    NSNetService *_networkService;	// 16 = 0x10
    _Bool _started;	// 24 = 0x18
    id <MRDBonjourRemoteControlServiceDelegate> _delegate;	// 32 = 0x20
    NSString *_netServiceType;	// 40 = 0x28
    NSData *_lastKnownBluetoothAddress;	// 48 = 0x30
}

+ (id)_netServiceTXTRecordDataWithDeviceInfo:(id)arg1;	// IMP=0x002000000001e859
- (void).cxx_destruct;	// IMP=0x002000000001ee1c
@property(copy, nonatomic) NSData *lastKnownBluetoothAddress; // @synthesize lastKnownBluetoothAddress=_lastKnownBluetoothAddress;
@property(readonly, nonatomic) NSString *netServiceType; // @synthesize netServiceType=_netServiceType;
@property(nonatomic) __weak id <MRDBonjourRemoteControlServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initializeBonjourServiceWithDeviceInfo:(id)arg1;	// IMP=0x001000000001eb31
- (void)_txtDataChangedWithDeviceInfo:(id)arg1;	// IMP=0x001000000001e72f
- (void)_txtDataChanged;	// IMP=0x001000000001e66d
- (void)_txtDataChangedWithUserInfo:(id)arg1;	// IMP=0x001000000001e630
- (void)_handleRestrictionChangedNotification:(id)arg1;	// IMP=0x001000000001e5b5
- (void)_handleDeviceInfoChangedNotification:(id)arg1;	// IMP=0x001000000001e4a6
- (void)netService:(id)arg1 didNotPublish:(id)arg2;	// IMP=0x001000000001e1ea
- (void)netServiceDidPublish:(id)arg1;	// IMP=0x001000000001e12e
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;	// IMP=0x001000000001df98
- (void)stop;	// IMP=0x001000000001decc
- (void)start;	// IMP=0x001000000001ddfb
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000001dd04
- (id)initWithNetServiceType:(id)arg1;	// IMP=0x001000000001d8fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
