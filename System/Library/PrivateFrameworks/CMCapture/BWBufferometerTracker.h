//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BWBufferometerTracker : NSObject
{
    long long _trackedSize;	// 8 = 0x8
    unsigned long long _trackingSerialNumber;	// 16 = 0x10
    void *_buffer;	// 24 = 0x18
    NSString *_tag;	// 32 = 0x20
    NSString *_bufferType;	// 40 = 0x28
}

- (void)dealloc;	// IMP=0x000000000001e162

@end

