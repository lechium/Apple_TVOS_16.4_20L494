//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TKSmartCardStateRequest : NSObject
{
    long long _stateWhenRequested;	// 8 = 0x8
    CDUnknownBlockType _reply;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000016d3f
@property(copy) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property long long stateWhenRequested; // @synthesize stateWhenRequested=_stateWhenRequested;

@end

