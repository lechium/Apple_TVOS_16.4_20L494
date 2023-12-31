//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_EXExtensionIdentity.h"

@class LSBundleRecord, NSDictionary, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface _EXExtensionValueIdentity : _EXExtensionIdentity
{
    unsigned char _userElection;	// 8 = 0x8
    unsigned char _defaultUserElection;	// 9 = 0x9
    unsigned int _platform;	// 12 = 0xc
    NSString *_extensionPointIdentifier;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    LSBundleRecord *_containingBundleRecord;	// 32 = 0x20
    NSUUID *_UUID;	// 40 = 0x28
    NSString *_localizedName;	// 48 = 0x30
    NSURL *_url;	// 56 = 0x38
    NSURL *_containingURL;	// 64 = 0x40
    NSDictionary *_sdkDictionary;	// 72 = 0x48
    NSDictionary *_extensionDictionary;	// 80 = 0x50
    NSDictionary *_attributes;	// 88 = 0x58
    NSDictionary *_entitlements;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002f8e2
- (void).cxx_destruct;	// IMP=0x000000000002ff03
- (unsigned char)defaultUserElection;	// IMP=0x000000000002fef2
- (unsigned char)userElection;	// IMP=0x000000000002fee1
- (id)entitlements;	// IMP=0x000000000002fecb
- (id)attributes;	// IMP=0x000000000002feb5
- (id)extensionDictionary;	// IMP=0x000000000002fe9f
- (id)sdkDictionary;	// IMP=0x000000000002fe89
- (id)containingURL;	// IMP=0x000000000002fe73
- (id)url;	// IMP=0x000000000002fe5d
- (id)localizedName;	// IMP=0x000000000002fe47
- (id)UUID;	// IMP=0x000000000002fe31
- (unsigned int)platform;	// IMP=0x000000000002fe21
- (id)containingBundleRecord;	// IMP=0x000000000002fe0b
- (id)bundleIdentifier;	// IMP=0x000000000002fdf5
- (id)extensionPointIdentifier;	// IMP=0x000000000002fddf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002f8ea
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;	// IMP=0x000000000002f859

@end

