//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationReplace
{
    struct _NSRange _replacementRange;	// 32 = 0x20
    NSAttributedString *_attributedString;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000fb9d41
- (void)undoRedo;	// IMP=0x0000000000fb99df
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2 replacementRange:(struct _NSRange)arg3;	// IMP=0x0000000000fb98dd

@end

