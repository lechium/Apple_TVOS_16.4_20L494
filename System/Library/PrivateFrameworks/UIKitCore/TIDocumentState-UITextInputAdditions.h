//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIDocumentState.h>

@interface TIDocumentState (UITextInputAdditions)
+ (id)documentStateOfSecureTextDocument:(id)arg1;	// IMP=0x005000000082b695
+ (id)documentStateOfDocumentWithRecentInputIdentifier:(id)arg1;	// IMP=0x005000000082b648
+ (id)documentStateOfDocumentWithParagraph:(id)arg1;	// IMP=0x005000000082b5fb
+ (id)documentStateOfDocument:(id)arg1;	// IMP=0x005000000082b5ae
- (struct _NSRange)_selectedTextRange;	// IMP=0x001000000082c894
- (id)fullString;	// IMP=0x001000000082c76d
- (id)initWithSecureTextDocument:(id)arg1;	// IMP=0x001000000082c4d2
- (id)initWithDocumentWithRecentInputIdentifier:(id)arg1;	// IMP=0x001000000082c4bb
- (id)initWithDocumentWithParagraph:(id)arg1;	// IMP=0x001000000082c4a4
- (id)initWithDocument:(id)arg1;	// IMP=0x001000000082c48d
- (id)initWithDocument:(id)arg1 contextBoundary:(long long)arg2;	// IMP=0x001000000082bfeb
- (id)_contextAfterPosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;	// IMP=0x001000000082be4b
- (id)_contextBeforePosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;	// IMP=0x001000000082bbeb
- (id)_positionFromPosition:(id)arg1 toPreviousWordStartInDocument:(id)arg2 tokenAccumulator:(CDUnknownBlockType)arg3;	// IMP=0x001000000082bae1
- (id)_positionFromPosition:(id)arg1 toPreviousWordBoundaryInDocument:(id)arg2 tokenAccumulator:(CDUnknownBlockType)arg3;	// IMP=0x001000000082b7b0
- (id)copyTextInRange:(id)arg1 fromDocument:(id)arg2;	// IMP=0x001000000082b713
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3;	// IMP=0x001000000082b6e2
@end
