//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface _UICommandDiffv1 : NSObject
{
    NSOrderedSet *_changes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000f7b039
+ (id)diffWithChanges:(id)arg1;	// IMP=0x0010000000f7aff0
- (void).cxx_destruct;	// IMP=0x0000000000f7b1d4
@property(readonly, nonatomic) NSOrderedSet *changes; // @synthesize changes=_changes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000f7b1a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f7b19c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000f7b0b4
- (id)initWithChanges:(id)arg1;	// IMP=0x0000000000f7b041

@end

