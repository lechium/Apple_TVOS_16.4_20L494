//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAutologgingDeallocSentinel : NSObject
{
    _Bool _called;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000103d9c4
@property(nonatomic) _Bool called; // @synthesize called=_called;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)dealloc;	// IMP=0x000000000103d91e

@end

