//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIViewAnimationDelegate : NSObject
{
    CDUnknownBlockType _completionBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000011c2b01
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000011c2aed
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000011c2a82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

