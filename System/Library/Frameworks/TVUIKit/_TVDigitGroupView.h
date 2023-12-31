//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _TVDigitGroupView : UIStackView
{
    _Bool _secure;	// 8 = 0x8
    unsigned long long _numberOfDigits;	// 16 = 0x10
    NSArray *_digitViews;	// 24 = 0x18
    NSIndexSet *_separatorIndexes;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    CDUnknownBlockType _shakeCompletionBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002c033
@property(copy, nonatomic) CDUnknownBlockType shakeCompletionBlock; // @synthesize shakeCompletionBlock=_shakeCompletionBlock;
@property(nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_secure;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSIndexSet *separatorIndexes; // @synthesize separatorIndexes=_separatorIndexes;
@property(retain, nonatomic) NSArray *digitViews; // @synthesize digitViews=_digitViews;
@property(nonatomic) unsigned long long numberOfDigits; // @synthesize numberOfDigits=_numberOfDigits;
- (void)_updateDigitViews;	// IMP=0x000000000002bdb6
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000000002bd45
- (void)shakeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002bb51
- (void)_commonInit;	// IMP=0x000000000002b8fc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b899
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002b836

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

