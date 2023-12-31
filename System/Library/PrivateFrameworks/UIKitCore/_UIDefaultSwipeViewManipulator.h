//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDefaultSwipeViewManipulator : NSObject
{
    double _swipedViewRestingOffset;	// 8 = 0x8
}

@property(nonatomic) double swipedViewRestingOffset; // @synthesize swipedViewRestingOffset=_swipedViewRestingOffset;
- (void)moveSwipedView:(id)arg1 atIndexPath:(id)arg2 withSwipeInfo:(CDStruct_b06b0113)arg3 animator:(id)arg4;	// IMP=0x0000000000e3453d
- (void)removeAnimationsFromSwipedView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000e34474
- (struct CGRect)restingFrameForSwipedView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000e343db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

