//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBRenderFactory.h"

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryNumberPad : UIKBRenderFactory
{
}

- (void)setupLayoutSegments;	// IMP=0x00000000008f79d0
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x00000000008f711c
- (void)_customizeSymbolStyle:(id)arg1 secondaryStyle:(id)arg2 forKey:(id)arg3 contents:(id)arg4;	// IMP=0x00000000008f68c9
- (struct CGPoint)specialSymbolOffset;	// IMP=0x00000000008f68b8
- (struct CGPoint)loneZeroOffset;	// IMP=0x00000000008f68a7
- (struct CGPoint)rightColumnLetterOffset;	// IMP=0x00000000008f6896
- (struct CGPoint)rightColumnNumberOffset;	// IMP=0x00000000008f6885
- (struct CGPoint)centerColumnLetterOffset;	// IMP=0x00000000008f6874
- (struct CGPoint)centerColumnNumberOffset;	// IMP=0x00000000008f6863
- (struct CGPoint)leftColumnLetterOffset;	// IMP=0x00000000008f684d
- (struct CGPoint)leftColumnNumberOffset;	// IMP=0x00000000008f6837
- (struct CGPoint)dictationGlyphOffset;	// IMP=0x00000000008f682b
- (struct CGPoint)deleteGlyphOffset;	// IMP=0x00000000008f6815
- (double)symbolImageControlKeyFontSize;	// IMP=0x00000000008f6807
- (double)letterFontSize;	// IMP=0x00000000008f67f9
- (double)numberFontSize;	// IMP=0x00000000008f67eb
- (id)controlKeyDividerColorName;	// IMP=0x00000000008f67d7
- (id)controlKeyForegroundColorName;	// IMP=0x00000000008f67cf
- (id)controlKeyBackgroundColorName;	// IMP=0x00000000008f67bb
- (id)defaultKeyDividerColorName;	// IMP=0x00000000008f67a9
- (long long)lightHighQualityEnabledBlendForm;	// IMP=0x00000000008f679e

@end

