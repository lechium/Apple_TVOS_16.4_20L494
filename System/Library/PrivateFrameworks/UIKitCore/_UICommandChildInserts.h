//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICommandChildInserts : NSObject
{
    NSArray *_beforeElements;	// 8 = 0x8
    NSArray *_afterElements;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000be354c
@property(readonly, nonatomic) NSArray *afterElements; // @synthesize afterElements=_afterElements;
@property(readonly, nonatomic) NSArray *beforeElements; // @synthesize beforeElements=_beforeElements;
- (void)_setBeforeElements:(id)arg1 afterElements:(id)arg2;	// IMP=0x0000000000be34cc

@end
