//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __NSBlockVariable : NSObject
{
    struct Block_byref *forwarding;	// 8 = 0x8
    int flags;	// 16 = 0x10
    int size;	// 20 = 0x14
    CDUnknownFunctionPointerType byref_keep;	// 24 = 0x18
    CDUnknownFunctionPointerType byref_destroy;	// 32 = 0x20
    id containedObject;	// 40 = 0x28
}

@end

