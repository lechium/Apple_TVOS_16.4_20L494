//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UILabelAttributedStringContent
{
    NSAttributedString *_attributedString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000110aa9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000110aa65
- (unsigned long long)hash;	// IMP=0x000000000110aa0f
- (_Bool)_isContentEqualToContent:(id)arg1;	// IMP=0x000000000110a998
- (_Bool)isEqualToContent:(id)arg1 byAttribute:(id)arg2;	// IMP=0x000000000110a8a1
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x000000000110a87b
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000110a7f3
- (id)attributedString;	// IMP=0x000000000110a7de
- (id)string;	// IMP=0x000000000110a7c1
- (_Bool)isWidthVariant;	// IMP=0x000000000110a7b9
- (_Bool)isAttributed;	// IMP=0x000000000110a74d
- (_Bool)isNil;	// IMP=0x000000000110a738
- (long long)length;	// IMP=0x000000000110a71b
- (id)attributedStringContent;	// IMP=0x000000000110a712
- (id)defaultValueForAttribute:(id)arg1;	// IMP=0x000000000110a67a
- (_Bool)isAttribute:(id)arg1 uniformlyEqualToValue:(id)arg2;	// IMP=0x000000000110a518
- (id)contentByApplyingAttribute:(id)arg1 value:(id)arg2 toRange:(struct _NSRange)arg3;	// IMP=0x000000000110a15e
- (id)contentWithAttributedString:(id)arg1;	// IMP=0x000000000110a04d
- (id)contentWithString:(id)arg1;	// IMP=0x0000000001109d8e
- (id)initWithAttributedString:(id)arg1 defaultAttributes:(id)arg2;	// IMP=0x0000000001109c4a

@end

