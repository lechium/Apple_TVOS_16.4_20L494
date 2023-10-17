//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol RBSInvalidatable;

__attribute__((visibility("hidden")))
@interface RBSStateCaptureSetSegment : NSObject
{
    id <RBSInvalidatable> _invalidatable;	// 8 = 0x8
    NSMutableSet *_items;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005bf90
- (void)dealloc;	// IMP=0x000000000005bf4e
- (_Bool)containsItem:(id)arg1;	// IMP=0x000000000005bf38
- (unsigned long long)count;	// IMP=0x000000000005bf22
- (void)removeItem:(id)arg1;	// IMP=0x000000000005bf0c
- (void)addItem:(id)arg1 withLength:(unsigned long long)arg2;	// IMP=0x000000000005bef6
- (id)_stateCapture;	// IMP=0x000000000005bd1d
- (id)init;	// IMP=0x000000000005bb24
@property(readonly, nonatomic) NSSet *items;

@end
