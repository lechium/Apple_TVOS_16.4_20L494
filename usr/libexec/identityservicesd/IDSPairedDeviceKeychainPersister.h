//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPairedDeviceKeychainSchema, NSString;

@interface IDSPairedDeviceKeychainPersister : NSObject
{
    IDSPairedDeviceKeychainSchema *_keychainSchema;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000006c3800
- (_Bool)_removeFromKeychain;	// IMP=0x00100000006c3610
- (_Bool)_saveToKeychainWithDictionary:(id)arg1;	// IMP=0x00100000006c3460
- (id)_pairedDevicesFromPropertyDictionaries:(id)arg1;	// IMP=0x00100000006c3160
- (_Bool)savePairedDevices:(id)arg1;	// IMP=0x00100000006c3070
- (id)loadPairedDevices;	// IMP=0x00100000006c2a90
- (id)init;	// IMP=0x00100000006c29e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
