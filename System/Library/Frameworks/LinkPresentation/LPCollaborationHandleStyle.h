//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPPadding, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface LPCollaborationHandleStyle : NSObject
{
    UIFont *_font;	// 8 = 0x8
    UIColor *_textColor;	// 16 = 0x10
    LPPadding *_padding;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000423cd
@property(readonly, retain, nonatomic) LPPadding *padding; // @synthesize padding=_padding;
@property(readonly, retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)init;	// IMP=0x00000000000421a6

@end

