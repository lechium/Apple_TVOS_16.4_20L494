//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVCaptureVideoThumbnailOutputInternal : NSObject
{
    AVWeakReference *weakReference;	// 8 = 0x8
    AVWeakReference *delegateWeakReference;	// 16 = 0x10
    _Bool didPropagateContents;	// 24 = 0x18
    NSArray *filters;	// 32 = 0x20
    struct CGSize thumbnailSize;	// 40 = 0x28
}

- (void)dealloc;	// IMP=0x000000000000392a
- (id)init;	// IMP=0x00000000000038fb

@end

