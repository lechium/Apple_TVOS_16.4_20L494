//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSError, NSString;
@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface AVMetadataItemValueRequestInternal : NSObject
{
    AVWeakReference *weakReferenceToMetadataItem;	// 8 = 0x8
    id <NSObject><NSCopying> value;	// 16 = 0x10
    NSString *dataType;	// 24 = 0x18
    NSError *error;	// 32 = 0x20
}

@end
