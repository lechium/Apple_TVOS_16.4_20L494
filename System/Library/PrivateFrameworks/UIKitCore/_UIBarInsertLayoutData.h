//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIBarInsertLayoutData : NSObject
{
    _Bool _collapsible;	// 8 = 0x8
    _Bool _prefersExpanded;	// 9 = 0x9
    _Bool _ignoredForCollapsingBehaviors;	// 10 = 0xa
    _Bool _active;	// 11 = 0xb
    NSString *_identifier;	// 16 = 0x10
    double _minimumHeight;	// 24 = 0x18
    double _preferredHeight;	// 32 = 0x20
    double _bottomInsetForTransitionProgress;	// 40 = 0x28
    double _assignedHeight;	// 48 = 0x30
    double _collapsingHeight;	// 56 = 0x38
    long long _priority;	// 64 = 0x40
    long long _order;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000175251
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001745ca
- (id)description;	// IMP=0x000000000017444d
- (id)init;	// IMP=0x00000000001743fc

@end

