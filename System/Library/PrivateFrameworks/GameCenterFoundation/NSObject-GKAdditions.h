//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (GKAdditions)
+ (id)_gkDefaultKeymap;	// IMP=0x00500000000244d3
- (id)_gkInvokeSelector:(SEL)arg1 withNullableObject:(id)arg2;	// IMP=0x0010000000024bb7
- (id)_gkInvokeSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x0010000000024ba5
- (id)_gkInvokeSelector:(SEL)arg1;	// IMP=0x0010000000024b91
- (void)_gkPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;	// IMP=0x0010000000024a35
- (void)_gkPerformSelector:(SEL)arg1 withNullableObject:(id)arg2;	// IMP=0x0010000000024929
- (void)_gkPerformSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x0010000000024917
- (void)_gkPerformSelector:(SEL)arg1;	// IMP=0x0010000000024903
- (void)_gkPopulateWithObject:(id)arg1 keymap:(id)arg2;	// IMP=0x001000000002459c
- (id)_gkViewDebuggingChildren;	// IMP=0x0010000000028112
- (id)_gkViewDebuggingChildKeys;	// IMP=0x0010000000028105
- (id)_gkRecursiveDescription;	// IMP=0x00100000000280f1
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x0010000000027fd9
- (id)_gkDescription;	// IMP=0x0010000000027f6d
- (void)_gkRemoveObserverWithBlockToken:(id)arg1;	// IMP=0x00100000000e6a41
- (id)_gkAddObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e6742
@end

