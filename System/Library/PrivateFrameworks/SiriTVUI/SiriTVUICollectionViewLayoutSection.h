//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SiriTVUICollectionViewLayoutSection : NSObject
{
    NSArray *_itemFrames;	// 8 = 0x8
    struct CGRect _sectionHeaderFrame;	// 16 = 0x10
    struct UIEdgeInsets _sectionInset;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000016de4
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) struct CGRect sectionHeaderFrame; // @synthesize sectionHeaderFrame=_sectionHeaderFrame;
@property(retain, nonatomic) NSArray *itemFrames; // @synthesize itemFrames=_itemFrames;

@end

