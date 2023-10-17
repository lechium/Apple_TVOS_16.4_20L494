//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _UITitleContent : NSObject
{
    NSAttributedString *_attributedText;	// 8 = 0x8
    double _width;	// 16 = 0x10
}

+ (id)contentWithTitle:(id)arg1 attributes:(id)arg2 button:(id)arg3;	// IMP=0x0060000000106ddd
- (void).cxx_destruct;	// IMP=0x00000000001070d2
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (id)description;	// IMP=0x000000000010702e
@property(readonly, copy, nonatomic) NSString *title;
- (void)updateWithButton:(id)arg1;	// IMP=0x0000000000106f8b
- (void)updateWithTitleAttributes:(id)arg1 button:(id)arg2;	// IMP=0x0000000000106ebc

@end

