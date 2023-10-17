//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITextItemInteractionInteraction, UIView;
@protocol UITextLinkInteraction;

__attribute__((visibility("hidden")))
@interface _UITextLinkInteractionSession : NSObject
{
    UITextItemInteractionInteraction *_interaction;	// 8 = 0x8
    UIView<UITextLinkInteraction> *_linkInteractionView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000f1ee2d
- (_Bool)tapOnLinkWithGesture:(id)arg1;	// IMP=0x0000000000f1ed2b
- (_Bool)_allowItemInteractions;	// IMP=0x0000000000f1ecf4
- (_Bool)canInteractWithLinkAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f1eca1
- (void)dealloc;	// IMP=0x0000000000f1ec47
- (id)initWithTextItemInteraction:(id)arg1;	// IMP=0x0000000000f1eb7e

@end
