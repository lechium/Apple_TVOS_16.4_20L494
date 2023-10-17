//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPPadding, LPPointUnit, LPTextViewStyle;

__attribute__((visibility("hidden")))
@interface LPCollaborationFooterStyle : NSObject
{
    _Bool _showSeparator;	// 8 = 0x8
    _Bool _useFullWidth;	// 9 = 0x9
    _Bool _useInlineIndicator;	// 10 = 0xa
    _Bool _useFullWidthDuringSizing;	// 11 = 0xb
    LPPadding *_margin;	// 16 = 0x10
    LPPadding *_separatorMargin;	// 24 = 0x18
    LPPadding *_padding;	// 32 = 0x20
    LPPointUnit *_indicatorSpacing;	// 40 = 0x28
    LPPointUnit *_cornerRadius;	// 48 = 0x30
    LPTextViewStyle *_options;	// 56 = 0x38
    LPTextViewStyle *_handle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000043cd5
@property(nonatomic) _Bool useFullWidthDuringSizing; // @synthesize useFullWidthDuringSizing=_useFullWidthDuringSizing;
@property(nonatomic) _Bool useInlineIndicator; // @synthesize useInlineIndicator=_useInlineIndicator;
@property(nonatomic) _Bool useFullWidth; // @synthesize useFullWidth=_useFullWidth;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(readonly, nonatomic) LPTextViewStyle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) LPTextViewStyle *options; // @synthesize options=_options;
@property(retain, nonatomic) LPPointUnit *cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) LPPointUnit *indicatorSpacing; // @synthesize indicatorSpacing=_indicatorSpacing;
@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(readonly, retain, nonatomic) LPPadding *separatorMargin; // @synthesize separatorMargin=_separatorMargin;
@property(readonly, retain, nonatomic) LPPadding *margin; // @synthesize margin=_margin;
- (id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2 fontScalingFactor:(double)arg3;	// IMP=0x0000000000043939

@end

