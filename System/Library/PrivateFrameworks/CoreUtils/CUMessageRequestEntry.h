//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CUMessageRequestEntry : NSObject
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006d369
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

@end

