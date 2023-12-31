//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface AVTAssetResourceCache : NSObject
{
    NSMapTable *_resources;	// 8 = 0x8
    unsigned long long _policy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001437a
@property(nonatomic) unsigned long long policy; // @synthesize policy=_policy;
- (id)resourceForAsset:(id)arg1;	// IMP=0x00000000000142d2
- (void)releaseAsset:(id)arg1;	// IMP=0x000000000001427f
- (void)retainAsset:(id)arg1;	// IMP=0x000000000001426a
- (id)init;	// IMP=0x00000000000141f2

@end

