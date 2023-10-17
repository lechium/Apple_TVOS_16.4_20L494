//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSLayoutManager.h"

@class UIFont;

__attribute__((visibility("hidden")))
@interface _UIFieldEditorLayoutManager : NSLayoutManager
{
    UIFont *_fontForExtraBulletRendering;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000fb7c0f
- (void)_completeBulletRenderingForTextContainer:(id)arg1;	// IMP=0x0000000000fb79c4
- (struct CGRect)_boundingBoxForBulletAtCharIndex:(long long)arg1 inUnobscuredRange:(struct _NSRange)arg2;	// IMP=0x0000000000fb7937
- (long long)_generateBulletGlyphs:(const unsigned short *)arg1 properties:(const long long *)arg2 characterIndexes:(const unsigned long long *)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange)arg5 unobscuredRange:(struct _NSRange)arg6;	// IMP=0x0000000000fb762d
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;	// IMP=0x0000000000fb72a5
- (void)resetFontForExtraBulletRendering;	// IMP=0x0000000000fb7284
- (void)useFontForExtraBulletRendering:(id)arg1;	// IMP=0x0000000000fb723e

@end
