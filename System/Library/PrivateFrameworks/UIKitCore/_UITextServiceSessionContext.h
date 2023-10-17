//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RVItem, UIResponder, UIView;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface _UITextServiceSessionContext : NSObject
{
    UIResponder<UITextInput> *_textInput;	// 8 = 0x8
    UIView *_view;	// 16 = 0x10
    NSString *_textWithContext;	// 24 = 0x18
    RVItem *_rvItemWithContext;	// 32 = 0x20
    struct _NSRange _selectedRange;	// 40 = 0x28
    struct CGRect _presentationRect;	// 56 = 0x38
}

+ (struct CGRect)selectionBoundingBoxForTextInput:(id)arg1;	// IMP=0x00100000010057e4
+ (id)selectedTextRangeForTextInput:(id)arg1;	// IMP=0x001000000100574a
+ (id)sessionContextForType:(long long)arg1 withTextInput:(id)arg2;	// IMP=0x00100000010054b6
+ (id)sessionContextWithText:(id)arg1 withRect:(struct CGRect)arg2 withRange:(struct _NSRange)arg3 withView:(id)arg4;	// IMP=0x0010000001005417
+ (id)sessionContextWithText:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;	// IMP=0x0010000001005394
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000001005117
- (void).cxx_destruct;	// IMP=0x0000000001005e98
@property(readonly, nonatomic) struct CGRect presentationRect; // @synthesize presentationRect=_presentationRect;
@property(readonly, nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(readonly, copy, nonatomic) RVItem *rvItemWithContext; // @synthesize rvItemWithContext=_rvItemWithContext;
@property(readonly, copy, nonatomic) NSString *textWithContext; // @synthesize textWithContext=_textWithContext;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
- (void)convertRectToView:(id)arg1;	// IMP=0x0000000001005d9a
- (void)_gatherAdditionalContext;	// IMP=0x000000000100594e
- (_Bool)_typeRequiresContext:(long long)arg1;	// IMP=0x0000000001005941
- (id)initForType:(long long)arg1 withText:(id)arg2 withTextInput:(id)arg3 withView:(id)arg4;	// IMP=0x0000000001005513
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001005213
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000100511f

@end

