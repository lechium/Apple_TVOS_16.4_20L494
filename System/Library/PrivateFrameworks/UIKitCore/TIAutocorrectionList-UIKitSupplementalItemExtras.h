//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIAutocorrectionList.h>

@interface TIAutocorrectionList (UIKitSupplementalItemExtras)
- (id)ui_allSupplementalCandidates;	// IMP=0x00300000000fbf9e
@property(readonly, nonatomic) _Bool notEmpty;
@property(readonly, nonatomic) _Bool containsContinuousPathConversions;
@property(readonly, nonatomic) _Bool containsAutofillCandidates;
@property(readonly, nonatomic) _Bool isShowingSuggestionForKeyboardCamera;
- (long long)sourceForAutocorrection;	// IMP=0x003000000082b3b2
- (void)updateLabelsWithSmartPunctuation:(id)arg1;	// IMP=0x003000000082b0ec
@end

