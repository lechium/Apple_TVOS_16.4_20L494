//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVStackSection : NSObject
{
    double _sectionHeight;	// 8 = 0x8
    double _showcaseSectionHeight;	// 16 = 0x10
    long long _firstRowIndex;	// 24 = 0x18
    long long _rowCount;	// 32 = 0x20
    long long _firstItemRowIndex;	// 40 = 0x28
    struct UIEdgeInsets _sectionSpacing;	// 48 = 0x30
    struct UIEdgeInsets _showcaseSectionSpacing;	// 80 = 0x50
    struct TVRowMetrics _compoundRowMetrics;	// 112 = 0x70
}

@property(nonatomic) long long firstItemRowIndex; // @synthesize firstItemRowIndex=_firstItemRowIndex;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) long long firstRowIndex; // @synthesize firstRowIndex=_firstRowIndex;
@property(nonatomic) struct UIEdgeInsets showcaseSectionSpacing; // @synthesize showcaseSectionSpacing=_showcaseSectionSpacing;
@property(nonatomic) double showcaseSectionHeight; // @synthesize showcaseSectionHeight=_showcaseSectionHeight;
@property(nonatomic) struct TVRowMetrics compoundRowMetrics; // @synthesize compoundRowMetrics=_compoundRowMetrics;
@property(nonatomic) struct UIEdgeInsets sectionSpacing; // @synthesize sectionSpacing=_sectionSpacing;
@property(nonatomic) double sectionHeight; // @synthesize sectionHeight=_sectionHeight;
- (id)debugDescription;	// IMP=0x0000000000043f37

@end

