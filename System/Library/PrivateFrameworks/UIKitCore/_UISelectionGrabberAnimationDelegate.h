//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISelectionGrabberAnimationDelegate : NSObject
{
    CDUnknownBlockType block;	// 8 = 0x8
}

+ (id)delegateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000f44000
- (void).cxx_destruct;	// IMP=0x0000000000f44075
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000f4405c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

