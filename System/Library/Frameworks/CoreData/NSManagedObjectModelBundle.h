//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSManagedObjectModelBundle : NSObject
{
    NSBundle *_bundle;	// 8 = 0x8
    NSDictionary *_versionInfoDictionary;	// 16 = 0x10
}

- (id)_modelForVersionHashes:(id)arg1;	// IMP=0x00000000000fe656
- (id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2;	// IMP=0x00000000000fda1a
- (id)optimizedVersionURL;	// IMP=0x00000000000fd9b5
- (id)currentVersionURL;	// IMP=0x00000000000fd984
- (id)urlForModelVersionWithName:(id)arg1;	// IMP=0x00000000000fd93c
- (id)modelVersions;	// IMP=0x00000000000fd906
- (id)currentVersion;	// IMP=0x00000000000fd8e0
- (void)dealloc;	// IMP=0x00000000000fd887
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000fd70c

@end
