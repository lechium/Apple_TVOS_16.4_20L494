//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLFunctionVariant.h>

@class MTLSimFunction;

__attribute__((visibility("hidden")))
@interface MTLSimFunctionVariant : MTLFunctionVariant
{
    MTLSimFunction *_function;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x00000000000089a9
- (id)initWithFunction:(id)arg1 compilerOutput:(id)arg2;	// IMP=0x000000000000894f
@property(readonly) MTLSimFunction *function;

@end

