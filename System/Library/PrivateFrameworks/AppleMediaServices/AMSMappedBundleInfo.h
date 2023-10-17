//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSMappedBundleInfo : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_clientName;	// 16 = 0x10
    NSString *_clientVersion;	// 24 = 0x18
    NSString *_scheme;	// 32 = 0x20
    NSString *_secureScheme;	// 40 = 0x28
    NSString *_accountMediaType;	// 48 = 0x30
}

+ (id)_clientVersionFromProcessInfo:(id)arg1 clientName:(id)arg2;	// IMP=0x004000000025e6a8
+ (id)_clientNameFromProcessInfo:(id)arg1;	// IMP=0x004000000025e56f
+ (id)_accountMediaTypeForClientName:(id)arg1 bundleID:(id)arg2;	// IMP=0x004000000025e2f0
+ (id)bundleInfoForMobileAppStoreWithProcessInfo:(id)arg1;	// IMP=0x004000000025dcba
+ (id)currentBundleInfo;	// IMP=0x004000000025dc54
+ (id)bundleInfoForProcessInfo:(id)arg1;	// IMP=0x004000000025db54
+ (id)accountMediaTypeInfoForProcessInfo:(id)arg1;	// IMP=0x004000000025db4c
- (void).cxx_destruct;	// IMP=0x000000000025e986
@property(retain, nonatomic) NSString *accountMediaType; // @synthesize accountMediaType=_accountMediaType;
@property(retain, nonatomic) NSString *secureScheme; // @synthesize secureScheme=_secureScheme;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)_initWithClient:(long long)arg1 processInfo:(id)arg2;	// IMP=0x000000000025dd0c

@end

