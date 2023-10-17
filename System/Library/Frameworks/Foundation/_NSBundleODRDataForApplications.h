//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSError, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataForApplications
{
    NSDictionary *_tagToTagState;	// 40 = 0x28
    NSMutableSet *_extensionConnections;	// 48 = 0x30
    NSError *_stashedError;	// 56 = 0x38
    NSObject<OS_dispatch_group> *_initialStateGroup;	// 64 = 0x40
    NSString *_rootSandboxPath;	// 72 = 0x48
}

- (_Bool)assetPacksBecameUnavailable:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004dd5d8
- (_Bool)assetPacksBecameAvailable:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004dd4ca
- (id)description;	// IMP=0x00000000004dd440
- (void)dealloc;	// IMP=0x00000000004dd364
- (id)initWithBundle:(id)arg1;	// IMP=0x00000000004dcc72

@end
