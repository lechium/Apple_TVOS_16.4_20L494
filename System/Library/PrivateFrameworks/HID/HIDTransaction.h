//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HIDTransaction : NSObject
{
    struct __IOHIDTransaction *_transaction;	// 8 = 0x8
}

- (_Bool)commitElements:(id)arg1 error:(out id *)arg2 timeout:(long long)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x00000000000048a8
- (_Bool)commitElements:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000004890
@property long long direction;
- (id)description;	// IMP=0x0000000000004846
- (void)dealloc;	// IMP=0x0000000000004807
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000000476a

@end

