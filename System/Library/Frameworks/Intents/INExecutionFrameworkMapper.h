//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface INExecutionFrameworkMapper : NSObject
{
    _Bool _filled;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSMutableDictionary *_appToExtensionIdentifiers;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x00600000003bed7f
- (void).cxx_destruct;	// IMP=0x00000000003bec55
@property(readonly, nonatomic) struct os_unfair_lock_s _lock; // @synthesize _lock;
@property(readonly, nonatomic) _Bool _filled; // @synthesize _filled;
@property(readonly, copy, nonatomic) NSMutableDictionary *_appToExtensionIdentifiers; // @synthesize _appToExtensionIdentifiers;
- (id)appBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg1;	// IMP=0x00000000003bebc4
- (id)displayableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg1;	// IMP=0x00000000003beae6
- (id)launchableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)arg1;	// IMP=0x00000000003be95d
- (id)extensionBundleIdentifiersForSystemAppIdentifier:(id)arg1;	// IMP=0x00000000003be7ea
- (void)loadSystemExtensionInformation;	// IMP=0x00000000003be3e3
- (void)_addExtensionBundleIdentifier:(id)arg1 forAppBundleIdentifier:(id)arg2;	// IMP=0x00000000003be339
- (void)reset;	// IMP=0x00000000003be21c
- (void)installedApplicationsDidChange:(id)arg1;	// IMP=0x00000000003be14a
- (void)dealloc;	// IMP=0x00000000003be0ae
- (id)init;	// IMP=0x00000000003bdfcc

@end

