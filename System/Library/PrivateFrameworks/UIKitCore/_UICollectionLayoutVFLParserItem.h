//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVFLParserItem : NSObject
{
    NSString *_name;	// 8 = 0x8
    double _fraction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002725b3
@property(nonatomic) double fraction; // @synthesize fraction=_fraction;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (double)_fractionForFractionTerm:(id)arg1;	// IMP=0x00000000002723f8
- (_Bool)_parseWithVisualFormat:(id)arg1;	// IMP=0x0000000000272238
- (id)initWithName:(id)arg1 fraction:(double)arg2;	// IMP=0x00000000002721c8
- (id)description;	// IMP=0x0000000000272112
- (id)initWithVisualFormat:(id)arg1;	// IMP=0x00000000002720a7

@end

