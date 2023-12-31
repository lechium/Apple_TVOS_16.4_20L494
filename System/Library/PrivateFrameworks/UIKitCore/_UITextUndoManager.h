//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextUndoManager : NSUndoManager
{
    UITextInputController *_inputController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000fbaa48
@property(nonatomic) __weak UITextInputController *inputController; // @synthesize inputController=_inputController;
- (void)redo;	// IMP=0x0000000000fba9bb
- (void)undo;	// IMP=0x0000000000fba95b
- (_Bool)canRedo;	// IMP=0x0000000000fba8d2
- (_Bool)canUndo;	// IMP=0x0000000000fba849
- (void)removeAllActions;	// IMP=0x0000000000fba7b2

@end

