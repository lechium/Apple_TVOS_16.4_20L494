//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebQueuedVideoOutputDelegate : NSObject
{
    struct WeakPtr<WebCore::QueuedVideoOutput, WTF::DefaultWeakPtrImpl> _parent;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000163560
- (void).cxx_destruct;	// IMP=0x0000000000163530
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000163420
- (void)outputSequenceWasFlushed:(id)arg1;	// IMP=0x0000000000163360
- (void)outputMediaDataWillChange:(id)arg1;	// IMP=0x0000000000162ea0
- (id)initWithParent:(void *)arg1;	// IMP=0x0000000000162dc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
