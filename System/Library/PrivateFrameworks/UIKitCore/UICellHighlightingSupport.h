//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UICellHighlightingSupport : NSObject
{
    struct __CFDictionary *_unhighlightedStates;	// 8 = 0x8
    id _cell;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e5bdf
- (void)highlightView:(id)arg1;	// IMP=0x00000000002e5918
- (void)applyState:(unsigned long long)arg1 toView:(id)arg2;	// IMP=0x00000000002e55d6
- (void)cacheState:(unsigned long long)arg1 forView:(id)arg2;	// IMP=0x00000000002e51e0
- (void)dealloc;	// IMP=0x00000000002e51a1
- (id)initWithCell:(id)arg1;	// IMP=0x00000000002e50be

@end

