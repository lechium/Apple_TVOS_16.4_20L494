//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _SCNUIKitSourceRegistry : NSObject
{
    NSMutableArray *_sources;	// 8 = 0x8
}

+ (void)unregisterUIKitSource:(id)arg1;	// IMP=0x006000000027f0c7
+ (void)registerUIKitSource:(id)arg1;	// IMP=0x006000000027f096
+ (id)sharedInstance;	// IMP=0x006000000027ee12
- (void)apply:(CDUnknownBlockType)arg1;	// IMP=0x000000000027ef68
- (void)remove:(id)arg1;	// IMP=0x000000000027ef23
- (void)add:(id)arg1;	// IMP=0x000000000027eede
- (void)dealloc;	// IMP=0x000000000027eea3
- (id)init;	// IMP=0x000000000027ee57

@end

