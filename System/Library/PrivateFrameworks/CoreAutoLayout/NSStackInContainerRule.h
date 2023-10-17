//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutRect, NSString;

@interface NSStackInContainerRule : NSObject
{
    NSArray *_stackedRects;	// 8 = 0x8
    NSLayoutRect *_containingRect;	// 16 = 0x10
    double _spacing;	// 24 = 0x18
    long long _orientation;	// 32 = 0x20
}

+ (id)verticalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;	// IMP=0x0010000000004004
+ (id)horizontalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;	// IMP=0x0010000000003fea
+ (id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 inContainer:(id)arg3 spacing:(double)arg4;	// IMP=0x0010000000003f9e
@property(readonly, copy) NSLayoutRect *containingRect; // @synthesize containingRect=_containingRect;
@property(readonly) double spacing; // @synthesize spacing=_spacing;
@property(readonly) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy) NSArray *stackedRects; // @synthesize stackedRects=_stackedRects;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;	// IMP=0x0000000000004021
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003eee
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003e5c
- (void)dealloc;	// IMP=0x0000000000003e12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

