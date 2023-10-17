//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBDerivedKeyboard : NSObject
{
    _Bool _addsSupplementaryControlKeys;	// 8 = 0x8
    NSString *_derivedKBStarPrefixName;	// 16 = 0x10
    struct CGSize _keyboardSize;	// 24 = 0x18
    struct CGSize _keyboardSizeBasis;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000abcef9
@property(nonatomic) _Bool addsSupplementaryControlKeys; // @synthesize addsSupplementaryControlKeys=_addsSupplementaryControlKeys;
@property(copy, nonatomic) NSString *derivedKBStarPrefixName; // @synthesize derivedKBStarPrefixName=_derivedKBStarPrefixName;
@property(nonatomic) struct CGSize keyboardSizeBasis; // @synthesize keyboardSizeBasis=_keyboardSizeBasis;
@property(nonatomic) struct CGSize keyboardSize; // @synthesize keyboardSize=_keyboardSize;

@end

