//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSOperationQueue, NSURL;

__attribute__((visibility("hidden")))
@interface _TtC9Coherence19CRFileSyncPresenter : NSObject
{
    MISSING_TYPE *fileURL;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *queue;	// 1414745679 = 0x54534e4f
    MISSING_TYPE *manager;	// 4267896 = 0x411f78
}

- (void).cxx_destruct;	// IMP=0x0000000000396d20
- (id)init;	// IMP=0x0000000000396cc0
- (void)presentedItemDidGainVersion:(id)arg1;	// IMP=0x0000000000396c70
- (void)presentedItemDidChange;	// IMP=0x00000000003969e0
@property(nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;
@property(nonatomic, readonly) NSURL *presentedItemURL;

@end
