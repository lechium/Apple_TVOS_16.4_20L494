//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITextGestureTuning, UITextModernLoupeView, UIView;

__attribute__((visibility("hidden")))
@interface UITextModernLoupeSession : NSObject
{
    UITextGestureTuning *_gestureTuning;	// 8 = 0x8
    UIView *_interactionView;	// 16 = 0x10
    UITextModernLoupeView *_loupeView;	// 24 = 0x18
}

+ (id)beginLoupeSessionAtPoint:(struct CGPoint)arg1 withCaretRect:(struct CGRect)arg2 fromView:(id)arg3;	// IMP=0x0060000000d4e8ac
- (void).cxx_destruct;	// IMP=0x0000000000d4f4db
@property(retain, nonatomic) UITextModernLoupeView *loupeView; // @synthesize loupeView=_loupeView;
@property(nonatomic) __weak UIView *interactionView; // @synthesize interactionView=_interactionView;
@property(retain, nonatomic) UITextGestureTuning *gestureTuning; // @synthesize gestureTuning=_gestureTuning;
- (void)dealloc;	// IMP=0x0000000000d4f406
- (void)didMoveToPoint:(struct CGPoint)arg1 withCaretRect:(struct CGRect)arg2 tracksCaret:(_Bool)arg3;	// IMP=0x0000000000d4f101
- (struct CGPoint)_locationInContainerCoordinateSpace:(struct CGPoint)arg1;	// IMP=0x0000000000d4f041

@end

