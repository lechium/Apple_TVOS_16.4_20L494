//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSDeviceIdentifierCache : NSObject
{
    NSDictionary *_identifiers;	// 8 = 0x8
    NSUUID *_advertiserIdentifier;	// 16 = 0x10
    NSUUID *_vendorIdentifierSeed;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    int _saveFlag;	// 40 = 0x28
    NSDictionary *_perUserEntropy;	// 48 = 0x30
    NSURL *_identifiersFileURL;	// 56 = 0x38
    NSString *_personaUniqueString;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a5bb1
@property(readonly) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
- (void)save;	// IMP=0x00000000000a5600
- (void)clearAllIdentifiersOfType:(long long)arg1;	// IMP=0x00000000000a536e
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000000000a5120
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a48e7
@property(readonly) NSObject<OS_dispatch_queue> *queue;
- (id)initWithPersona:(id)arg1;	// IMP=0x00000000000a46b7
- (id)deviceIdentifierVendorSeed;	// IMP=0x00000000000a6b11
- (id)identifiersOfTypeNotDispatched:(long long)arg1;	// IMP=0x00000000000a6a03
- (id)allIdentifiersNotDispatched;	// IMP=0x00000000000a6465
- (id)extractUUIDForKey:(id)arg1;	// IMP=0x00000000000a638f
- (id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2;	// IMP=0x00000000000a608d
- (void)generatePerUserEntropyIfNeededNotDispatched;	// IMP=0x00000000000a5c95
- (id)generateSomePerUserEntropyNotDispatched;	// IMP=0x00000000000a5c18
- (_Bool)deviceUnlockedSinceBoot;	// IMP=0x00000000000a5c10

@end

