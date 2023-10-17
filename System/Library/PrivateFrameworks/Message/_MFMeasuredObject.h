//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MFMeasuredObject : NSObject
{
    id _object;	// 8 = 0x8
    double _measure;	// 16 = 0x10
}

+ (id)reverseSortedObjects:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x00600000000c89cf
+ (id)max:(id)arg1;	// IMP=0x00600000000c8866
+ (id)object:(id)arg1 withMeasure:(double)arg2;	// IMP=0x00600000000c8627
@property(nonatomic) double measure; // @synthesize measure=_measure;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (long long)compare:(id)arg1;	// IMP=0x00000000000c877f
- (id)description;	// IMP=0x00000000000c871d
- (void)dealloc;	// IMP=0x00000000000c86dd
- (id)initWithObject:(id)arg1 measure:(double)arg2;	// IMP=0x00000000000c8668

@end
