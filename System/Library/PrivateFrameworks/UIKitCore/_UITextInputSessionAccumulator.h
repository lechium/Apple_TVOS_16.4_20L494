//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextInputSessionAccumulator : NSObject
{
    unsigned long long _values[8];	// 8 = 0x8
    NSString *_name;	// 72 = 0x48
    long long _type;	// 80 = 0x50
    CDUnknownBlockType _block;	// 88 = 0x58
    struct _NSRange _depthRange;	// 96 = 0x60
}

+ (id)accumulatorWithName:(id)arg1 type:(long long)arg2 depthRange:(struct _NSRange)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000f269e7
+ (id)accumulatorWithName:(id)arg1 type:(long long)arg2 depth:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000f269c5
- (void).cxx_destruct;	// IMP=0x0000000000f26f31
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) struct _NSRange depthRange; // @synthesize depthRange=_depthRange;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)enumerateAnalytics:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f26c9b
- (void)reset;	// IMP=0x0000000000f26c82
- (void)_increaseWithCount:(unsigned long long)arg1 source:(long long)arg2;	// IMP=0x0000000000f26c6c
- (_Bool)_increaseWithActions:(id)arg1;	// IMP=0x0000000000f26bd0
- (void)increaseWithActions:(id)arg1;	// IMP=0x0000000000f26bbe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f26b79
- (id)description;	// IMP=0x0000000000f26aca

@end
