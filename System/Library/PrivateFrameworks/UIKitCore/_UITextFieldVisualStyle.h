//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol _UITextFieldVisualStyleSubject;

__attribute__((visibility("hidden")))
@interface _UITextFieldVisualStyle : NSObject
{
    id <_UITextFieldVisualStyleSubject> _styleSubject;	// 8 = 0x8
}

+ (id)inferredVisualStyleWithStyleSubject:(id)arg1;	// IMP=0x0060000000fb61f0
- (void).cxx_destruct;	// IMP=0x0000000000fb67d4
@property(nonatomic) __weak id <_UITextFieldVisualStyleSubject> styleSubject; // @synthesize styleSubject=_styleSubject;
- (void)handleTextVibrancy;	// IMP=0x0000000000fb66e7
- (_Bool)textShouldUseVibrancy;	// IMP=0x0000000000fb6620
- (id)parentViewForTextContentView;	// IMP=0x0000000000fb6559
- (id)placeholderColor;	// IMP=0x0000000000fb6492
- (id)defaultFocusedTextColor;	// IMP=0x0000000000fb63cb
- (id)defaultTextColorForKeyboardAppearance;	// IMP=0x0000000000fb6304
- (id)defaultTextColor;	// IMP=0x0000000000fb623d
- (id)initWithStyleSubject:(id)arg1;	// IMP=0x0000000000fb618c

@end

