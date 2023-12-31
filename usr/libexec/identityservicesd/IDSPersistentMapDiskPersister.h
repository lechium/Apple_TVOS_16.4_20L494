//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper, IMSystemMonitor, NSString;

@interface IDSPersistentMapDiskPersister : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    IDSKeychainWrapper *_keychainWrapper;	// 16 = 0x10
    IMSystemMonitor *_systemMonitor;	// 24 = 0x18
    NSString *_directory;	// 32 = 0x20
    long long _dataProtectionClass;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000005b6660
@property(nonatomic) long long dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(retain, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
- (void);	// IMP=0x00100000005b6550
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)purgeData;	// IMP=0x00100000005b6060
- (void)saveData:(id)arg1 allowBackup:(_Bool)arg2;	// IMP=0x00100000005b4d20
- (id)data;	// IMP=0x00100000005b4250
@property(readonly, nonatomic) _Bool isAvailable;
- (id)initWithIdentifier:(id)arg1 dataProtectionClass:(long long)arg2 keychainWrapper:(id)arg3 systemMonitor:(id)arg4 fileDirectory:(id)arg5;	// IMP=0x00100000005b3fd0
- (id)initWithIdentifier:(id)arg1 dataProtectionClass:(long long)arg2 keychainWrapper:(id)arg3 systemMonitor:(id)arg4;	// IMP=0x00100000005b3ee0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

