//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardSliceStore : NSObject
{
    NSMutableDictionary *_store;	// 8 = 0x8
}

+ (void)archiveSet:(id)arg1;	// IMP=0x0060000000b4672b
+ (id)sliceSetIDForKeyplaneName:(id)arg1 type:(long long)arg2 orientation:(long long)arg3;	// IMP=0x0060000000b46703
+ (id)sliceSetForID:(id)arg1;	// IMP=0x0060000000b46680
+ (id)sharedStore;	// IMP=0x0060000000b465a8
- (void).cxx_destruct;	// IMP=0x0000000000b4679d
- (id)sliceSetForID:(id)arg1;	// IMP=0x0000000000b4666a
- (void)addSet:(id)arg1;	// IMP=0x0000000000b465fd
- (id)init;	// IMP=0x0000000000b46540

@end
