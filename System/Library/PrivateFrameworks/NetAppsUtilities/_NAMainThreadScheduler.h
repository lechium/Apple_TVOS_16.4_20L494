//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NAMainThreadScheduler : NSObject
{
}

- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000079cb
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000078a4
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000783c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

