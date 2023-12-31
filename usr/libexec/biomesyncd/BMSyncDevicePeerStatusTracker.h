//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;

@interface BMSyncDevicePeerStatusTracker : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000404a4
- (id)allPeers;	// IMP=0x001000000004048e
- (void)setLocalDeviceIdentifier:(id)arg1;	// IMP=0x00100000000403d6
- (_Bool)setLastSyncDate:(id)arg1 forDeviceWithIdentifier:(id)arg2;	// IMP=0x001000000004036d
- (id)lastSyncDateOfDeviceWithIdentifier:(id)arg1;	// IMP=0x0010000000040357
- (id)lastSyncDateFromAnyDevice;	// IMP=0x0010000000040341
- (id)deviceWithIdentifier:(id)arg1;	// IMP=0x001000000004032b
- (_Bool)upsertSyncDevicePeer:(id)arg1;	// IMP=0x0010000000040313
- (id)localDeviceUpdatingIfNeccesaryWithProtocolVersion:(unsigned long long)arg1;	// IMP=0x00100000000401bc
- (id)localDeviceIdentifierCreatingIfNecessary;	// IMP=0x0010000000040083
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000040018

@end

