//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface _UIObjectReferenceCounter : NSObject
{
    NSCountedSet *_objectReferences;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c4c53a
- (id)allObjects;	// IMP=0x0000000000c4c524
- (void)decrementReferenceForObject:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000c4c24f
- (void)incrementReferenceForObject:(id)arg1;	// IMP=0x0000000000c4c081
- (id)init;	// IMP=0x0000000000c4c052

@end

