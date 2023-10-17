//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_EXExtensionIdentity.h"

@class LSApplicationExtensionRecord, LSExtensionPointRecord;

__attribute__((visibility("hidden")))
@interface _EXExtensionRecordIdentity : _EXExtensionIdentity
{
    LSApplicationExtensionRecord *_record;	// 8 = 0x8
    LSExtensionPointRecord *_extensionPoint;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002edee
- (void).cxx_destruct;	// IMP=0x000000000002f828
@property(readonly) LSExtensionPointRecord *extensionPoint; // @synthesize extensionPoint=_extensionPoint;
@property(readonly) LSApplicationExtensionRecord *record; // @synthesize record=_record;
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;	// IMP=0x000000000002f755
- (id)entitlements;	// IMP=0x000000000002f6e0
- (id)attributes;	// IMP=0x000000000002f650
- (id)extensionDictionary;	// IMP=0x000000000002f5df
- (id)sdkDictionary;	// IMP=0x000000000002f53c
- (id)containingURL;	// IMP=0x000000000002f4e1
- (id)url;	// IMP=0x000000000002f4c4
- (id)localizedName;	// IMP=0x000000000002f4a7
- (id)UUID;	// IMP=0x000000000002f48a
- (unsigned int)platform;	// IMP=0x000000000002f46d
- (id)containingBundleRecord;	// IMP=0x000000000002f450
- (id)bundleIdentifier;	// IMP=0x000000000002f433
- (id)extensionPointIdentifier;	// IMP=0x000000000002f3d8
- (_Bool)setUserElection:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x000000000002f346
- (unsigned char)userElection;	// IMP=0x000000000002f2c8
- (unsigned char)defaultUserElection;	// IMP=0x000000000002f15c
- (id)extensionSettingsKey;	// IMP=0x000000000002eed7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ee07
- (Class)classForCoder;	// IMP=0x000000000002edf6
- (id)initWithApplicationExtensionRecord:(id)arg1;	// IMP=0x000000000002ed53
- (id)initWithPlugInKitProxy:(id)arg1;	// IMP=0x000000000002ec5e

@end
