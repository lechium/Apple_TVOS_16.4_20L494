//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextPosition.h"

__attribute__((visibility("hidden")))
@interface UIWebCaretRectTextPosition : UITextPosition
{
    struct CGRect _caretRect;	// 8 = 0x8
}

+ (id)textPositionWithCaretRect:(struct CGRect)arg1;	// IMP=0x006000000122bcf9
@property(readonly, nonatomic) struct CGRect caretRect; // @synthesize caretRect=_caretRect;
- (id)initWithCaretRect:(struct CGRect)arg1;	// IMP=0x000000000122bd34

@end

